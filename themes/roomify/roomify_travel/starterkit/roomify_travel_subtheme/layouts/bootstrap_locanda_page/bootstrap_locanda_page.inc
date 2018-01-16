<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Locanda Page'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_locanda_page.png',
  'theme' => 'bootstrap_locanda_page',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'middle' => t('Middle'),
    'bottom-left' => t('Bottom Left'),
    'bottom-right' => t('Bottom Right'),
  ),
);