<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('One Column'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_one_column.png',
  'theme' => 'bootstrap_one_column',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'middle' => t('Middle'),
    'bottom' => t('Bottom'),
  ),
);