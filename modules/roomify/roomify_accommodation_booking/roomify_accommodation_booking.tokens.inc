<?php

/**
 * @file
 */

/**
 * Implements hook_token_info_alter().
 */
function roomify_accommodation_booking_token_info_alter(&$data) {
  $data['tokens']['bat_booking']['days-left'] = array(
    'name' => t('Days left before the booking'),
    'description' => t('Days left before the booking.'),
  );
}

/**
 * Implements hook_tokens().
 */
function roomify_accommodation_booking_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $return = array();

  if ($type == 'bat_booking' && !empty($data['bat_booking'])) {
    $booking = $data['bat_booking'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'days-left':
          $booking_start_date = new DateTime($booking->booking_start_date[LANGUAGE_NONE][0]['value']);
          $today = new DateTime();
          $diff = $today->diff($booking_start_date);

          $return[$original] = ($diff->invert) ? -1 * $diff->days : $diff->days;
          break;
      }
    }
  }

  return $return;
}
