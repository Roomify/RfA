<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Configure Social Sharing Platforms'),
  'render callback' => 'roomify_dashboard_configure_social_sharing_platforms_render',
);

/**
 *
 */
function roomify_dashboard_configure_social_sharing_platforms_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $options = array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'dashboard-configure-ssp',
    ),
    'query' => array(
      'destination' => 'user',
    ),
  );

  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Configure Social Sharing Platforms') . '</strong><br/>' . t('Manage the social page links that are shown in sections such as the footer'), 'admin/config/content/rsp', $options) . '</p>';

  return $block;
}
