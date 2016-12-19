<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Global Booking Settings'),
  'render callback' => 'roomify_dashboard_global_booking_settings_render',
);

/**
 *
 */
function roomify_dashboard_global_booking_settings_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-global-booking-settings',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Global Booking Settings') . '</strong><br/>' . t('Manage global booking settings, such as deposits'), 'admin/bat/config/booking/settings', $options) . '</p>';

  return $block;
}
