<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Global Customer message'),
  'render callback' => 'roomify_dashboard_manage_global_customer_message_render',
);

/**
 *
 */
function roomify_dashboard_manage_global_customer_message_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Global Customer message') . '</strong></br>' . t('Add a message in different pages of your site'), 'admin/config/content/rcs', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-feeds-settings'))) . '</p>';

  return $block;
}
