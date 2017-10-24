<?php

/**
 * @file
 * File roomify_accommodation_booking.admin.inc.
 */

/**
 * Global Booking Settings form.
 */
function roomify_accommodation_booking_global_settings_form($form, &$form_state) {
  form_load_include($form_state, 'inc', 'rules', 'ui/ui.forms');
  form_load_include($form_state, 'inc', 'variable_realm', 'variable_realm.variable');
  module_load_include('form.inc', 'variable');
  _roomify_system_prepare_variables_realm();

  $form['roomify_booking_settings'] = array(
    '#type' => 'fieldset',
    '#group' => 'roomify_settings',
    '#title' => t('Roomify Accommodations booking settings'),
  );

  $form['roomify_booking_settings']['roomify_accommodation_booking_days_in_advance'] = array(
    '#type' => 'select',
    '#title' => t('How soon a booking may start'),
    '#options' => array(
      '0' => t('Same day bookings'),
      '1' => t('1 day in advance'),
      '2' => t('@count days in advance', array('@count' => 2)),
      '3' => t('@count days in advance', array('@count' => 3)),
      '4' => t('@count days in advance', array('@count' => 4)),
      '5' => t('@count days in advance', array('@count' => 5)),
      '6' => t('@count days in advance', array('@count' => 6)),
      '7' => t('@count days in advance', array('@count' => 7)),
    ),
    '#default_value' => variable_get('roomify_accommodation_booking_days_in_advance', 1),
  );

  $form['roomify_booking_settings']['roomify_accommodation_booking_future_limit'] = array(
    '#type' => 'rules_duration',
    '#title' => t('Advance Bookings'),
    '#description' => t('This will limit how far in the future bookings can be made.'),
    '#default_value' => variable_get('roomify_accommodation_booking_future_limit', 31104000),
  );

  $form['roomify_booking_settings']['roomify_accommodation_booking_allow_instant_bookings'] = array(
    '#type' => 'checkbox',
    '#title' => t('Allow instant bookings'),
    '#description' => t('Enabling instant bookings means that users will be able to book and pay immediately. Make sure to setup a suitable payment method.'),
    '#default_value' => variable_get('roomify_accommodation_booking_allow_instant_bookings', 1),
  );

  $form['roomify_booking_settings']['roomify_accommodation_booking_apply_tax_addons'] = array(
    '#type' => 'checkbox',
    '#title' => t('Apply property taxes to property add-ons'),
    '#default_value' => variable_get('roomify_accommodation_booking_apply_tax_addons', 1),
  );

  if ($deposit = rules_config_load('roomify_accommodation_booking_deposit')) {
    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_enabled'] = array(
      '#type' => 'checkbox',
      '#title' => t('Allow bookings based on a deposit'),
      '#options' => range(0, 1),
      '#description' => t('Allow guests to make bookings by paying a deposit (percentage or fixed amount) instead of the full booking price of their stay.'),
      '#default_value' => $deposit->active,
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset'] = array(
      '#type' => 'fieldset',
      '#title' => t('Payment deposit settings'),
      '#states' => array(
        'visible' => array(
          '#edit-roomify-accommodation-booking-deposit-enabled' => array('checked' => TRUE),
        ),
      ),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['roomify_accommodation_booking_deposit_multiply'] = array(
      '#type' => 'textfield',
      '#size' => 3,
      '#prefix' => '<div>' . t('Guests must pay a percentage of the full booking price at checkout to secure booking.') . '</div>',
      '#field_prefix' => t('Default value') . ':',
      '#field_suffix' => '%',
      '#default_value' => variable_get('roomify_accommodation_booking_deposit_multiply', 25),
    );

    $deposit_options = variable_get('roomify_accommodation_booking_deposit_options', array());

    if (!isset($form_state['num_deposit_options'])) {
      $form_state['num_deposit_options'] = (count($deposit_options)) ? count($deposit_options) : 1;
    }

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['roomify_accommodation_booking_deposit_vary_by_dates'] = array(
      '#type' => 'checkbox',
      '#title' => t('Vary deposit by dates'),
      '#default_value' => variable_get('roomify_accommodation_booking_deposit_vary_by_dates', 0),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options'] = array(
      '#type' => 'fieldset',
      '#title' => t('Deposit options'),
      '#prefix' => '<div id="deposit-options">',
      '#suffix' => '</div>',
      '#states' => array(
        'visible' => array(
          '#edit-roomify-accommodation-booking-deposit-vary-by-dates' => array('checked' => TRUE),
        ),
      ),
      '#tree' => TRUE,
      '#theme' => 'deposit_options_components',
    );

    for ($i = 1; $i <= $form_state['num_deposit_options']; $i++) {
      $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i] = array(
        '#type' => 'container',
      );

      $start_date_id = drupal_html_id('datepicker-start-date');
      $start_date_selector = '#' . $start_date_id . ' .form-text';

      $end_date_id = drupal_html_id('datepicker-end-date');
      $end_date_selector = '#' . $start_date_id . ' .form-text';

      $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['start_date'] = array(
        '#type' => 'date_popup',
        '#date_format' => variable_get('bat_daily_date_format', 'Y-m-d'),
        '#field_prefix' => t('From'),
        '#prefix' => '<div class="container-inline"><div class="start-date" id="' . $start_date_id . '">',
        '#suffix' => '</div>',
        '#datepicker_options' => array('endDateSelector' => $end_date_selector),
      );

      $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['end_date'] = array(
        '#type' => 'date_popup',
        '#date_format' => variable_get('bat_daily_date_format', 'Y-m-d'),
        '#field_prefix' => t('to'),
        '#prefix' => '<div class="end-date" id="' . $end_date_id . '">',
        '#suffix' => '</div>',
        '#datepicker_options' => array('startDateSelector' => $start_date_selector),
        '#attached' => array(
          'js' => array(
            drupal_get_path('module', 'bat') . '/js/bat_date_popup.js',
            array(
              'data' => array(
                'bat' => array(
                  'datepickers' => array(
                    $start_date_selector => array(
                      'endDateSelector' => $end_date_selector,
                    ),
                  ),
                ),
              ),
              'type' => 'setting',
            ),
          ),
        ),
      );

      $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['deposit'] = array(
        '#type' => 'textfield',
        '#field_prefix' => t('deposit is'),
        '#field_suffix' => '%',
        '#size' => 3,
      );

      $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['remove_option'] = array(
        '#type' => 'submit',
        '#value' => t('Remove'),
        '#submit' => array('roomify_accommodation_booking_deposit_option_remove_submit'),
        '#name' => 'remove_option_' . $i,
        '#ajax' => array(
          'callback' => 'roomify_accommodation_booking_deposit_option_add_one_callback',
          'wrapper' => 'deposit-options',
        ),
        '#suffix' => '</div>',
      );

      $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['weight'] = array(
        '#type' => 'textfield',
        '#default_value' => $i,
        '#size' => 3,
        '#attributes' => array('class' => array('item-row-weight')),
      );

      if (!$form_state['rebuild']) {
        $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['start_date']['#default_value'] = (isset($deposit_options['option_' . $i]['start_date'])) ? $deposit_options['option_' . $i]['start_date'] : '';

        $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['end_date']['#default_value'] = (isset($deposit_options['option_' . $i]['end_date'])) ? $deposit_options['option_' . $i]['end_date'] : '';

        $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['option_' . $i]['deposit']['#default_value'] = (isset($deposit_options['option_' . $i]['end_date'])) ? $deposit_options['option_' . $i]['deposit'] : '';
      }
    }

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options']['add_another'] = array(
      '#type' => 'submit',
      '#value' => t('Add another'),
      '#submit' => array('roomify_accommodation_booking_deposit_option_add_one_submit'),
      '#ajax' => array(
        'callback' => 'roomify_accommodation_booking_deposit_option_add_one_callback',
        'wrapper' => 'deposit-options',
      ),
      '#limit_validation_errors' => array(),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['roomify_accommodation_booking_full_payment'] = array(
      '#type' => 'checkbox',
      '#title' => t('Require full payment for close-in bookings'),
      '#default_value' => variable_get('roomify_accommodation_booking_full_payment', 0),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['roomify_accommodation_booking_full_payment_period'] = array(
      '#type' => 'container',
      '#states' => array(
        'visible' => array(
          '#edit-roomify-accommodation-booking-full-payment' => array('checked' => TRUE),
        ),
      ),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['roomify_accommodation_booking_full_payment_period']['roomify_accommodation_booking_full_payment_duration'] = array(
      '#type' => 'rules_duration',
      '#default_value' => variable_get('roomify_accommodation_booking_full_payment_duration', 86400),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_page_settings_fieldset'] = array(
      '#type' => 'fieldset',
      '#title' => t('Booking page settings'),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_page_settings_fieldset']['roomify_accommodation_booking_deposit_label'] = array(
      '#type' => 'textfield',
      '#title' => t('Deposit label'),
      '#default_value' => variable_get('roomify_accommodation_booking_deposit_label', 'Deposit (%deposit% down)'),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_page_settings_fieldset']['roomify_accommodation_booking_payable_now_label'] = array(
      '#type' => 'textfield',
      '#title' => t('Payable now label'),
      '#default_value' => variable_get('roomify_accommodation_booking_payable_now_label', 'Payable now'),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_page_settings_fieldset']['roomify_accommodation_booking_reminder_label'] = array(
      '#type' => 'textfield',
      '#title' => t('Remainder label'),
      '#default_value' => variable_get('roomify_accommodation_booking_reminder_label', 'Remainder (due 60 days before arrival)'),
    );

    $form['roomify_booking_settings']['roomify_accommodation_booking_page_settings_fieldset']['roomify_accommodation_booking_total_cost_label'] = array(
      '#type' => 'textfield',
      '#title' => t('Total cost label'),
      '#default_value' => variable_get('roomify_accommodation_booking_total_cost_label', 'Total cost'),
    );

    $form['#submit'][] = 'roomify_accommodation_booking_deposit_config_form_submit';
  }

  $form['roomify_booking_settings']['roomify_accommodation_booking_checkout_settings_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Checkout page settings'),
  );

  $form['roomify_booking_settings']['roomify_accommodation_booking_checkout_settings_fieldset']['commerce_checkout_completion_message'] = variable_form_element(variable_get_info('commerce_checkout_completion_message'));

  $form['#validate'][] = 'roomify_accommodation_booking_global_settings_form_validate';

  $form['#attached']['css'][] = drupal_get_path('module', 'roomify_accommodation_booking') . '/css/booking_global_settings.css';

  return system_settings_form($form);
}

/**
 * Validation function for the roomify_accommodation_booking_global_settings_form form.
 */
function roomify_accommodation_booking_global_settings_form_validate($form, &$form_state) {
  foreach ($form_state['values']['deposit_options'] as $id => $option) {
    if (is_array($option)) {
      if ($option['start_date'] != '' && $option['end_date'] != '' && $option['deposit'] != '') {
        if ((new DateTime($option['start_date'])) >= (new DateTime($option['end_date']))) {
          form_set_error('deposit_options[' . $id . '][end_date', t('End date must be after start date'));
        }
      }
    }
  }
}

/**
 *
 */
function roomify_accommodation_booking_deposit_option_remove_submit($form, &$form_state) {
  if ($form_state['num_deposit_options'] > 1) {
    $form_state['num_deposit_options']--;
  }

  $index = $form_state['triggering_element']['#parents'][1];

  $values_options = $form_state['values']['deposit_options'];
  unset($values_options[$index]);
  unset($values_options['add_another']);

  $i = 1;
  $form_state['values']['deposit_options'] = array();
  foreach ($values_options as $option) {
    $form_state['values']['deposit_options']['option_' . $i++] = $option;
  }

  $input_options = $form_state['input']['deposit_options'];
  unset($input_options[$index]);
  unset($input_options['add_another']);

  $i = 1;
  $form_state['input']['deposit_options'] = array();
  foreach ($input_options as $option) {
    $form_state['input']['deposit_options']['option_' . $i++] = $option;
  }

  $form_state['rebuild'] = TRUE;
}

/**
 * Submit callback for "Add another" deposit option.
 */
function roomify_accommodation_booking_deposit_option_add_one_submit($form, &$form_state) {
  $form_state['num_deposit_options']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * Ajax callback on "Add another" deposit option.
 */
function roomify_accommodation_booking_deposit_option_add_one_callback($form, &$form_state) {
  return $form['roomify_booking_settings']['roomify_accommodation_booking_deposit_fieldset']['deposit_options'];
}

/**
 * Custom submit callback for roomify_accommodation_booking_global_settings_form.
 */
function roomify_accommodation_booking_deposit_config_form_submit($form, &$form_state) {
  $deposit_options = array();

  uasort($form_state['values']['deposit_options'], 'drupal_sort_weight');

  $i = 1;
  foreach ($form_state['values']['deposit_options'] as $option) {
    if (is_array($option)) {
      if ($option['start_date'] != '' && $option['end_date'] != '' && $option['deposit'] != '') {
        $deposit_options['option_' . $i++] = $option;
      }
    }
  }
  variable_set('roomify_accommodation_booking_deposit_options', $deposit_options);

  // "Roomify deposit payment" rule.
  $rule = rules_config_load('roomify_accommodation_booking_deposit');

  if (!$form_state['values']['roomify_accommodation_booking_deposit_enabled']) {
    $rule->active = FALSE;
  }
  else {
    $rule->active = TRUE;

    foreach ($rule->conditions() as $condition) {
      $condition->delete();
    }

    $rule->condition('entity_is_of_bundle', array(
      'entity:select' => 'commerce-line-item',
      'type' => 'commerce_line_item',
      'bundle' => array('roomify_accommodation_booking'),
    ));

    $rule->condition('entity_has_field', array(
      'entity:select' => 'commerce-line-item:commerce-booking-reference',
      'field' => 'booking_start_date',
    ));

    if ($form_state['values']['roomify_accommodation_booking_full_payment']) {
      $rule->condition('data_is', array(
        'data:select' => 'commerce-line-item:commerce-booking-reference:booking-start-date',
        'op' => '>',
        'value' => '+ ' . format_interval($form_state['values']['roomify_accommodation_booking_full_payment_duration']),
      ));
    }

    foreach ($rule as $action) {
      if ($action instanceof RulesAction) {
        $action->delete();
      }
    }

    $rule->action('roomify_accommodation_booking_deposit_apply', array(
      'commerce_line_item:select' => 'commerce_line_item',
    ));
  }

  $rule->save();

  // "Adjust line item price following checkout with deposit" rule.
  $rule = rules_config_load('roomify_accommodation_booking_deposit_checkout');

  if (!$form_state['values']['roomify_accommodation_booking_deposit_enabled']) {
    $rule->active = FALSE;
  }
  else {
    $rule->active = TRUE;
  }

  $rule->save();

  // Clear BAT constraint cache so any changes will get picked up.
  cache_clear_all('bat_event_constraints_info', 'cache');
}

/**
 * Theme 'Deposit options' as tabledrag.
 */
function theme_deposit_options_components($variables) {
  $element = $variables['element'];
  drupal_add_tabledrag('deposit-options-table', 'order', 'sibling', 'item-row-weight');

  $rows = array();
  foreach (element_children($element) as $key) {
    if ($key != 'add_another') {
      $weight = $element[$key]['weight'];
      unset($element[$key]['weight']);

      $row = array(
        'data' => array(
          drupal_render($element[$key]),
          drupal_render($weight),
        ),
        'class' => array('draggable'),
      );

      $rows[] = $row;
    }
  }

  $output = theme('table', array('header' => array(), 'rows' => $rows, 'attributes' => array('id' => 'deposit-options-table')));
  $output .= drupal_render($element['add_another']);

  return $output;
}
