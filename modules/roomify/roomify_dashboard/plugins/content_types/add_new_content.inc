<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Add new content'),
  'render callback' => 'roomify_dashboard_add_new_content_render',
);

/**
 *
 */
function roomify_dashboard_add_new_content_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Add new content') . '</strong><br/>' . t('Here you may add new content such as Pages, Blog posts, or Activities'), 'node/add', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-add-content'))) . '</p>';

  return $block;
}
