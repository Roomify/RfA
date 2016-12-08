<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Site Pages'),
  'render callback' => 'roomify_dashboard_manage_site_pages_render',
);

/**
 *
 */
function roomify_dashboard_manage_site_pages_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Site Pages') . '</strong>', 'admin/content', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-site-pages'))) . '</p>';

  return $block;
}
