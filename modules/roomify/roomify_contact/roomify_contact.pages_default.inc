<?php

/**
 * @file
 * roomify_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function roomify_contact_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'contact-us';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact';
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
  $display->layout = 'bootstrap_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Get in touch';
  $display->uuid = 'cb4cbc4b-ae3a-411c-8265-147ad664f024';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_contact__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c721bf2b-1b39-4379-896b-b54b1096311d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'entityform_block-contact';
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
  $pane->uuid = 'c721bf2b-1b39-4379-896b-b54b1096311d';
  $display->content['new-c721bf2b-1b39-4379-896b-b54b1096311d'] = $pane;
  $display->panels['left'][0] = 'new-c721bf2b-1b39-4379-896b-b54b1096311d';
  $pane = new stdClass();
  $pane->pid = 'new-4a34b50e-5006-4cc3-898e-44a92f4ed1d2';
  $pane->panel = 'right';
  $pane->type = 'roomify_contact_us_page_text';
  $pane->subtype = 'roomify_contact_us_page_text';
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
  $pane->uuid = '4a34b50e-5006-4cc3-898e-44a92f4ed1d2';
  $display->content['new-4a34b50e-5006-4cc3-898e-44a92f4ed1d2'] = $pane;
  $display->panels['right'][0] = 'new-4a34b50e-5006-4cc3-898e-44a92f4ed1d2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c721bf2b-1b39-4379-896b-b54b1096311d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  return $pages;
}
