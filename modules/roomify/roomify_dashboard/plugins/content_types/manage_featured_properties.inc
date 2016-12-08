<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage featured properties'),
  'render callback' => 'roomify_dashboard_featured_properties_render',
);

/**
 *
 */
function roomify_dashboard_featured_properties_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-manage-featured-properties',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Featured Properties') . '</strong><br />' . t('Define a list of featured properties that will be shown in some places such as the Homepage or the Blog page'), 'admin/structure/entityqueue/list/featured_properties/subqueues/1/edit', $options) . '</p>';

  return $block;
}
