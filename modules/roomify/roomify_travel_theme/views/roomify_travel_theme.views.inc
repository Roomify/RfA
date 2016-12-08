<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_travel_theme_views_data_alter(&$data) {
  $data['entityqueue_subqueue']['starting_price'] = array(
    'field' => array(
      'title' => t('Starting Price'),
      'help' => t('Display the type of the property with the lower price'),
      'handler' => 'roomify_travel_theme_handler_starting_price',
    ),
  );

  $data['taxonomy_term_data']['area_properties'] = array(
    'field' => array(
      'title' => t('Area Properties'),
      'help' => t('Display a list of properties of this Area'),
      'handler' => 'roomify_travel_theme_handler_areas_properties',
    ),
  );

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
}
