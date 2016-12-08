<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Property Page'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_property_page.png',
  'theme' => 'bootstrap_property_page',
  'admin css' => '../panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'slideshow' => t('Slideshow'),
    'headline' => t('Headline'),
    'highlight-intro' => t('Highlight Intro'),
    'highlight1' => t('Highlight 1'),
    'highlight2' => t('Highlight 2'),
    'highlight3' => t('Highlight 3'),
    'booking' => t('Booking'),
    'user-details' => t('User details'),
    'property-types' => t('Property types'),
    'property-description' => t('Property description'),
  ),
);
