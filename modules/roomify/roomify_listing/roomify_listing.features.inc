<?php

/**
 * @file
 * roomify_listing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_listing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function roomify_listing_views_api() {
  return array(
    'api' => "3.0",
    'path' => drupal_get_path('module', 'roomify_listing') . '/views',
  );
}

/**
 * Implements hook_default_entityform_type().
 */
function roomify_listing_default_entityform_type() {
  $items = array();
  $items['listing_enquiry'] = entity_import('entityform_type', '{
    "type" : "listing_enquiry",
    "label" : "Listing Enquiry",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "Send Request",
      "submit_confirm_msg" : "\u003Cnone\u003E",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "Your Enquiry has been received and a Conversation has started with the property owner.\r\n\r\nThey will be able to reply and provide a customized offer for you.",
        "format" : "plain_text"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "30037204" : 0,
        "4" : 0,
        "5" : 0,
        "6" : 0,
        "7" : 0,
        "8" : 0,
        "163670334" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "plain_text" },
      "enable_block" : 0
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\/submit\/listing-enquiry",
        "alias" : "contact2",
        "language" : "und"
      }
    }
  }');

  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function roomify_listing_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite".
  $flags['favorites'] = array(
    'entity_type' => 'roomify_property',
    'title' => 'Favorite',
    'global' => 0,
    'types' => array(
      0 => 'casa_property',
      1 => 'locanda_property',
    ),
    'flag_short' => 'Save this property',
    'flag_long' => '',
    'flag_message' => 'Saved!',
    'unflag_short' => 'Remove',
    'unflag_long' => 'Remove from favorites',
    'unflag_message' => 'Removed!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'token' => 'token',
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'roomify_listing',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
