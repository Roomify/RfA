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
}
