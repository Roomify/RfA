<?php

/**
 * @file
 * roomify_landing_page.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function roomify_landing_page_filter_default_formats() {
  $formats = array();

  // Exported format: Landing Page text.
  $formats['landing_page_text'] = array(
    'format' => 'landing_page_text',
    'name' => 'Landing Page text',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
