<?php

/**
 * @file
 * roomify_properties_list.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_properties_list_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_fcba3fdb-2866-45e3-a6e0-b7ab9edd9a98';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Properties list',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'properties_list' => 'properties_list',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f740cd3d-0a06-4943-b850-1e3cb6ef0ba3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_fcba3fdb-2866-45e3-a6e0-b7ab9edd9a98';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7631801d-b61b-4ae4-8dd0-8d34dba24a48';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7631801d-b61b-4ae4-8dd0-8d34dba24a48';
  $display->content['new-7631801d-b61b-4ae4-8dd0-8d34dba24a48'] = $pane;
  $display->panels['middle'][0] = 'new-7631801d-b61b-4ae4-8dd0-8d34dba24a48';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_fcba3fdb-2866-45e3-a6e0-b7ab9edd9a98'] = $handler;

  return $export;
}
