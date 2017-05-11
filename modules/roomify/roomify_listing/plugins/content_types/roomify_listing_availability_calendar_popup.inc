<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Type Availability calendar modal'),
  'render callback' => 'roomify_listing_availability_calendar_popup',
  'required context' => new ctools_context_required(t('Roomify Property'), 'roomify_property'),
);

/**
 *
 */
function roomify_listing_availability_calendar_popup($subtype, $conf, $args, $pane_context, $incoming_content) {
  $property = $pane_context->data;

  roomify_dashboard_setup_modal();

  $content = '';
  if ($property->type == 'casa_property') {
    if (!empty($property->property_bat_type_reference[LANGUAGE_NONE][0]['target_id'])) {
      $type = bat_type_load($property->property_bat_type_reference[LANGUAGE_NONE][0]['target_id']);
      $content = l(t('View Calendar'), 'type-availability-calendar/' . $type->type_id, array('attributes' => array('class' => 'view-type-availability-calendars ctools-use-modal ctools-modal-roomify-dashboard-modal-style')));
    }
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
