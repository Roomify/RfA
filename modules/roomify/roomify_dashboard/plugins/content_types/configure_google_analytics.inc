<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Configure Google Analytics'),
  'render callback' => 'roomify_dashboard_configure_google_analytics_render',
);

/**
 *
 */
function roomify_dashboard_configure_google_analytics_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p><a href="#" id="dashboard-configure-google-analytics"><strong>Configure Google Analytics</strong></a></p>';

  return $block;
}
