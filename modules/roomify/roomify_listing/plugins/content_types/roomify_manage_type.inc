<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Manage Type link'),
  'description' => t('Add a link to the Type edit page.'),
  'render callback' => 'roomify_manage_type_render',
  'required context' => new ctools_context_required(t('Bat type'), 'bat_type'),
);

/**
 * Render callback.
 */
function roomify_manage_type_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;

  $content = '';
  $allowed = FALSE;
  $type = $pane_context->data;

  $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

  $owner = field_get_items('roomify_property', $property, 'field_sp_manager');

  if ($owner[0]['target_id'] == $user->uid) {
    $allowed = TRUE;
  }
  if ($user->uid == 1) {
    $allowed = TRUE;
  }

  $allowed_roles = array('administrator', 'roomify manager');
  foreach ($user->roles as $role) {
    if (in_array($role, $allowed_roles)) {
      $allowed = TRUE;

      break;
    }
  }

  if ($allowed) {
    $link = l(t('Manage Type'), 'admin/bat/config/types/manage/' . $type->type_id . '/edit', array('html' => TRUE, 'attributes' => array('class' => array('btn btn-warning manage-property-link'))));

    $content = '<div class="row">' . $link . '</div>';
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
