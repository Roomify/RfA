<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Availability Search form'),
  'render callback' => 'roomify_dashboard_manage_availability_search_form_render',
);

/**
 *
 */
function roomify_dashboard_manage_availability_search_form_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'manage-availability-search-form',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Availability Search form') . '</strong><br/>' . t('Manage certain availability search form elements'), 'admin/bat/config/availability-search/settings', $options) . '</p>';

  return $block;
}
