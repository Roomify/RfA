<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_listing_views_data_alter(&$data) {
  $data['bat_types']['book_this'] = array(
    'field' => array(
      'title' => t('Book This Link'),
      'help' => t('Display links to Book the Property Space.'),
      'handler' => 'roomify_listing_handler_type_book_this_field',
    ),
  );

  $data['bat_types']['beds'] = array(
    'field' => array(
      'title' => t('Beds'),
      'help' => t('Display total number of beds.'),
      'handler' => 'roomify_listing_handler_type_beds_field',
    ),
  );

  $data['bat_types']['booking_cost'] = array(
    'field' => array(
      'title' => t('Booking cost'),
      'help' => t('Display the booking cost.'),
      'handler' => 'roomify_listing_handler_type_booking_cost_field',
    ),
  );
}
