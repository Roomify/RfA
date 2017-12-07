<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Property availability calendar'),
  'description' => t('Add a link to the Property page.'),
  'render callback' => 'roomify_availability_calendar_render',
  'required context' => new ctools_context_required(t('Roomify Property'), 'roomify_property'),
);

/**
 * Render callback.
 */
function roomify_availability_calendar_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $property = $pane_context->data;

  $content = '';

  foreach ($property->property_bat_type_reference[LANGUAGE_NONE] as $type_id) {
    $type = bat_type_load($type_id['target_id']);

    $calendar = field_view_field('bat_type', $type, 'field_st_calendar_reference', array('type' => 'bat_calendar_reference_month_view'));

    if ($type->type == 'room') {
      $content .= '<div class="col-md-6 col-xs-12">';
      $content .= '<h4>' . $type->name . '</h4>';
    }
    else {
      $content .= '<div class="col-xs-12">';
    }

    // Remove the Calendar title.
    if (isset($calendar[0]['#prefix'])) {
      $calendar[0]['#prefix'] = '';
    }
    $content .= render($calendar);
    $content .= '<div class="calendar-legend">
      <span class="available-date">' . t('Available Night') . '</span>
      <span class="unavailable-date">' . t('Unavailable Night') . '</span>
    </div>';

    $content .= '</div>';
  }

  $block = new stdClass();
  $block->title = '<span id="property-availability-tab"></span>' . t('Availability');
  $block->content = $content;

  return $block;
}
