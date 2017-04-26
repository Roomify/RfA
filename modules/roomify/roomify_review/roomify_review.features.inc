<?php

/**
 * @file
 * roomify_review.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function roomify_review_default_cer() {
  $items = array();
  $items['node:review:field_review_property_reviewed*roomify_property:casa_property:field_sp_property_rating'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:review:field_review_property_reviewed" } ] },
    "cer_right" : { "und" : [ { "path" : "roomify_property:casa_property:field_sp_property_rating" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "identifier" : "node:review:field_review_property_reviewed*roomify_property:casa_property:field_sp_property_rating",
    "rdf_mapping" : []
  }');
  $items['node:review:field_review_property_reviewed*roomify_property:locanda_property:field_sp_property_rating'] = entity_import('cer', '{
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_left" : { "und" : [ { "path" : "node:review:field_review_property_reviewed" } ] },
    "cer_right" : { "und" : [
        { "path" : "roomify_property:locanda_property:field_sp_property_rating" }
      ]
    },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "identifier" : "node:review:field_review_property_reviewed*roomify_property:locanda_property:field_sp_property_rating",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function roomify_review_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
