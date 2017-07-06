<?php

/**
 * @file
 */

/**
 *
 */
class roomify_search_handler_reviews_number extends views_handler_field {

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
      if ($property = $values->_entity_properties['entity object']) {
        $reviews = field_get_items('roomify_property', $property, 'field_sp_property_rating');
        $count = count($reviews);
        if (empty($reviews)) {
          return t('0 Reviews');
        }
        else {
          return format_plural($count, t('@count Review'), t('@count Reviews'));
        }
      }
      return '';
    }
  }

}
