<?php

/**
 * @file
 * roomify_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_3db2e7f2-45a5-47b7-b9c3-4e22b6636226';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Tags',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-taxonomy-tags',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy vocabulary',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity:taxonomy_vocabulary',
        'entity_id' => '3',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'tags' => 'tags',
            ),
          ),
          'context' => 'argument_term_1',
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
  $display->uuid = '4a55a24f-3bf6-449f-917a-1e154bb76fc7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_3db2e7f2-45a5-47b7-b9c3-4e22b6636226';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-248f40ec-1f46-476c-8d6a-976d061a62f2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_8';
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
  $pane->uuid = '248f40ec-1f46-476c-8d6a-976d061a62f2';
  $display->content['new-248f40ec-1f46-476c-8d6a-976d061a62f2'] = $pane;
  $display->panels['middle'][0] = 'new-248f40ec-1f46-476c-8d6a-976d061a62f2';
  $pane = new stdClass();
  $pane->pid = 'new-ec843571-5a9e-4084-85da-210c3ae0d145';
  $pane->panel = 'top';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
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
  $pane->uuid = 'ec843571-5a9e-4084-85da-210c3ae0d145';
  $display->content['new-ec843571-5a9e-4084-85da-210c3ae0d145'] = $pane;
  $display->panels['top'][0] = 'new-ec843571-5a9e-4084-85da-210c3ae0d145';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_3db2e7f2-45a5-47b7-b9c3-4e22b6636226'] = $handler;

  return $export;
}
