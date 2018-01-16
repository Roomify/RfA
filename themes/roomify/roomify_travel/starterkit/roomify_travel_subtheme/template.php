<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


function roomify_travel_subtheme_status_messages($variables) {

  if (module_exists('better_messages')) {
    return theme_better_messages($variables);
  }
}
