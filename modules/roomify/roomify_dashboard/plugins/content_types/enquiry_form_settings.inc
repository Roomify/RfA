<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Enquiry Form settings'),
  'render callback' => 'roomify_dashboard_enquiry_form_settings_render',
);

/**
 *
 */
function roomify_dashboard_enquiry_form_settings_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Enquiry Form settings') . '</strong>', 'admin/bat/config/enquiry/settings', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-enquiry-form-settings'))) . '</p>';

  return $block;
}
