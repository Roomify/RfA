<?php

/**
 * @file
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function roomify_conversations_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'conversation';
  $page->task = 'page';
  $page->admin_title = 'Conversation';
  $page->admin_description = '';
  $page->path = 'conversation/%roomify_conversation';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$conversation = $contexts[\'argument_entity_id:roomify_conversation_1\']->data;
  return roomify_conversation_access(\'view\', $conversation);',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'roomify_conversation' => array(
      'id' => 1,
      'identifier' => 'Conversation: ID',
      'name' => 'entity_id:roomify_conversation',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_conversation__panel';
  $handler->task = 'page';
  $handler->subtask = 'conversation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->title = 'Conversation %roomify_conversation:conversation-id';
  $display->uuid = '9f5a56b0-08e8-4ad2-8e77-cea38515974d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_conversation__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-85d2c859-ea6b-4ca3-b6f9-c540355f770f';
  $pane->panel = 'middle';
  $pane->type = 'conversation_title';
  $pane->subtype = 'conversation_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '85d2c859-ea6b-4ca3-b6f9-c540355f770f';
  $display->content['new-85d2c859-ea6b-4ca3-b6f9-c540355f770f'] = $pane;
  $display->panels['middle'][0] = 'new-85d2c859-ea6b-4ca3-b6f9-c540355f770f';
  $pane = new stdClass();
  $pane->pid = 'new-ad28a771-49a9-4b34-8cef-cad411bd4fa6';
  $pane->panel = 'middle';
  $pane->type = 'activity_stream';
  $pane->subtype = 'activity_stream';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ad28a771-49a9-4b34-8cef-cad411bd4fa6';
  $display->content['new-ad28a771-49a9-4b34-8cef-cad411bd4fa6'] = $pane;
  $display->panels['middle'][1] = 'new-ad28a771-49a9-4b34-8cef-cad411bd4fa6';
  $pane = new stdClass();
  $pane->pid = 'new-58fe1c83-de09-474d-8b4a-7ea3dfedf7b6';
  $pane->panel = 'middle';
  $pane->type = 'send_message';
  $pane->subtype = 'send_message';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '58fe1c83-de09-474d-8b4a-7ea3dfedf7b6';
  $display->content['new-58fe1c83-de09-474d-8b4a-7ea3dfedf7b6'] = $pane;
  $display->panels['middle'][2] = 'new-58fe1c83-de09-474d-8b4a-7ea3dfedf7b6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['conversation'] = $page;

  return $pages;
}
