<?php

/**
 * @file
 * roomify_properties_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_properties_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function roomify_properties_list_node_info() {
  $items = array(
    'properties_list' => array(
      'name' => t('Properties List'),
      'base' => 'node_content',
      'description' => t('Use this to create page with a list of properties, for example "Villas with pool" or "Cottages in the woods"'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
