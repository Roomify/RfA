<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Contact-us page text'),
  'description' => t('Roomify Contact-us page text.'),
  'render callback' => 'roomify_contact_us_page_text_render',
);

/**
 * Render callback.
 */
function roomify_contact_us_page_text_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $language;

  variable_realm_switch('language', $language->language);

  $page_text = variable_get_value('roomify_contact_page_text', array('language' => $language));

  $block = new stdClass();
  $block->title = '';
  $block->content = check_markup($page_text['value'], $page_text['format']);

  return $block;
}
