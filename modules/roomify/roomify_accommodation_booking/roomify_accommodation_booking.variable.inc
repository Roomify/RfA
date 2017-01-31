<?php

/**
 * @file
 * Variable module integration for the Roomify Listing module.
 */

/**
 * Implements hook_variable_info().
 */
function roomify_accommodation_booking_variable_info($options = array()) {
  $variables['commerce_checkout_completion_message'] = array(
    'type' => 'text_format',
    'title' => t('Checkout Completion Messsage'),
    'description' => t('You may use tokens like [commerce-order:order-number] for the Order number, [commerce-order:url] for the Order url or [site:url] for the Site main url.'),
    'default' => 'Your reservation number is [commerce-order:order-number]. You can <a href="[commerce-order:url]">view your reservation</a> on your account page when logged in.
  <br><br>
  <a href="[site:url]">Return to the front page.</a>',
    'localize' => TRUE,
    'group' => 'roomify',
    'required' => TRUE,
  );

  return $variables;
}
