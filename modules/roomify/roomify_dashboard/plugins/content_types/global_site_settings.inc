<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Global Site Settings'),
  'render callback' => 'roomify_dashboard_global_site_settings_render',
);

/**
 *
 */
function roomify_dashboard_global_site_settings_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-global-site-settings',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Global Site Settings') . '</strong>', 'admin/bat/config/global/settings', $options) . '</p>';

  return $block;
}
