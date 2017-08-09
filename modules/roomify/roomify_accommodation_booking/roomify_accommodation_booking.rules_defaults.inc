<?php

/**
 * @file
 */

/**
 * Implements hook_default_rules_configuration().
 */
function roomify_accommodation_booking_default_rules_configuration() {
  $rules = array();

  if ($guest_role = user_role_load_by_name('guest')) {
    $rules['rules_assign_guest_role_on_checkout'] = entity_import('rules_config', '{
      "rules_assign_guest_role_on_checkout" : {
        "LABEL" : "Assign \u0022guest\u0022 role on checkout",
        "PLUGIN" : "reaction rule",
        "WEIGHT" : "10",
        "OWNER" : "rules",
        "TAGS" : [ "Commerce Checkout" ],
        "REQUIRES" : [ "rules", "rules_conditional", "commerce_checkout" ],
        "ON" : { "commerce_checkout_complete" : [] },
        "IF" : [
          { "entity_has_field" : { "entity" : [ "commerce-order" ], "field" : "commerce_customer_billing" } }
        ],
        "DO" : [
          { "user_add_role" : {
              "account" : [ "commerce-order:owner" ],
              "roles" : { "value" : [ "' . $guest_role->rid . '" ] }
            }
          },
          { "entity_fetch" : {
              "USING" : {
                "type" : "commerce_customer_profile",
                "id" : [ "commerce-order:commerce-customer-billing:profile-id" ]
              },
              "PROVIDE" : { "entity_fetched" : { "customer_profile" : "Customer profile" } }
            }
          },
          { "CONDITIONAL" : [
              {
                "IF" : { "entity_has_field" : { "entity" : [ "customer-profile" ], "field" : "booking_telephone" } },
                "DO" : [
                  { "data_set" : {
                      "data" : [ "commerce-order:owner:user-telephone" ],
                      "value" : [ "customer-profile:booking-telephone" ]
                    }
                  }
                ]
              }
            ]
          },
          { "CONDITIONAL" : [
              {
                "IF" : { "entity_has_field" : {
                    "entity" : [ "customer-profile" ],
                    "field" : "commerce_customer_address"
                  }
                },
                "DO" : [
                  { "data_set" : {
                      "data" : [ "commerce-order:owner:user-address" ],
                      "value" : [ "customer-profile:commerce-customer-address" ]
                    }
                  },
                  { "data_set" : {
                      "data" : [ "commerce-order:owner:user-first-name" ],
                      "value" : [ "customer-profile:commerce-customer-address:first-name" ]
                    }
                  },
                  { "data_set" : {
                      "data" : [ "commerce-order:owner:user-last-name" ],
                      "value" : [ "customer-profile:commerce-customer-address:last-name" ]
                    }
                  }
                ]
              }
            ]
          },
          { "LOOP" : {
              "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
              "ITEM" : { "line_item" : "Line item" },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : { "entity" : [ "line-item" ], "field" : "commerce_booking_reference" } },
                      "DO" : [
                        { "entity_fetch" : {
                            "USING" : {
                              "type" : "bat_booking",
                              "id" : [ "line-item:commerce-booking-reference:booking-id" ]
                            },
                            "PROVIDE" : { "entity_fetched" : { "booking" : "Booking" } }
                          }
                        },
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "entity_has_field" : { "entity" : [ "booking" ], "field" : "booking_user_guest" } },
                              "DO" : [
                                { "data_set" : {
                                    "data" : [ "booking:booking-user-guest" ],
                                    "value" : [ "commerce-order:owner" ]
                                  }
                                }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          }
        ]
      }
    }');
  }

  $rule = rules_reaction_rule();

  $rule->label = t('Roomify Accommodation Booking');
  $rule->tags = array('Commerce Checkout');
  $rule->active = TRUE;

  $rule
    ->event('commerce_product_calculate_sell_price')
    ->action('roomify_accommodation_booking_price_apply', array('account:commerce_line_item' => 'commerce-line-item'));

  $rule->weight = -100;

  $rules['roomify_accommodation_booking'] = $rule;

  $rule = rules_reaction_rule();

  $rule->label = t('Roomify deposit payment');
  $rule->tags = array('Roomify');
  $rule->active = FALSE;

  $rule
    ->event('commerce_product_calculate_sell_price')
    ->condition('entity_is_of_bundle', array(
      'entity:select' => 'commerce-line-item',
      'type' => 'commerce_line_item',
      'bundle' => array('roomify_accommodation_booking'),
    ))
    ->condition('entity_has_field', array('entity:select' => 'commerce-line-item:commerce-booking-reference', 'field' => 'booking_start_date'))
    ->action('roomify_accommodation_booking_deposit_apply', array('commerce_line_item:select' => 'commerce_line_item'));

  $rule->weight = 10;

  $rules['roomify_accommodation_booking_deposit'] = $rule;

  $rule = rules_reaction_rule();

  $rule->label = t('Adjust line item price following checkout with deposit');
  $rule->tags = array('Roomify');
  $rule->active = FALSE;

  $rule
    ->event('commerce_checkout_complete');

  $loop = rules_loop(array(
    'list:select' => 'commerce-order:commerce-line-items',
    'item:var' => 'list_item',
    'item:label' => 'Current list item',
  ));
  $loop->action('roomify_accommodation_booking_booked_price', array('commerce_line_item:select' => 'list-item'));
  $loop->action('entity_save', array('data:select' => 'list-item', 'immediate' => 1));
  $rule->action($loop);

  $rule->weight = 10;

  $rules['roomify_accommodation_booking_deposit_checkout'] = $rule;

  $rules['rules_send_an_order_notification_e_mail_to_the_property_owner'] = entity_import('rules_config', '{ "rules_send_an_order_notification_e_mail_to_the_property_owner" : {
      "LABEL" : "Send an order notification e-mail to the property owner",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "rules_conditional",
        "roomify_accommodation_booking",
        "rules",
        "commerce_checkout"
      ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : {
                        "data" : [ "list-item:type" ],
                        "value" : "roomify_accommodation_booking"
                      }
                    },
                    "DO" : [
                      { "roomify_accommodation_booking_send_mail" : { "commerce_line_item" : [ "list-item" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');

  $rules['commerce_checkout_order_email'] = entity_import('rules_config', '{ "commerce_checkout_order_email" : {
      "LABEL" : "Send an order notification e-mail",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "4",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout" ],
      "REQUIRES" : [ "rules_conditional", "rules", "pet", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : {
                        "data" : [ "list-item:type" ],
                        "value" : "roomify_accommodation_booking"
                      }
                    },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : {
                            "type" : "bat_booking",
                            "id" : [ "list-item:commerce-booking-reference:booking-id" ]
                          },
                          "PROVIDE" : { "entity_fetched" : { "bat_booking" : "Bat Booking" } }
                        }
                      },
                      { "pet_action_send_pet" : {
                          "pet_name" : "order_confirmation",
                          "to_text" : "[commerce-order:mail]",
                          "to_account" : [ "" ],
                          "account_subs" : [ "" ],
                          "node_subs" : [ "" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');

  $rules['rules_notify_property_owner_when_a_booking_com_booking_is_update'] = entity_import('rules_config', '{ "rules_notify_property_owner_when_a_booking_com_booking_is_update" : {
      "LABEL" : "Notify property owner when a Booking.com booking is modified",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "roomify_accommodation_booking", "bat_booking" ],
      "ON" : { "bat_booking_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "bat-booking:type" ], "value" : "booking_com" } }
      ],
      "DO" : [
        { "roomify_accommodation_booking_email_owner_bcom_updated" : { "bat_booking" : [ "bat_booking" ] } }
      ]
    }
  }');

  $rules['rules_notify_property_owner_when_an_ical_booking_is_saved'] = entity_import('rules_config', '{ "rules_notify_property_owner_when_an_ical_booking_is_saved" : {
      "LABEL" : "Notify property owner when an iCal booking is saved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "roomify_accommodation_booking", "bat_booking" ],
      "ON" : { "bat_booking_update" : [] },
      "IF" : [ { "data_is" : { "data" : [ "bat-booking:type" ], "value" : "ical" } } ],
      "DO" : [
        { "roomify_accommodation_booking_email_owner_ical_booking_saved" : { "bat_booking" : [ "bat_booking" ] } }
      ]
    }
  }');

  return $rules;
}
