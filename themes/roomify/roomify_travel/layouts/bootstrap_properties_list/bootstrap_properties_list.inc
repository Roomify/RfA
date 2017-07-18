<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Properties List'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_properties_list.png',
  'theme' => 'bootstrap_properties_list',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'middle' => t('Middle'),
    'highlight1' => t('Highlight1'),
    'highlight2' => t('Highlight2'),
    'highlight3' => t('Highlight3'),
    'middle-second' => t('Middle Second'),
    'bottom' => t('Bottom'),
  ),
);