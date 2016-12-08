<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Logout'),
  'render callback' => 'roomify_dashboard_logout_render',
);

/**
 *
 */
function roomify_dashboard_logout_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Logout') . '</strong>', 'user/logout', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-logout'))) . '</p>';

  return $block;
}
