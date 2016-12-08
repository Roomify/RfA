<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Five Columns'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_five_columns.png',
  'theme' => 'bootstrap_five_columns',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third'),
    'fourth' => t('Fourth'),
    'fifth' => t('Fifth'),
  ),
);
