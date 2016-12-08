<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Locanda Availability Search Form'),
  'description' => t('Add an Availability search form.'),
  'render callback' => 'locanda_availability_search_form_render',
  'edit form' => 'locanda_availability_search_edit_form',
);

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function locanda_availability_search_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function locanda_availability_search_edit_form_submit($form, &$form_state) {
  foreach (array('locanda_availability_search_title') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render callback.
 */
function locanda_availability_search_form_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $title = '';
  $content = drupal_get_form('locanda_search_availability_search_form');

  $price = get_lower_default_price_property_types($args[0]);

  if ($price) {
    $title = '<span class="title">' . t('Check Availability') . '</span>' . ' ' . '<span class="roomify-starting-price">' . t('Starting from') . ' ' . $price . ' ' . t('per night') . '</span>';
  }
  else {
    $title = '<span class="title">' . t('Check Availability') . '</span>';
  }

  $block = new stdClass();

  $block->title = $title;
  $block->module = 'roomify_listing_availability_search_block';
  $block->delta = $subtype;
  $block->content = $content;

  return $block;
}
