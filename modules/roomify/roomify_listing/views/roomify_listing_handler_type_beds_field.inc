<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_listing_handler_type_beds_field extends views_handler_field {

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

    $single_beds = field_get_items('bat_type', $type, 'field_st_single_bed');
    $double_beds = field_get_items('bat_type', $type, 'field_st_double_bed');
    $beds = $single_beds[0]['value'] + (2 * $double_beds[0]['value']);

    return $beds;
  }

}
