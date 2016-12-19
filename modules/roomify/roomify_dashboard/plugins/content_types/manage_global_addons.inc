<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Global Add-Ons'),
  'render callback' => 'roomify_dashboard_manage_global_addons_render',
);

/**
 *
 */
function roomify_dashboard_manage_global_addons_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Global Add-Ons') . '</strong><br />' . t('Manage site wide Add-ons that can be purchased during checkout for any property'), 'admin/bat/config/add-ons', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-configure-store'))) . '</p>';

  return $block;
}
