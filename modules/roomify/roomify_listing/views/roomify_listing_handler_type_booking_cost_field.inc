<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_listing_handler_type_booking_cost_field extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();
    $this->additional_fields['type_id'] = 'type_id';
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $type = bat_type_load($values->{$this->aliases['type_id']});

    $text = !empty($this->options['text']) ? $this->options['text'] : t('Book');
    $date_format = variable_get('bat_daily_date_format', 'Y-m-d');

    if (isset($_GET['bat_start_date']) && isset($_GET['bat_end_date'])) {
      $validation1 = date_parse(check_plain($_GET['bat_start_date']));
      $validation2 = date_parse(check_plain($_GET['bat_end_date']));

      if ($validation1['error_count'] != 0 || $validation2['error_count'] != 0) {
        $rate = roomify_accommodation_booking_get_rates($type->type_id);

        $currency_setting = commerce_currency_load(commerce_default_currency());
        $default_cost = commerce_currency_format($rate['nightly']->getEventDefaultValue('pricing'), $currency_setting['code']);

        return $default_cost . '<span class="price-info"> p.n.</span>';
      }
      else {
        $group_size = 0;

        $start_date = new DateTime(check_plain($_GET['bat_start_date']));

        $end_date = new DateTime(check_plain($_GET['bat_end_date']));
        $end_date->sub(new DateInterval('PT1M'));

        if (isset($type->field_st_rates_for_person[LANGUAGE_NONE][0]['value']) &&
          $type->field_st_rates_for_person[LANGUAGE_NONE][0]['value']) {
          if (isset($_GET['group_size']) && !empty($_GET['group_size'])) {
            $group_size = check_plain($_GET['group_size']);
          }
          $price = roomify_accommodation_booking_calculate_price($start_date, $end_date, $type->type_id, $group_size);
        }
        else {
          $price = roomify_accommodation_booking_calculate_price($start_date, $end_date, $type->type_id);
        }

        $currency_setting = commerce_currency_load(commerce_default_currency());
        $booking_cost = commerce_currency_format($price, $currency_setting['code']);

        if (module_exists('roomify_offers')) {
          $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

          $offers = roomify_offers_get_offers($property, $start_date, $end_date);

          if (!empty($offers)) {
            $offer_amount = roomify_accommodation_booking_calculate_price($start_date, $end_date, $type->type_id, $group_size, $offers);

            // Don't show offer price when greater then amount.
            if ($offer_amount < $price) {
              $offer_cost = commerce_currency_format($offer_amount, $currency_setting['code']);

              $booking_cost = '<div class="booking-cost">' . $booking_cost . '</div><div class="offer-cost">' . $offer_cost . '</div>';
            }
          }
        }

        return $booking_cost;
      }
    }
    else {
      $rate = roomify_accommodation_booking_get_rates($type->type_id);

      $currency_setting = commerce_currency_load(commerce_default_currency());
      $default_cost = commerce_currency_format($rate['nightly']->getEventDefaultValue('pricing'), $currency_setting['code']);

      return $default_cost . '<span class="price-info"> p.n.</span>';
    }
  }

}
