<?php

/**
 * @file
 */

$plugin = array(
  'title' => t('Favorite property flagged'),
  'description' => t('Allow access if at least one property is flagged as favorite.'),
  'summary' => 'access_if_property_flagged_as_favorite_summary',
  'callback' => 'access_if_property_flagged_as_favorite',
);

/**
 * Check for access.
 */
function access_if_property_flagged_as_favorite($conf, $context) {
  $flag = flag_get_user_flags('roomify_property');

  if (empty($flag)) {
    return FALSE;
  }
  else {
    return TRUE;
  }
}

/**
 * Provide a summary description.
 */
function access_if_property_flagged_as_favorite_summary($conf, $context) {
  return t('Allows access if a property is flagged as Favorite.');
}
