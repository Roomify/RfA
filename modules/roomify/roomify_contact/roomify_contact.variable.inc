<?php

/**
 * @file
 * Variable module integration for the Roomify Contact module.
 */

/**
 * Implements hook_variable_info().
 */
function roomify_contact_variable_info($options = array()) {
  $variables['roomify_contact_page_text'] = array(
    'type' => 'text_format',
    'title' => t('Contact-us page text'),
    'default' => '',
    'localize' => TRUE,
    'group' => 'roomify',
  );

  return $variables;
}
