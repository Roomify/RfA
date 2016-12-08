<?php

/**
 * @file
 * Variable module integration for the Roomiry Terms Conditions module.
 */

/**
 * Implements hook_variable_info().
 */
function roomify_terms_conditions_variable_info($options = array()) {
  $variables['roomify_terms_conditions_message'] = array(
    'type' => 'string',
    'title' => t('Terms and Conditions text', array(), $options),
    'default' => 'I accept the <a target="_blank" href="/terms-and-conditions">Terms & Conditions</a>',
    'localize' => TRUE,
    'group' => 'roomify',
  );

  $variables['roomify_terms_conditions_body'] = array(
    'type' => 'text_format',
    'title' => t('Terms and Conditions body'),
    'default' => 'This is my body',
    'localize' => TRUE,
    'group' => 'roomify',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function roomify_terms_conditions_variable_group_info() {
  $groups['roomify'] = array(
    'title' => t('Roomify'),
    'description' => t('Roomify variables.'),
    'access' => 'administer site configuration',
  );

  return $groups;
}
