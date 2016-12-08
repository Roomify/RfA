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

  if (user_is_logged_in()) {
    $content = '<div class="roomify-sidebar-user-menu">
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
  $block->title = t('My Account');
  $block->content = $content;

  return $block;
}
