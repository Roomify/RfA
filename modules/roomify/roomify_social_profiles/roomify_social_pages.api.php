<?php

/**
 * @file
 * Hooks provided by the Ridiculously Responsive Social Share Buttons module.
 */

/**
 * Provide configuration for social share buttons.
 *
 * @return array
 *   Array of button configuration.  The key is an identifier for the button.
 *   The value is an associative array that may contain the following key-value pairs.
 *   You must pass at least one of share_url and follow_url, and you may pass both.
 *   - "svg": Required.  SVG definition, in the form of an <svg> tag and contained paths.
 *     The SVG should be minified, without any width/height/fill/etc.
 *   - "share_url": URL for users to share your page using this social media site.  Placeholders {{param}}
 *     will be replaced with values from the current page: url; title; image.
 *   - "follow_url": URL for users to follow you using this social media site.  Placeholder {{username}}
 *     will be replaced with the user name you configured for this social media site.
 *   - "color": Background color to use for this button.
 *   - "color_hover": Background color to use for this button on hover.
 *   - "text": Text to use for this button.  Defaults to the identifier used as a key for this button.
 *
 * @see roomify_social_profiles_roomify_social_profiles_buttons
 */
function hook_roomify_social_profiles_buttons() {
}

/**
 * Alter the configuration for social share buttons provided by other modules.
 *
 * @param $buttons Existing button configration, see @hook_roomify_social_profiles_buttons.
 */
function hook_roomify_social_profiles_buttons_alter(&$buttons) {
}
