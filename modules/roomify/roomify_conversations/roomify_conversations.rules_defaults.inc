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
