<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Users Profiles'),
  'render callback' => 'roomify_dashboard_manage_users_profiles_render',
);

/**
 *
 */
function roomify_dashboard_manage_users_profiles_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Users Profiles') . '</strong><br />' . t('See a list of all user profiles, and edit their accounts and information'), 'admin/people/profiles', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-users-profiles'))) . '</p>';

  return $block;
}
