<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_search_handler_bathrooms_largest_room extends views_handler_field {

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
      if ($property_types = $values->_entity_properties['entity object']->property_bat_type_reference[LANGUAGE_NONE]) {
        $bathrooms = 0;
        foreach ($property_types as $type_id) {
          $type = bat_type_load($type_id['target_id']);
          if ($type->status) {
            $n_bathrooms = field_get_items('bat_type', $type, 'field_st_bathrooms');
            // Select the type with the greater n. of bathrooms.
            if (isset($n_bathrooms[0]['value']) && $n_bathrooms[0]['value'] >= $bathrooms) {
              $bathrooms = $n_bathrooms[0]['value'];
            }
          }
        }
        return $bathrooms;
      }
    }
  }

}
