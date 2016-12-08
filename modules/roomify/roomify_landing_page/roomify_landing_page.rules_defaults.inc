<?php

/**
 * @file
 * roomify_landing_page.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function roomify_landing_page_default_rules_configuration() {
  $items = array();
  $items['rules_change_cta_image_style_'] = entity_import('rules_config', '{ "rules_change_cta_image_style_" : {
      "LABEL" : "Change CTA image style.",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "ffc" ],
      "ON" : { "field_is_rendered" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "paragraphs-item:bundle" ],
            "op" : "IN",
            "value" : { "value" : {
                "image" : "image",
                "image_and_text" : "image_and_text",
                "linked_image" : "linked_image",
                "linked_image_and_text" : "linked_image_and_text"
              }
            }
          }
        }
      ],
      "DO" : [
        { "SWITCH" : {
            "USING" : { "data" : [ "paragraphs-item:field-cta-image-style" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "squared" },
                  "DO" : [
                    { "ffc_rules_change_image_style" : { "ffc_element" : [ "" ], "ffc_field" : [ "" ], "ffc_empty" : "square" } }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "rectangled" },
                  "DO" : [
                    { "ffc_rules_change_image_style" : {
                        "ffc_element" : [ "" ],
                        "ffc_field" : [ "" ],
                        "ffc_empty" : "roomify_4_3"
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
