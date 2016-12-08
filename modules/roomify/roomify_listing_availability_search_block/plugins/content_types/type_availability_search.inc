<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Type Availability Search Form'),
  'description' => t('Adds a type availability search form on the type page.'),
  'render callback' => 'bat_type_availability_search_form_render',
  'edit form' => 'bat_type_availability_search_edit_form',
);

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function bat_type_availability_search_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function bat_type_availability_search_edit_form_submit($form, &$form_state) {
  foreach (array('locanda_availability_search_title') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render callback.
 */
function bat_type_availability_search_form_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $title = '';
  $content = drupal_get_form('bat_type_search_availability_form');

  $block = new stdClass();
  if ($title != '') {
    $block->title = $title;
  }

  $block->module = 'roomify_listing_availability_search_block';
  $block->delta = $subtype;
  $block->content = $content;

  return $block;
}
