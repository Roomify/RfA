<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage contact form submissions'),
  'render callback' => 'roomify_dashboard_manage_contact_form_submissions_render',
);

/**
 *
 */
function roomify_dashboard_manage_contact_form_submissions_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Contact Form Submissions') . '</strong><br/>' . t('View all the contact form submissions on your site'), 'form-submissions', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-contact-forms'))) . '</p>';

  return $block;
}
