<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Sidebar Right'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_sidebar_right.png',
  'theme' => 'bootstrap_sidebar_right',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Content'),
    'right' => t('Sidebar'),
    'bottom' => t('Bottom'),
  ),
);