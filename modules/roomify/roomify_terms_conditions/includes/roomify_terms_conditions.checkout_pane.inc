<?php

/**
 * @file
 * Checkout pane callback functions for the roomify_terms_conditions module.
 */

/**
 * Checkout pane callback: returns the Terms & Conditions checkbox.
 */
function roomify_terms_conditions_review_pane_checkout_form($form, &$form_state, $checkout_pane, $order) {
  global $language;

  variable_realm_switch('language', $language->language);

  $pane_form = array();

  $pane_form['terms_conditions'] = array(
    '#type' => 'checkbox',
    '#title' => variable_get_value('roomify_terms_conditions_message'),
    '#required' => TRUE,
  );

  return $pane_form;
}
