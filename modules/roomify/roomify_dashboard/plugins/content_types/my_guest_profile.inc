<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('My Guest Profile'),
  'render callback' => 'roomify_dashboard_my_guest_profile_render',
);

/**
 *
 */
function roomify_dashboard_my_guest_profile_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('My Guest Profile') . '</strong><br />' . t('Change your Guest profile information such as name, image or biography'), 'profile-guest/' . $user->uid . '/edit', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-your-profile'))) . '</p>';

  return $block;
}
