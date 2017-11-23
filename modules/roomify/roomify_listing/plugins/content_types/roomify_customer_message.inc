<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Customer Message'),
  'description' => t('Shows the customer message.'),
  'render callback' => 'roomify_customer_message_render',
);

/**
 * Render callback.
 */
function roomify_customer_message_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $language;

  variable_realm_switch('language', $language->language);

  $message = variable_get_value('roomify_customer_support_message');
  $block = new stdClass();
  $block->content = $message['value'];

  return $block;
}
