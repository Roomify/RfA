<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_search_handler_starting_type_price extends views_handler_field {

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
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    if (isset($values->_entity_properties['property_id'])) {
      $pid = $values->_entity_properties['property_id'];

      if (isset($_GET['bat_start_date']) && isset($_GET['bat_start_date']) && isset($_GET['group_size'])) {
        $date_format = variable_get('bat_daily_date_format', 'Y-m-d');
        $start_date = new DateTime(check_plain($_GET['bat_start_date']));

        $end_date = new DateTime(check_plain($_GET['bat_end_date']));
        $end_date->sub(new DateInterval('PT1M'));

        $price = get_property_lower_booking_cost($pid, $start_date, $end_date, check_plain($_GET['group_size']));
      }
      else {
        $price = get_lower_default_price_property_types($pid);
      }

      return '<span class="starting-from">' . t('from') . ' </span>' . $price;
    }
  }

}
