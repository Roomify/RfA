<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Strict Sidebar Left'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_strict_sidebar_left.png',
  'theme' => 'bootstrap_strict_sidebar_left',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Sidebar'),
    'right' => t('Content'),
    'bottom' => t('Bottom'),
  ),
);