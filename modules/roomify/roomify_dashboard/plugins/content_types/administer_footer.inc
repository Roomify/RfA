<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Administer footer'),
  'render callback' => 'roomify_dashboard_administer_footer_render',
);

/**
 *
 */
function roomify_dashboard_administer_footer_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-configure-footer',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Change Footer Text') . '</strong><br/>' . t('The footer text is editable. For example, you can use the footer to display your address and telephone numbers'), 'admin/config/content/roomify-footer', $options) . '</p>';

  return $block;
}
