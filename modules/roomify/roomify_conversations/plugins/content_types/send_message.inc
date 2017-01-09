<?php

/**
 * @file
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Send message'),
  'icon' => 'icon_node.png',
  'description' => t('Display a form with a textarea for message and "Send message" button'),
  'category' => t('Roomify Conversations'),
  'required context' => new ctools_context_required(t('Conversation'), 'roomify_conversation'),
);

/**
 *
 */
function roomify_conversations_send_message_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context->data)) {
    return;
  }

  $conversation = $context->data;

  $form = drupal_get_form('roomify_conversations_send_message_form', $conversation->conversation_id);
  $output = drupal_render($form);

  // Build the content type block.
  $block = new stdClass();
  $block->content = $output;

  return $block;
}
