<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying an edit links of types.
 */

/**
 *
 */
class roomify_dashboard_handler_properties_types_edit_link extends views_handler_field {

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
    if (isset($values->roomify_properties_type) && $values->roomify_properties_type == 'casa_property') {

      if ($type = bat_type_load($values->_field_data['property_id']['entity']->property_bat_type_reference[LANGUAGE_NONE][0]['target_id'])) {
        $url = l(t('House'), 'admin/bat/config/types/manage/' . $type->type_id . '/edit', array('attributes' => array('class' => 'type-link casa-type'), 'query' => array('destination' => 'admin/bat/config/property/manage/' . $values->property_id)));
        return $url;
      }
    }
    $url = l(t('Rooms'), 'admin/bat/config/property/manage/' . $values->property_id . '/types', array('attributes' => array('class' => 'type-link'), 'query' => array('destination' => 'admin/bat/config/property/manage/' . $values->property_id)));
    return $url;
  }

}
