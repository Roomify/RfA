<?php

/**
 * @file
 * Makes layers a colorable theme.
 */

$info = array();

// Define the possible replaceable items and their labels.
$info['fields'] = array(
  'header' => t('Header'),
  'footer' => t('Footer'),
  'links' => t('Header/Footer Links'),
  'hoverlinks' => t('Header/Footer Hover Menu Links'),
  'text' => t('Header/Footer Text'),
);

// Color schemes for the site.
$info['schemes']['default'] = array(
  'title' => t('Default'),
  'colors' => array(
    'header' => '#ffffff',
    'footer' => '#333333',
    'links' => '#7c7c7c',
    'hoverlinks' => '#000000',
    'text' => '#868686',
  ),
);

// Define the CSS file(s) that we want the Color module to use as a base.
$info['css'] = array('color/color.css');

/**
 * Default settings for the advanced stuff.
 *
 * No need to edit these if you just want to play around with the colors.
 * Color wants these, otherwise it's not going to play.
 *
 * We dive deeper into these in the Part 2. Advanced Color settings.
 */

// Files we want to copy along with the CSS files, let's define these later.
$info['copy'] = array('logo.png');

// Files used in the scheme preview.
$info['preview_css'] = 'color/preview.css';
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.php';

// Gradients.
$info['gradients'] = array();

// Color areas to fill (x, y, width, height).
$info['fill'] = array();
$info['blend_target'] = '#1abc9c';
// Coordinates of all the theme slices (x, y, width, height).
// with their filename as used in the stylesheet.
$info['slices'] = array();

// Base file for image generation.
$info['base_image'] = 'color/base.png';
