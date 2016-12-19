<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Configure Terms and Conditions'),
  'render callback' => 'roomify_dashboard_configure_terms_conditions_render',
);

/**
 *
 */
function roomify_dashboard_configure_terms_conditions_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-configure-terms-conditions',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Configure Terms and Conditions') . '</strong><br/>' . t('Here you can define the terms and conditions text that is linked to during checkout'), 'admin/config/content/terms-and-conditions', $options) . '</p>';

  return $block;
}
