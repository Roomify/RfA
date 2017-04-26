<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_review_views_data_alter(&$data) {
  $data['node']['user_guest_name'] = array(
    'field' => array(
      'title' => t('User/Guest name'),
      'help' => t('Display the user name or the guest profile name, if set.'),
      'handler' => 'roomify_review_handler_user_guest_name_field',
    ),
  );
  $data['node']['user_guest_image'] = array(
    'field' => array(
      'title' => t('User/Guest image'),
      'help' => t('Display a user dummy image or the guest profile image, if set.'),
      'handler' => 'roomify_review_handler_user_guest_image_field',
    ),
  );
}
