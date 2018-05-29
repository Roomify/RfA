<?php

/**
 * @file
 * roomify_properties_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_properties_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function roomify_properties_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function roomify_properties_list_image_default_styles() {
  $styles = array();

  // Exported image style: 1600x460.
  $styles['1600x460'] = array(
    'label' => '1600x460',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1600,
          'height' => 460,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => '1600x460',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
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
