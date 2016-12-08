<?php

/**
 * @file
 */

/**
 * Implements hook_rules_action_info().
 */
function roomify_accommodation_booking_rules_action_info() {
  $actions = array();

  $actions['roomify_accommodation_booking_price_apply'] = array(
    'label' => t('Apply price to a booking line item'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
    ),
    'group' => t('Roomify'),
    'callbacks' => array(
      'execute' => 'roomify_accommodation_booking_price_apply',
    ),
  );

  $actions['roomify_accommodation_booking_booked_price'] = array(
    'label' => t('Set the line item price to the booked price'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
    ),
    'group' => t('Roomify'),
    'callbacks' => array(
      'execute' => 'roomify_accommodation_booking_booked_price',
    ),
  );

  $actions['roomify_accommodation_booking_deposit_apply'] = array(
    'label' => t('Set the line item price to the deposit price'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
    ),
    'group' => t('Roomify'),
    'callbacks' => array(
      'execute' => 'roomify_accommodation_booking_deposit_apply',
    ),
  );

  $actions['roomify_accommodation_booking_send_mail'] = array(
    'label' => t('Send PET mail to the property owner and roomify manager'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
    ),
    'group' => t('Roomify'),
    'callbacks' => array(
      'execute' => 'roomify_accommodation_booking_send_mail',
    ),
  );

  $actions['roomify_accommodation_booking_email_owner_bcom_updated'] = array(
    'label' => t('Send email to property owner when a booking.com booking is updated'),
    'parameter' => array(
      'bat_booking' => array(
        'type' => 'bat_booking',
        'label' => t('Bat Booking'),
      ),
    ),
    'group' => t('Roomify Booking'),
    'callbacks' => array(
      'execute' => 'roomify_accommodation_booking_email_owner_bcom_updated',
    ),
  );

  $actions['roomify_accommodation_booking_email_owner_ical_booking_saved'] = array(
    'label' => t('Send email to property owner when an ical booking is saved'),
    'parameter' => array(
      'bat_booking' => array(
        'type' => 'bat_booking',
        'label' => t('Bat Booking'),
      ),
    ),
    'group' => t('Roomify Booking'),
    'callbacks' => array(
      'execute' => 'roomify_accommodation_booking_email_owner_ical_booking_saved',
    ),
  );

  return $actions;
}
