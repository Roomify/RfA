<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Booking Notifications'),
  'render callback' => 'roomify_dashboard_booking_notifications_render',
);

/**
 *
 */
function roomify_dashboard_booking_notifications_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Booking Notifications') . '</strong><br/>' . t('Manage the number and frequency of booking reminder emails'), 'admin/bat/config/booking/notifications', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-booking-notifications-settings'))) . '</p>';

  return $block;
}
