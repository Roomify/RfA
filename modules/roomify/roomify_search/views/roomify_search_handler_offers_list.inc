<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_search_handler_offers_list extends views_handler_field {

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
      $offer_participating = '';

      if (isset($_GET['bat_start_date']) && isset($_GET['bat_start_date'])) {
        $date_format = variable_get('bat_daily_date_format', 'Y-m-d');
        $start_date = new DateTime(check_plain($_GET['bat_start_date']));

        $end_date = new DateTime(check_plain($_GET['bat_end_date']));
        $end_date->sub(new DateInterval('PT1M'));

        $property = roomify_property_load($pid);
        if ($offers = roomify_offers_get_offers($property, $start_date, $end_date)) {
          foreach ($offers as $offer) {
            $offer_description = isset($offer->offer_description[LANGUAGE_NONE][0]['value']) ? $offer->offer_description[LANGUAGE_NONE][0]['value'] : '';
            $offer_help_text = '<strong>' . $offer->name . '</strong>' . '<br>' . $offer_description;
            $offer_participating .= '<div class="offer-icon offer-link yellow-tooltip" data-toggle="tooltip" data-html="true" title="' . $offer_help_text . '" data-placement="left"></div>';

          }
        }
      }
    }
    return $offer_participating;
  }

}
