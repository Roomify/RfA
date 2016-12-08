<?php

/**
 * @file
 * roomify_things_to_do.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_things_to_do_ctools_plugin_api($module = NULL, $api = NULL) {
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
function roomify_things_to_do_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function roomify_things_to_do_image_default_styles() {
  $styles = array();

  // Exported image style: roomify_top_activity.
  $styles['roomify_top_activity'] = array(
    'label' => 'Roomify Top Activity',
    'effects' => array(
      48 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 550,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_top_activity',
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
function roomify_things_to_do_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Things to do'),
      'base' => 'node_content',
      'description' => t('Create activities to describe to guests what they can do in and around your property. Activities can also show up on the map if you give them an address and co-ordinates. This is a great way to help guests imagine how great a stay at your property could be.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
