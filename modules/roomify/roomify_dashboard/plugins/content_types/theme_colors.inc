<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Theme Colors'),
  'render callback' => 'roomify_dashboard_theme_colors_render',
  'edit form' => 'roomify_dashboard_theme_colors_edit_form',
);

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function roomify_dashboard_theme_colors_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function roomify_dashboard_theme_colors_edit_form_submit($form, &$form_state) {
  foreach (array('locanda_availability_search_title') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 *
 */
function roomify_dashboard_theme_colors_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  module_load_include('module', 'color', 'color.module');

  $theme = variable_get('theme_default', NULL);
  if ($theme == 'roomify_bootstrap' || $theme == 'roomify_bootstrap_wide' || $theme == 'roomify_travel') {
    $content = drupal_get_form('roomify_dashboard_theme_colors_form');
  }
  else {
    $content = '';
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}

/**
 *
 */
function roomify_dashboard_theme_colors_form($form, &$form_state) {
  $theme = variable_get('theme_default', NULL);

  $form['color'] = array(
    '#type' => 'fieldset',
    '#title' => t('Color scheme'),
    '#weight' => -1,
    '#attributes' => array('id' => 'color_scheme_form'),
    '#theme' => 'color_scheme_form',
  );

  $form['color'] += color_scheme_form($form, $form_state, $theme);

  $form['#attached']['js'] = array(
    drupal_get_path('module', 'roomify_dashboard') . '/js/roomify_dashboard_theme_colors.js',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Colors'),
  );

  $form['#validate'][] = 'color_scheme_form_validate';
  $form['#submit'][] = 'color_scheme_form_submit';

  return $form;
}
