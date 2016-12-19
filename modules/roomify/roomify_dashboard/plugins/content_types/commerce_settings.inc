<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Commerce Settings'),
  'render callback' => 'roomify_dashboard_commerce_settings_render',
);

/**
 *
 */
function roomify_dashboard_commerce_settings_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-commerce-settings',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Commerce Settings') . '</strong><br/>' . t('Manage Commerce settings such as the default currency or the cart expiration time-out'), 'admin/bat/config/commerce/settings', $options) . '</p>';

  return $block;
}
