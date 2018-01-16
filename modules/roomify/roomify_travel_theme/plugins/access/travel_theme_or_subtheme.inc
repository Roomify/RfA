<?php

/**
 * @file
 */

$plugin = array(
  'title' => t('Travel themes group'),
  'description' => t('Allow access if the current theme is part of the travel themes.'),
  'callback' => 'roomify_travel_theme_access_if_travel_theme_group',
);

/**
 * Check for access.
 */
function roomify_travel_theme_access_if_travel_theme_group($conf, $context) {
  global $theme;

  if ($theme == 'roomify_travel') {
    return TRUE;
  }
  else {
    $all_themes = list_themes();

    if (isset($all_themes[$theme]->info['base theme'])) {
      // It has a subtheme.
      $base_themes = drupal_find_base_themes($all_themes, $theme);

      return (array_key_exists('roomify_travel', $base_themes)) ? TRUE : FALSE;
    }
  }

  return FALSE;
}
