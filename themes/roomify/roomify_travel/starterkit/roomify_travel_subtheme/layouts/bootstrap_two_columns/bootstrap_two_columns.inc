<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Columns'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_two_columns.png',
  'theme' => 'bootstrap_two_columns',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);
