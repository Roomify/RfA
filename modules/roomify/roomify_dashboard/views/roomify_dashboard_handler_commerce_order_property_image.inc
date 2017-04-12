<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links as fields.
 */

/**
 *
 */
class roomify_dashboard_handler_commerce_order_property_image extends views_handler_field {

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
    $order = $values->_field_data['order_id']['entity'];
    $order_wrapper = entity_metadata_wrapper('commerce_order', $order);

    foreach ($order_wrapper->commerce_line_items as $line_item_wrapper) {
      if ($line_item_wrapper->type->value() == 'roomify_accommodation_booking') {
        if ($commerce_booking_reference = $line_item_wrapper->commerce_booking_reference->value()) {
          if ($booking_event_reference = $commerce_booking_reference->booking_event_reference[LANGUAGE_NONE][0]['target_id']) {
            $event = bat_event_load($booking_event_reference);
            if ($unit = bat_unit_load($event->event_bat_unit_reference[LANGUAGE_NONE][0]['target_id'])) {
              $type = bat_type_load($unit->type_id);
              if ($property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id'])) {
                if (($property->type == 'casa_property' || $property->type == 'locanda_property') && !empty($property->field_sp_featured_image[LANGUAGE_NONE][0]['uri'])) {

                  return l(theme('image_style', array(
                    'path' => $property->field_sp_featured_image[LANGUAGE_NONE][0]['uri'],
                    'style_name' => 'square',
                  )), 'listing/' . $property->property_id, array('html' => TRUE));
                }
              }
            }
          }
        }
      }
    }
  }

}
