<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Configure Social Feeds'),
  'render callback' => 'roomify_dashboard_configure_social_feeds_render',
);

/**
 *
 */
function roomify_dashboard_configure_social_feeds_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Configure Social Feeds') . '</strong><br />' . t('Manage which social feeds are displayed, and select the pages on which they are shown'), 'admin/config/content/rsf', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-feeds-settings'))) . '</p>';

  return $block;
}
