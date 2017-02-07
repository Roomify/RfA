<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Redirects'),
  'render callback' => 'roomify_dashboard_manage_redirects_render',
);

/**
 *
 */
function roomify_dashboard_manage_redirects_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Redirects') . '</strong><br/>' . t('Here is where you may manage redirects'), 'admin/config/search/redirect', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-redirects'))) . '</p>';

  return $block;
}
