<?php

/**
 * @file
 * roomify_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_dashboard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_2fd82ca6-1517-42a1-9a0b-089f92d3920b';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'roomify-dashboard',
    'css_id' => 'roomify-user-dashboard',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
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
      'middle' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'middle' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a212a0a3-a1b2-42fc-b4f5-831e0edd47e7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_2fd82ca6-1517-42a1-9a0b-089f92d3920b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3f070dbb-d921-419e-baa6-9fbaf62b67aa';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_manage_activity';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
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
  $pane->uuid = '3f070dbb-d921-419e-baa6-9fbaf62b67aa';
  $display->content['new-3f070dbb-d921-419e-baa6-9fbaf62b67aa'] = $pane;
  $display->panels['middle'][0] = 'new-3f070dbb-d921-419e-baa6-9fbaf62b67aa';
  $pane = new stdClass();
  $pane->pid = 'new-ce8c7970-52db-419a-a7a8-ba2d54bcc524';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_manage_listings';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'update own roomify_property entities',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Manage Listing(s)',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-manage-listings-dashboard',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ce8c7970-52db-419a-a7a8-ba2d54bcc524';
  $display->content['new-ce8c7970-52db-419a-a7a8-ba2d54bcc524'] = $pane;
  $display->panels['middle'][1] = 'new-ce8c7970-52db-419a-a7a8-ba2d54bcc524';
  $pane = new stdClass();
  $pane->pid = 'new-c2085292-cf4f-4919-99ea-69def699437a';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_manage_travel';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit own guest profile',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Manage Travel',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-manage-travel-dashboard',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c2085292-cf4f-4919-99ea-69def699437a';
  $display->content['new-c2085292-cf4f-4919-99ea-69def699437a'] = $pane;
  $display->panels['middle'][2] = 'new-c2085292-cf4f-4919-99ea-69def699437a';
  $pane = new stdClass();
  $pane->pid = 'new-bc425fc4-7c62-4ec6-a7f9-562d1f7eacc8';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_manage_content';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content overview',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Manage Content',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-manage-content',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bc425fc4-7c62-4ec6-a7f9-562d1f7eacc8';
  $display->content['new-bc425fc4-7c62-4ec6-a7f9-562d1f7eacc8'] = $pane;
  $display->panels['middle'][3] = 'new-bc425fc4-7c62-4ec6-a7f9-562d1f7eacc8';
  $pane = new stdClass();
  $pane->pid = 'new-e6ad70d6-3d97-4024-a064-f8340bef163a';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_manage_groups';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'bypass group access',
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Manage Groups',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-manage-groups',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e6ad70d6-3d97-4024-a064-f8340bef163a';
  $display->content['new-e6ad70d6-3d97-4024-a064-f8340bef163a'] = $pane;
  $display->panels['middle'][4] = 'new-e6ad70d6-3d97-4024-a064-f8340bef163a';
  $pane = new stdClass();
  $pane->pid = 'new-fe49c90c-5aec-4b47-9e5b-109b81462092';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_manage_configuration';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer users',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Manage Configuration',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-manage-site-configuration',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'fe49c90c-5aec-4b47-9e5b-109b81462092';
  $display->content['new-fe49c90c-5aec-4b47-9e5b-109b81462092'] = $pane;
  $display->panels['middle'][5] = 'new-fe49c90c-5aec-4b47-9e5b-109b81462092';
  $pane = new stdClass();
  $pane->pid = 'new-d916116e-f055-4d03-ba4a-c737a80b7257';
  $pane->panel = 'middle';
  $pane->type = 'theme_colors';
  $pane->subtype = 'theme_colors';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      2 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer theme colors',
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Theme Colors',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd916116e-f055-4d03-ba4a-c737a80b7257';
  $display->content['new-d916116e-f055-4d03-ba4a-c737a80b7257'] = $pane;
  $display->panels['middle'][6] = 'new-d916116e-f055-4d03-ba4a-c737a80b7257';
  $pane = new stdClass();
  $pane->pid = 'new-7e955e8b-f81d-40bc-a767-0dc3383397b4';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard_welcome';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Account Settings',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-welcome-dashboard',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '7e955e8b-f81d-40bc-a767-0dc3383397b4';
  $display->content['new-7e955e8b-f81d-40bc-a767-0dc3383397b4'] = $pane;
  $display->panels['middle'][7] = 'new-7e955e8b-f81d-40bc-a767-0dc3383397b4';
  $pane = new stdClass();
  $pane->pid = 'new-2bd6054d-e65d-4cc2-930c-3f9d8eda497a';
  $pane->panel = 'top';
  $pane->type = 'welcome_dashboad_message';
  $pane->subtype = 'welcome_dashboad_message';
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
  $pane->uuid = '2bd6054d-e65d-4cc2-930c-3f9d8eda497a';
  $display->content['new-2bd6054d-e65d-4cc2-930c-3f9d8eda497a'] = $pane;
  $display->panels['top'][0] = 'new-2bd6054d-e65d-4cc2-930c-3f9d8eda497a';
  $pane = new stdClass();
  $pane->pid = 'new-dc77e7a7-0de4-4ac4-997b-33a3b54ee02f';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc77e7a7-0de4-4ac4-997b-33a3b54ee02f';
  $display->content['new-dc77e7a7-0de4-4ac4-997b-33a3b54ee02f'] = $pane;
  $display->panels['top'][1] = 'new-dc77e7a7-0de4-4ac4-997b-33a3b54ee02f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_2fd82ca6-1517-42a1-9a0b-089f92d3920b'] = $handler;

  return $export;
}
