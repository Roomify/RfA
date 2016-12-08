<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_system_views_data_alter(&$data) {
  $data['profile']['edit_profile'] = array(
    'field' => array(
      'title' => t('Edit Profile'),
      'help' => t('Provide a link to the edit form for the profile.'),
      'handler' => 'roomify_system_handler_edit_link_field',
    ),
  );
  $data['taxonomy_term_data']['area_properties'] = array(
    'field' => array(
      'title' => t('Area Properties'),
      'help' => t('Display a list of properties of this Area'),
      'handler' => 'roomify_system_handler_areas_properties',
    ),
  );
  $data['entityqueue_subqueue']['starting_price'] = array(
    'field' => array(
      'title' => t('Starting Price'),
      'help' => t('Display the type of the property with the lower price'),
      'handler' => 'roomify_system_handler_starting_price',
    ),
  );
}
