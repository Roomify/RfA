<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Social Feed'),
  'description' => t('Shows a social feed.'),
  'render callback' => 'roomify_social_feed_render',
);

/**
 * Render callback.
 */
function roomify_social_feed_render($subtype, $conf, $args, $pane_context, $incoming_content) {

  $which_feed = variable_get('roomify_which_feed', 'nothing');
  $content = '';

  // Facebook Feed.
  if ($which_feed == 'facebook') {
    $block = block_load('fb_likebox', '0');
    $renderable_block = _block_get_renderable_array(_block_render_blocks(array($block)));
    $content = drupal_render($renderable_block);
  }

  // Twitter Feed.
  if ($which_feed == 'twitter') {
    $content = variable_get('twitter_feed_widget', '');
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
