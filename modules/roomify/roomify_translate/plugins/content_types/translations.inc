<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Translations'),
  'render callback' => 'roomify_dashboard_translations_render',
);

/**
 *
 */
function roomify_dashboard_translations_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Translations') . '</strong></br>' . t('Manage languages and translations.'), 'admin/config/regional/translate', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-translations'))) . '</p>';

  return $block;
}
