<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('My Property Owner Profile'),
  'render callback' => 'roomify_dashboard_property_owner_profile_render',
);

/**
 *
 */
function roomify_dashboard_property_owner_profile_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('My Property Owner Profile') . '</strong><br />' . t('Change your Property Owner profile information such as name, image or other information about yourself'), 'user/' . $user->uid . '/edit/property_owner', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-your-profile'))) . '</p>';

  return $block;
}
