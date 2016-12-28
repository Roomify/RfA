<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Sidebar User menu'),
  'description' => t('Add a User menu block.'),
  'render callback' => 'roomify_sidebar_user_menu_render',
  'edit form' => 'roomify_sidebar_user_menu_settings_edit_form',
);

/**
 * Ctools edit form.
 *
 * @param $form
 * @param $form_state
 *
 * @return mixed
 */
function roomify_sidebar_user_menu_settings_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Ctools edit form submit handler.
 *
 * @param $form
 * @param $form_state
 */
function roomify_sidebar_user_menu_settings_edit_form_submit($form, &$form_state) {
  foreach (array('roomify_sidebar_user_menu_title') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render callback.
 */
function roomify_sidebar_user_menu_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;
  $content = '';
  $block_content = '';

  $message = '<div class="sidebar-profile-message">' . t('Hi @user!', array('@user' => $user->name)) . '</div>';
  $content = '';

  // Guest Profile Set.
  if ($profile = profile2_load_by_user($user, 'guest')) {

    $image = field_get_items('profile2', $profile, 'guest_image');
    $picture = array(
      'style_name' => 'square',
      'path' => $image[0]['uri'],
    );

    if (!empty($picture['path'])) {
      $content = '<div class="roomify-sidebar-image">' . theme('image_style', $picture) . '</div> </br>';
      $content .= $message;
    }
  }

  // Property Owner profile Set, overrides the guest one.
  if ($profile = profile2_load_by_user($user, 'property_owner')) {

    $image = field_get_items('profile2', $profile, 'property_owner_image');
    $picture = array(
      'style_name' => 'square',
      'path' => $image[0]['uri'],
    );

    if (!empty($picture['path'])) {
      $content = '<div class="roomify-sidebar-image">' . theme('image_style', $picture) . '</div> </br>';
      $content .= $message;
    }
  }

  // No Profiles.
  if (empty($content)) {
    $content = $message;
  }


  if (user_is_logged_in()) {
    $block_content = '<div class="roomify-sidebar-user-menu">' . $content . '
                  <ul class="nav nav-list tree">
                    <li><div class="glyphicon glyphicon-dashboard"></div>' . l(t('Visit Dashboard'), '/user') . '</li>
                    <li><div class="glyphicon glyphicon-user"></div>' . l(t('Manage Account Settings'), '/user/' . $user->uid . '/edit') . '</li>
                    <li><div class="glyphicon glyphicon-log-out"></div>' . l(t('Logout'), '/user/logout') . '</li>
                  </ul>
                </div>';
  }
  $block = new stdClass();
  $block->module = 'roomify_sidebar';
  $block->delta = $subtype;
  $block->title = '';
  $block->content = $block_content;

  return $block;
}
