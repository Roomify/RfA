<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage featured areas'),
  'render callback' => 'roomify_dashboard_featured_areas_render',
);

/**
 *
 */
function roomify_dashboard_featured_areas_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-manage-featured-properties',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $queue = entityqueue_queue_load('featured_areas');
  $subqueue = entityqueue_subqueue_load(reset($queue));

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Featured Areas') . '</strong><br />' . t('Define the list of featured Areas used throughout the site (such as on the Homepage)'), 'admin/structure/entityqueue/list/featured_areas/subqueues/' . $subqueue->subqueue_id . '/edit', $options) . '</p>';

  return $block;
}
