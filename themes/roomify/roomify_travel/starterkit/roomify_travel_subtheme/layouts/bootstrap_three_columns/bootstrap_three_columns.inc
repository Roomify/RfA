<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three Columns'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_three_columns.png',
  'theme' => 'bootstrap_three_columns',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'center' => t('Center'),
    'right' => t('Right'),
  ),
);
