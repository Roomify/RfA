<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Manage Main Menu'),
  'render callback' => 'roomify_dashboard_manage_main_menu_render',
);

/**
 *
 */
function roomify_dashboard_manage_main_menu_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->content = '<p>' . l('<strong>' . t('Manage Main Menu') . '</strong><br />' . t('Manage items on the main menu'), 'admin/structure/menu/manage/main-menu', array('html' => TRUE, 'attributes' => array('id' => 'dashboard-manage-main-menu'))) . '</p>';

  return $block;
}
