<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Configure Payment Methods'),
  'render callback' => 'roomify_dashboard_configure_payment_methods_render',
);

/**
 *
 */
function roomify_dashboard_configure_payment_methods_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-configure-store',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Configure Payment Methods') . '</strong><br/>' . t('Define which of the available payment methods can be used'), 'admin/roomify/payment_methods', $options) . '</p>';

  return $block;
}
