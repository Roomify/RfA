<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Offers'),
  'render callback' => 'roomify_dashboard_manage_offers_render',
);

/**
 *
 */
function roomify_dashboard_manage_offers_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Offers') . '</strong>', 'admin/bat/config/global/offers', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-offers'))) . '</p>';

  return $block;
}
