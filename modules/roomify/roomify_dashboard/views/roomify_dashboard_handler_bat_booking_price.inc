<?php

/**
 * @file
 * Contains a Views field handler to show the right booking price.
 */

/**
 *
 */
class roomify_dashboard_handler_bat_booking_price extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {

    // Standard Booking.
    if (isset($values->field_booking_price) && (!empty($values->field_booking_price[0]['rendered']['#markup']))) {
      return $values->field_booking_price[0]['rendered']['#markup'];
    }

    // Booking.com Booking.
    if (isset($values->field_field_bcom_total_price) && (!empty($values->field_field_bcom_total_price[0]['rendered']['#markup']))) {

      $currency_setting = commerce_currency_load(commerce_default_currency());
      $currency_symbol = $currency_setting['symbol'];

      return $values->field_field_bcom_total_price[0]['rendered']['#markup'] . ' ' . $currency_symbol;
    }

    return '';
  }

}
