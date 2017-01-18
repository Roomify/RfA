<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Property Page'),
  'category' => t('Bootstrap'),
  'icon' => 'property_page.png',
  'theme' => 'property_page',
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
