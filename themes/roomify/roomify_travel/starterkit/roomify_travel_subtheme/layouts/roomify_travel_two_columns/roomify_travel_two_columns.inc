<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Roomify Travel 2 Columns'),
  'category' => t('Bootstrap'),
  'icon' => 'roomify_travel_two_columns.png',
  'theme' => 'roomify_travel_two_columns',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
  	'top' => t('Top'),
  	'main-left' => t('Main Left'),
    'main-right' => t('Main Right'),
    'main-center' => t('Main Center'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
