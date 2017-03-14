<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Manage Property link'),
  'description' => t('Add a link to the property edit page.'),
  'render callback' => 'roomify_manage_property_render',
  'required context' => new ctools_context_required(t('Roomify Property'), 'roomify_property'),
);

/**
 * Render callback.
 */
function roomify_manage_property_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $content = '';

  $property = $pane_context->data;

  if (roomify_property_access('update', $property)) {
    if ($property->type == 'casa_property' || $property->type == 'locanda_property') {
      $links = '<div class="manage-property-links"><div class="inner">';

      // Edit Property.
      $edit_link_help = '<strong>' . t('EDIT PROPERTY') . '</strong>' . '<br>' . t('Edit fields such as slideshow, overview description, policies or location');
      $edit_link = '<div class="manage-icon edit-link" data-toggle="tooltip" data-html="true" title="' . $edit_link_help . '" data-placement="bottom">' . l(t('Manage Property'), 'admin/bat/config/property/manage/' . $property->property_id, array('html' => TRUE)) . '</div>';

      // Manage Availability.
      $availability_link_help = '<strong>' . t('MANAGE AVAILABILITY') . '</strong>' . '<br>' . t('Manage the availability of your property');
      $availability_link = '<div class="manage-icon availbility-link" data-toggle="tooltip" data-html="true" title="' . $availability_link_help . '" data-placement="bottom">' . l(t('Manage Availability'), 'admin/bat/config/property/manage/' . $property->property_id . '/calendar/availability', array('html' => TRUE)) . '</div>';

      // Manage Pricing.
      $pricing_link_help = '<strong>' . t('MANAGE PRICING') . '</strong>' . '<br>' . t('Manage pricing of your property');
      $price_link = '<div class="manage-icon pricing-link" data-toggle="tooltip" data-html="true" title="' . $pricing_link_help . '" data-placement="bottom">' . l(t('Manage Pricing'), 'admin/bat/config/property/manage/' . $property->property_id . '/calendar/pricing', array('html' => TRUE)) . '</div>';

      // Manage House/Rooms.
      $rooms_link_help = '<strong>' . t('MANAGE ROOMS') . '</strong>' . '<br>' . t('Manage settings of all the rooms of your property');
      $rooms_link = '<div class="manage-icon rooms-link" data-toggle="tooltip" data-html="true" title="' . $rooms_link_help . '" data-placement="bottom">' . l(t('Manage Rooms'), 'admin/bat/config/property/manage/' . $property->property_id . '/types', array('html' => TRUE)) . '</div>';

      $links .= $edit_link . $availability_link . $price_link;

      if ($property->type == 'locanda_property') {
        $links .= $rooms_link;
      }

      $links .= '</div></div>';

    }
    else {
      $links = l(t('Manage Activity'), 'admin/bat/config/property/manage/' . $property->property_id, array('html' => TRUE, 'attributes' => array('class' => array('btn btn-warning manage-property-link'))));
    }

    $content = '<div class="row">' . $links . '</div>';
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
