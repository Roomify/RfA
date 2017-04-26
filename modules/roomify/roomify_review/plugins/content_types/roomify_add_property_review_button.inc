<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify property review link'),
  'description' => t('Add a link to the unit review page.'),
  'render callback' => 'roomify_add_property_review_button_render',
);

/**
 * Render callback.
 */
function roomify_add_property_review_button_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $link = '';
  if (user_access('create review content')) {
    $link = l(t('Review'), 'node/add/review', array('query' => array('property_id' => $args[0]), 'attributes' => array('class' => array('btn btn-default btn-info', 'roomify-property-review'))));
  }

  $block = new stdClass();
  $block->module = 'roomify_review';
  $block->delta = $subtype;
  $block->title = '';
  $block->content = $link;

  return $block;
}
