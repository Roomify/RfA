<?php

/**
 * @file
 * roomify_conversations.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function roomify_conversations_default_rules_configuration() {
  $items = array();
  $items['rules_notify_guest_when_new_booking_offer_made'] = entity_import('rules_config', '{ "rules_notify_guest_when_new_booking_offer_made" : {
      "LABEL" : "Notify guest when new booking offer made",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "roomify_conversations", "bat_booking" ],
      "ON" : { "bat_booking_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "bat-booking:type" ], "value" : "conversation_booking" } }
      ],
      "DO" : [
        { "roomify_conversations_send_booking_offer_email" : { "bat_booking" : [ "bat_booking" ] } }
      ]
    }
  }');
  $items['rules_notify_property_owner_when_new_booking_enquiry_received'] = entity_import('rules_config', '{ "rules_notify_property_owner_when_new_booking_enquiry_received" : {
      "LABEL" : "Notify property owner when new booking enquiry received",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "pet", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "listing_enquiry" } },
        { "entity_has_field" : {
            "entity" : [ "entityform" ],
            "field" : "field_listing_enquiry_type_ref"
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "user",
              "id" : [ "entityform:field-listing-enquiry-type-ref:uid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "pet_action_send_pet" : {
            "pet_name" : "new_booking_enquiry",
            "to_text" : [ "entity-fetched:mail" ],
            "to_account" : [ "" ],
            "account_subs" : [ "" ],
            "node_subs" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_users_when_a_new_message_is_created'] = entity_import('rules_config', '{ "rules_notify_users_when_a_new_message_is_created" : {
      "LABEL" : "Notify users when a new message is created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "roomify_conversations", "message" ],
      "ON" : { "message_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "message:type" ], "value" : "conversation" } }
      ],
      "DO" : [
        { "roomify_conversations_send_message_email" : { "message" : [ "message" ] } }
      ]
    }
  }');
  return $items;
}
