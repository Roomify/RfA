<?php

/**
 * @file
 * Checkout pane callback functions for the roomify_global_addons module.
 */

/**
 * Checkout pane callback: returns the cart contents pane's settings form.
 */
function roomify_addons_contents_pane_settings_form($checkout_pane) {
  $form = array();
  $default = 'add_ons|panel_pane_1';
  $options = array();
  foreach (views_get_all_views() as $view_id => $view_value) {
    if ($view_id == 'add_ons') {
      foreach ($view_value->display as $display_id => $display_value) {
        $key = $view_id . '|' . $display_id;
        if ($key == $default) {
          $options[$view_id][$view_id . '|' . $display_id] = $display_value->display_title;
        }
      }
    }
  }

  $form['roomify_addons_contents_pane_view'] = array(
    '#type' => 'select',
    '#title' => t('Add ons View'),
    '#description' => t('Specify the line item listing View to use in the cart contents pane. It should not include line item summary links or any Views form elements (e.g. quantity textfiedls or delete buttons).') . '<br />' . t('You are not allowed to use any default Views defined by core Commerce modules except the cart summary View.'),
    '#options' => $options,
    '#default_value' => $default,
  );

  return $form;
}

/**
 * Checkout pane callback: returns the add ons content View.
 */
function roomify_addons_contents_pane_checkout_form($form, &$form_state, $checkout_pane, $order) {
  $pane_form = array();

  // Extract the View and display keys from the cart contents pane setting.
  list($view_id, $display_id) = explode('|', 'add_ons|panel_pane_1');

  $pane_form['addons_contents_view'] = array(
    '#markup' => commerce_embed_view($view_id, $display_id, array($order->order_id)),
  );

  return $pane_form;
}

/**
 *  Add ons pane callback: returns the add ons view contents review data for the
 *  Add ons checkout pane.
 */
function roomify_addons_contents_pane_review($form, $form_state, $checkout_pane, $order) {
  // Extract the View and display keys from the cart contents pane setting.
  list($view_id, $display_id) = explode('|', 'add_ons|panel_pane_1');

  return commerce_embed_view($view_id, $display_id, array($order->order_id));
}

/**
 * Checkout pane callback: returns the "my cart" contents pane's settings form.
 */
function roomify_mycart_contents_pane_settings_form($checkout_pane) {
  $form = array();
  $default = 'my_cart|default';
  $options = array();
  foreach (views_get_all_views() as $view_id => $view_value) {
    if ($view_id == 'my_cart') {
      foreach ($view_value->display as $display_id => $display_value) {
        $key = $view_id . '|' . $display_id;
        if ($key == $default) {
          $options[$view_id][$view_id . '|' . $display_id] = $display_value->display_title;
        }
      }
    }
  }

  $form['roomify_my_cart_contents_pane_view'] = array(
    '#type' => 'select',
    '#title' => t('My Cart View'),
    '#description' => t('Specify the line item listing View to use in the cart contents pane. It should not include line item summary links or any Views form elements (e.g. quantity textfiedls or delete buttons).') . '<br />' . t('You are not allowed to use any default Views defined by core Commerce modules except the cart summary View.'),
    '#options' => $options,
    '#default_value' => $default,
  );

  return $form;
}

/**
 * Checkout pane callback: returns the "my cart" contents View for inclusion in the
 * checkout form.
 */
function roomify_mycart_contents_pane_checkout_form($form, &$form_state, $checkout_pane, $order) {
  $pane_form = array();

  // Extract the View and display keys from the cart contents pane setting.
  list($view_id, $display_id) = explode('|', 'my_cart|default');

  $pane_form['mycart_contents_view'] = array(
    '#markup' => commerce_embed_view($view_id, $display_id, array($order->order_id)),
  );

  return $pane_form;
}

/**
 * Checkout pane callback: returns the "my cart" contents review data for the
 * Review checkout pane.
 */
function roomify_mycart_contents_pane_review($form, $form_state, $checkout_pane, $order) {
  // Extract the View and display keys from the cart contents pane setting.
  list($view_id, $display_id) = explode('|', 'my_cart|default');

  $cart = commerce_embed_view($view_id, $display_id, array($order->order_id));

  return $cart;
}
