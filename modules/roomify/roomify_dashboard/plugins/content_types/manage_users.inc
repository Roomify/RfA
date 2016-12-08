<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Users'),
  'render callback' => 'roomify_dashboard_manage_users_render',
);

/**
 *
 */
function roomify_dashboard_manage_users_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Users') . '</strong><br />' . t('See a list of all users, edit their accounts and assign roles'), 'admin/people', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-users'))) . '</p>';

  return $block;
}
