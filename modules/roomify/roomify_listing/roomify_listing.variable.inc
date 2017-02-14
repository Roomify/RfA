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
  $variables['roomify_submission_reply_page_title'] = array(
    'title' => t('Submission page title'),
    'type' => 'string',
    'default' => 'Enquiry sent successfully!',
    'localize' => TRUE,
    'group' => 'roomify',
  );

  $variables['roomify_submission_reply_text'] = array(
    'title' => t('Submission reply'),
    'type' => 'text_format',
    'default' => array(
      'value' => 'Thank You. Your Enquiry has been received and a Conversation has started with the property owner. They will be able to reply and provide a customized offer for you.',
      'format' => 'filtered_text',
    ),
    'localize' => TRUE,
    'group' => 'roomify',
  );

  $variables['roomify_form_instructions_text'] = array(
    'title' => t('Form instructions'),
    'type' => 'text_format',
    'default' => array(
      'value' => '',
      'format' => 'filtered_text',
    ),
    'localize' => TRUE,
    'group' => 'roomify',
  );

  return $variables;
}
