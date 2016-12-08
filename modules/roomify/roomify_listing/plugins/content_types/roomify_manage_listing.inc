<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Manage Listing link'),
  'description' => t('Add a link to the listing edit page.'),
  'render callback' => 'roomify_manage_listing_render',
  'required context' => new ctools_context_required(t('Bat Type'), 'bat_type'),
);

/**
 * Render callback.
 */
function roomify_manage_listing_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;

  $content = '';

  $type = $pane_context->data;

  $allowed_roles = array('administrator');
  foreach ($user->roles as $role) {
    if (in_array($role, $allowed_roles)) {
      $link = l('<span class="glyphicon glyphicon-pencil"></span>Manage Your Listing', 'admin/bat/config/types/manage/' . $type->type_id . '/edit', array('html' => TRUE, 'attributes' => array('class' => array('col-xs-12'))));
      $content = '<div class="row">' . $link . '</div>';

      break;
    }
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
