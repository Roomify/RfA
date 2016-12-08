<?php

/**
 * @file
 * Rules integration for Roomify Conversations.
 */

/**
 * Implements hook_rules_action_info().
 */
function roomify_conversations_rules_action_info() {
  $actions = array();

  $actions['roomify_conversations_send_message_email'] = array(
    'label' => t('Send email to conversation recipients when a new message is created'),
    'parameter' => array(
      'message' => array(
        'type' => 'message',
        'label' => t('Message entity'),
      ),
    ),
    'group' => t('Roomify Conversation'),
    'callbacks' => array(
      'execute' => 'roomify_conversations_send_message_email',
    ),
  );

  $actions['roomify_conversations_send_booking_offer_email'] = array(
    'label' => t('Send email to conversation guest when a new booking offer is created'),
    'parameter' => array(
      'bat_booking' => array(
        'type' => 'bat_booking',
        'label' => t('Bat Booking'),
      ),
    ),
    'group' => t('Roomify Conversation'),
    'callbacks' => array(
      'execute' => 'roomify_conversations_send_booking_offer_email',
    ),
  );

  $actions['roomify_conversations_new_conversation'] = array(
    'label' => t('Create a new conversation on commerce checkout'),
    'parameter' => array(
      'commerce_order' => array(
        'type' => 'commerce_order',
        'label' => t('Order'),
      ),
    ),
    'group' => t('Roomify Conversation'),
    'callbacks' => array(
      'execute' => 'roomify_conversations_new_conversation',
    ),
  );

  return $actions;
}
