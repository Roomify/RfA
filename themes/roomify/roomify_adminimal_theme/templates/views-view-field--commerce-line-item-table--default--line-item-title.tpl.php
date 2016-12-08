<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
  $printed = FALSE;

  if ($booking = bat_booking_load($row->_field_data['line_item_id']['entity']->commerce_booking_reference[LANGUAGE_NONE][0]['target_id'])) {
    $booking_wrapper = entity_metadata_wrapper('bat_booking', $booking);
    if ($booking_event_reference = $booking->booking_event_reference[LANGUAGE_NONE][0]['target_id']) {
    $event = bat_event_load($booking_event_reference);
      if ($unit = bat_unit_load($event->event_bat_unit_reference[LANGUAGE_NONE][0]['target_id'])) {
        $type = bat_type_load($unit->type_id);
        if ($property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id'])) {
          if ($property->type == 'casa_property' || $property->type == 'locanda_property') {
            print theme('image_style', array(
              'style_name' => 'roomify_thumbnail_rectangled',
              'path' => $property->field_sp_featured_image[LANGUAGE_NONE][0]['uri'],
              'attributes' => array('style' => 'margin-right: 10px; display: inline-block; vertical-align: middle;'),
            ));

            print '<div style="display: inline-block; vertical-align: middle;">' . $output . '<br>' . l(t('view property details'), 'listing/' . $property->property_id) . '</div>';

            $printed = TRUE;
          }
        }
      }
    }
  }

  if (!$printed) print $output;
?>
