<?php

/**
 * @file
 * Variable module integration for the Roomify Listing module.
 */

/**
 * Implements hook_variable_info().
 */
function roomify_listing_variable_info($options = array()) {
  $variables['roomify_customer_support_message'] = array(
    'type' => 'text_format',
    'title' => t('Roomify Custom Message'),
    'default' => '',
    'localize' => TRUE,
    'group' => 'roomify',
  );

  return $variables;
}
