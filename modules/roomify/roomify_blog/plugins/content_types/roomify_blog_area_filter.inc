<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Blog Area Filter'),
  'description' => t('Add a link to the listing edit page.'),
  'render callback' => 'roomify_area_select_render',
);

/**
 * Render callback.
 */
function roomify_area_select_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $form = drupal_get_form('roomify_area_select_form');

  $block = new stdClass();
  $block->content = $form;

  return $block;
}

/**
 *
 */
function roomify_area_select_form() {
  $form = array();
  $vocabulary = taxonomy_vocabulary_machine_name_load('location');
  $areas = taxonomy_get_tree($vocabulary->vid);

  $options = array();
  $options[0] = t('All Areas');
  foreach ($areas as $area) {
    $options[$area->name] = $area->name;
  };

  $form['roomify_area'] = array(
    '#type' => 'select',
    '#title' => t('Areas'),
    '#options' => $options,
    '#default_value' => $options[0],
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Go'),
  );

  return $form;
}

/**
 *
 */
function roomify_area_select_form_submit($form, &$form_state) {
  if ($form_state['values']['roomify_area'] != '0') {
    $area = $form_state['values']['roomify_area'];
    $area = strtolower($area);
    $area_blog_link = '/blog/' . strtr($area, ' ', '-');

    drupal_goto($area_blog_link);
  }

  drupal_goto('/blog');
}
