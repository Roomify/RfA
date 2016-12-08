<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Back to Property Link'),
  'description' => t('Add a link to the Property page.'),
  'render callback' => 'roomify_back_to_property_link_render',
  'required context' => new ctools_context_required(t('Bat type'), 'bat_type'),
);

/**
 * Render callback.
 */
function roomify_back_to_property_link_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $type = $pane_context->data;
  $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);
  $content = '';

  if ($featured_image = field_get_items('roomify_property', $property, 'field_sp_featured_image')) {
    $image = array(
      'style_name' => 'homepage_features',
      'path' => $featured_image[0]['uri'],
    );

    $content = '<a class="roomify-back-to-property" href="' . url('listing/' . $property->property_id) . '">';
    $content .= theme('image_style', $image);
    $content .= '<div class="property-title"><span class="glyphicon glyphicon-arrow-left"></span>' . t('Back to @name', array('@name' => $property->name)) . '</div>';
    $content .= '</a>';

  }
  else {
    $content = '<a class="roomify-back-to-property" href="' . url('listing/' . $property->property_id) . '">';
    $content .= '<div class="property-title"><span class="glyphicon glyphicon-arrow-left"></span>' . t('Back to @name', array('@name' => $property->name)) . '</div>';
    $content .= '</a>';
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
