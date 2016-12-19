<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Taxonomy'),
  'render callback' => 'roomify_dashboard_manage_taxonomy_render',
);

/**
 *
 */
function roomify_dashboard_manage_taxonomy_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Taxonomy') . '</strong><br />' . t('Here you can add or edit categories for your content, such as Amenities, Areas, Property types, or Blog Categories'), 'admin/structure/taxonomy', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-taxonomy'))) . '</p>';

  return $block;
}
