<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_travel_theme_views_data_alter(&$data) {
  $data['search_api_index_blogposts_index']['addtoany'] = array(
    'field' => array(
      'title' => t('Add to Any buttons'),
      'help' => t('Display a list sharing button'),
      'handler' => 'roomify_travel_theme_handler_addtoany',
    ),
  );
  $data['search_api_index_things_to_do_index']['addtoany'] = array(
    'field' => array(
      'title' => t('Add to Any buttons'),
      'help' => t('Display a list sharing button'),
      'handler' => 'roomify_travel_theme_handler_addtoany',
    ),
  );
  $data['roomify_properties']['type_calendar_reference'] = array(
    'field' => array(
      'title' => t('Type Calendar reference'),
      'help' => t('Display a modal with the availability calendar'),
      'handler' => 'roomify_travel_theme_handler_type_availability_calendar',
    ),
  );
}
