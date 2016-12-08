<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Your Account'),
  'render callback' => 'roomify_dashboard_your_account_render',
);

/**
 *
 */
function roomify_dashboard_your_account_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('My Account') . '</strong><br />' . t('Change your username and password and manage other account settings'), 'user/' . $user->uid . '/edit', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-your-account'))) . '</p>';

  return $block;
}
