<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_travel_theme_handler_type_availability_calendar extends views_handler_field {

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
    if (isset($values->bat_types_field_data_property_bat_type_reference_type_id)) {
      $type = bat_type_load($values->bat_types_field_data_property_bat_type_reference_type_id);

      $content = l(t('View Calendar'), 'type-availability-calendar/' . $type->type_id, array('attributes' => array('class' => 'view-type-availability-calendars ctools-use-modal ctools-modal-roomify-dashboard-modal-style')));

      return $content;
    }

    return '';
  }

}
