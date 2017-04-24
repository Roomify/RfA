<?php

/**
 * @file
 */

/**
 * Implements hook_rules_action_info().
 */
function roomify_contact_rules_action_info() {
  $actions = array();

  $actions['roomify_contact_notify_managers'] = array(
    'label' => t('Notify Managers on a contact form submission'),
    'parameter' => array(
      'entityform' => array(
        'type' => 'entityform',
        'label' => t('EntityForm'),
      ),
    ),
    'group' => t('Roomify'),
    'callbacks' => array(
      'execute' => 'roomify_contact_notify_managers',
    ),
  );

  return $actions;
}
