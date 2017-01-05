<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Roomify Integrations'),
  'render callback' => 'roomify_dashboard_manage_roomify_integrations_render',
);

/**
 *
 */
function roomify_dashboard_manage_roomify_integrations_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Integrations') . '</strong><br />' . t('Manage Roomify integrations such as the Zopim live chat'), 'admin/config/roomify-integrations', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-integrations'))) . '</p>';

  return $block;
}
