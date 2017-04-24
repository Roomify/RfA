<?php

/**
 * @file
 * roomify_contact.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration.
 */
function roomify_contact_default_rules_configuration() {
  $items = array();

  $items['rules_notify_manager_after_contact_form_submission'] = entity_import('rules_config', '{ "rules_notify_manager_after_contact_form_submission" : {
      "LABEL" : "Notify manager after contact form submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "roomify_contact", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "contact" } }
      ],
      "DO" : [
        { "roomify_contact_notify_managers" : { "entityform" : [ "entityform" ] } }
      ]
    }
  }');

  return $items;
}
