<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage email templates'),
  'render callback' => 'roomify_dashboard_manage_email_templates_render',
);

/**
 *
 */
function roomify_dashboard_manage_email_templates_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Email Templates') . '</strong><br/>' . t('Here is where you may edit the email templates to change the text of emails that are automatically sent to users'), 'admin/bat/config/email-templates', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-email-templates'))) . '</p>';

  return $block;
}
