<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Quick Setup'),
  'render callback' => 'roomify_dashboard_quick_setup_render',
);

/**
 *
 */
function roomify_dashboard_quick_setup_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Quick Setup') . '</strong><br />' . t('Set up your Roomify site with some example content'), 'admin/bat/config/example-content', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-quick-setup'))) . '</p>';

  return $block;
}
