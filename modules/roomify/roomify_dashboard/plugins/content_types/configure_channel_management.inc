<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Configure Channel Management'),
  'render callback' => 'roomify_dashboard_configure_channel_management_render',
);

/**
 *
 */
function roomify_dashboard_configure_channel_management_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Configure Channel Management') . '</strong><br/>' . t('Manage Channel Manager settings'), 'admin/config/services/channel-management', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-channel-management-settings'))) . '</p>';

  return $block;
}
