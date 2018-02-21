<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_listing_handler_type_book_this_field extends bat_type_handler_link_field {

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
  public function render($values) {
    $type = bat_type_load($values->{$this->aliases['type_id']});

    // Check if the room may be booked.
    $instant_booking = field_get_items('bat_type', $type, 'field_st_allow_instant_bookings');
    $button_text = $instant_booking[0]['value'] ? t('Book Now') : t('Make Enquiry');

    $text = !empty($this->options['text']) ? $this->options['text'] : $button_text;
    $date_format = variable_get('bat_daily_date_format', 'Y-m-d');

    $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

    if (isset($_GET['bat_start_date']) && isset($_GET['bat_end_date'])) {
      $validation1 = date_parse(check_plain($_GET['bat_start_date']));
      $validation2 = date_parse(check_plain($_GET['bat_end_date']));

      if ($validation1['error_count'] != 0 || $validation2['error_count'] != 0) {
        $return = l($text, '/listing/' . $property->property_id, array('attributes' => array('class' => array('btn btn-primary btn-info'), 'html' => 'true', 'disabled' => 'true')));
        $return .= '<div class="info">' . t('define dates to check availability') . '<div>';
      }
      else {
        $start_date = new DateTime(check_plain($_GET['bat_start_date']));
        $arrival = $start_date->format($date_format);

        $end_date = new DateTime(check_plain($_GET['bat_end_date']));
        $departure = $end_date->format($date_format);

        $end_date->sub(new DateInterval('PT1M'));

        $group_size = $_GET['group_size'];

        if ($group_size > $type->field_st_max_capacity[LANGUAGE_NONE][0]['value']) {
          $return = l($text, '/listing/' . $property->property_id, array('attributes' => array('class' => array('btn btn-primary btn-info'), 'html' => 'true', 'disabled' => 'true')));
          $return .= '<div class="info">' . t('not enough space') . '<div>';
        }
        elseif (bat_event_get_matching_units($start_date, $end_date, array(AVAILABLE), $type->type_id, 'availability') === FALSE) {
          $return = l($text, '/listing/' . $property->property_id, array('attributes' => array('class' => array('btn btn-primary btn-info'), 'html' => 'true', 'disabled' => 'true')));
          $return .= '<div class="info">' . t('not available for these dates') . '<div>';
        }
        else {
          if ($instant_booking[0]['value']) {
            $currency_setting = commerce_currency_load(commerce_default_currency());
            $currency_symbol = $currency_setting['symbol'];
            $price = roomify_accommodation_booking_calculate_price($start_date, $end_date, $type->type_id);
            $booking_cost = commerce_currency_format($price, $currency_setting['code']);
            $text = $text . ' ' . t('at @booking_cost', array('@booking_cost' => $booking_cost));
          }
          $return = l($text, '/booking/' . $arrival . '/' . $departure . '/' . $type->type_id, array('query' => array('property' => $property->property_id, 'group_size' => $group_size), 'attributes' => array('class' => array('btn btn-primary btn-success'), 'html' => 'true')));
        }
      }
    }
    else {
      $return = l($text, '/listing/' . $property->property_id, array('attributes' => array('class' => array('btn btn-primary btn-info'), 'html' => 'true', 'disabled' => 'true', 'data-toggle' => 'tooltip', 'data-placement' => 'top', 'title' => t('define dates to check availability'))));
      $return .= '<div class="info">' . t('define dates to check availability') . '</div>';
    }

    return $return;
  }

}
