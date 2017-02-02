<?php

/**
 * @file
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Activity stream'),
  'icon' => 'icon_node.png',
  'description' => t('Activity stream'),
  'category' => t('Roomify Conversations'),
  'required context' => new ctools_context_required(t('Conversation'), 'roomify_conversation'),
);

/**
 *
 */
function roomify_conversations_activity_stream_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context->data)) {
    return;
  }

  $conversation = $context->data;

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'message');
  $query->fieldCondition('message_conversation_reference', 'target_id', $conversation->conversation_id);
  $results = $query->execute();

  $output_array = array();

  if (!empty($results)) {
    foreach ($results['message'] as $value) {
      $message = message_load($value->mid);
      $message_array = entity_view('message', array($message));
      $output_array[$message->timestamp] = drupal_render($message_array);
    }
  }

  $output_array[$conversation->created] = roomify_conversations_inquiry_render($conversation);

  if (isset($conversation->conversation_booking_ref[LANGUAGE_NONE][0]['target_id'])) {
    if ($booking = bat_booking_load($conversation->conversation_booking_ref[LANGUAGE_NONE][0]['target_id'])) {
      $booking_array = entity_view('bat_booking', array($booking), 'conversation');
      $output_array[$booking->created] = drupal_render($booking_array);
    }
  }

  ksort($output_array, SORT_NUMERIC);

  $output = implode($output_array);

  // Build the content type block.
  $block = new stdClass();
  $block->content = $output;

  return $block;
}
