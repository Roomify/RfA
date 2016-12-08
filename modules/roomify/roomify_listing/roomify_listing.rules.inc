<?php

/**
 * @file
 */

/**
 * Implements hook_rules_condition_info().
 */
function roomify_listing_rules_condition_info() {
  $conditions = array();

  $conditions['roomify_listing_property_comparison'] = array(
    'label' => t('Property comparison'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Commerce line item'),
      ),
      'property_id' => array(
        'type' => 'integer',
        'label' => t('Property id'),
      ),
    ),
    'group' => t('Roomify'),
    'callbacks' => array(
      'execute' => 'roomify_listing_property_comparison',
    ),
  );

  return $conditions;
}

/**
 *
 */
function roomify_listing_property_comparison($line_item, $property_id) {
  $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);

  $unit = $line_item_wrapper->commerce_booking_reference->booking_event_reference->event_bat_unit_reference->value();
  $type = bat_type_load($unit->type_id);
  $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

  if ($property->property_id == $property_id) {
    return TRUE;
  }

  return FALSE;
}
