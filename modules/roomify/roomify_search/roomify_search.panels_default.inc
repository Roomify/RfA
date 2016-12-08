<?php

/**
 * @file
 * roomify_search.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function roomify_search_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'available_properties';
  $mini->category = '';
  $mini->admin_title = 'Available Properties - List view';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
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
  $display->uuid = 'f2e83c06-6a3e-4e47-9518-ffe8d0e8d90a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'available_properties';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'search_api_sorts-search-sorts';
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
  $pane->uuid = 'dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $display->content['new-dce6bcf2-2629-4e96-acdc-122f22e8adf0'] = $pane;
  $display->panels['middle'][0] = 'new-dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $pane = new stdClass();
  $pane->pid = 'new-9449b3ca-53e0-4e9d-922f-8b19fcd87c24';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_1';
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
  $pane->uuid = '9449b3ca-53e0-4e9d-922f-8b19fcd87c24';
  $display->content['new-9449b3ca-53e0-4e9d-922f-8b19fcd87c24'] = $pane;
  $display->panels['middle'][1] = 'new-9449b3ca-53e0-4e9d-922f-8b19fcd87c24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $mini->display = $display;
  $export['available_properties'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'available_properties_grid';
  $mini->category = '';
  $mini->admin_title = 'Available Properties - Grid view';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
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
  $display->uuid = 'f2e83c06-6a3e-4e47-9518-ffe8d0e8d90a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'available_properties_grid';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'search_api_sorts-search-sorts';
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
  $pane->uuid = 'dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $display->content['new-dce6bcf2-2629-4e96-acdc-122f22e8adf0'] = $pane;
  $display->panels['middle'][0] = 'new-dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $pane = new stdClass();
  $pane->pid = 'new-af2b45b4-2ef3-452a-87b0-53bf9eff34f1';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_3';
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
  $pane->uuid = 'af2b45b4-2ef3-452a-87b0-53bf9eff34f1';
  $display->content['new-af2b45b4-2ef3-452a-87b0-53bf9eff34f1'] = $pane;
  $display->panels['middle'][1] = 'new-af2b45b4-2ef3-452a-87b0-53bf9eff34f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dce6bcf2-2629-4e96-acdc-122f22e8adf0';
  $mini->display = $display;
  $export['available_properties_grid'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'properties_tabs';
  $mini->category = '';
  $mini->admin_title = 'Properties tabs';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'bottom' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'bottom-left' => NULL,
      'bottom-right' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
    'bottom' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '19268c39-cd84-45c7-b87f-5823975ddb71';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'properties_tabs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-646985dd-044d-4b72-af7c-17ed47fe34a7';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'List View',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '646985dd-044d-4b72-af7c-17ed47fe34a7';
  $display->content['new-646985dd-044d-4b72-af7c-17ed47fe34a7'] = $pane;
  $display->panels['bottom'][0] = 'new-646985dd-044d-4b72-af7c-17ed47fe34a7';
  $pane = new stdClass();
  $pane->pid = 'new-bfd068c8-399b-4b3c-846d-edf4320ef76e';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Map View',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bfd068c8-399b-4b3c-846d-edf4320ef76e';
  $display->content['new-bfd068c8-399b-4b3c-846d-edf4320ef76e'] = $pane;
  $display->panels['bottom'][1] = 'new-bfd068c8-399b-4b3c-846d-edf4320ef76e';
  $pane = new stdClass();
  $pane->pid = 'new-9f038bcf-994b-4db7-8942-b87e937e3121';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Grid View',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9f038bcf-994b-4db7-8942-b87e937e3121';
  $display->content['new-9f038bcf-994b-4db7-8942-b87e937e3121'] = $pane;
  $display->panels['bottom'][2] = 'new-9f038bcf-994b-4db7-8942-b87e937e3121';
  $pane = new stdClass();
  $pane->pid = 'new-025b9eb3-25a5-42dc-93e1-3ba259103c7e';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'search_api_sorts-search-sorts';
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
  $pane->uuid = '025b9eb3-25a5-42dc-93e1-3ba259103c7e';
  $display->content['new-025b9eb3-25a5-42dc-93e1-3ba259103c7e'] = $pane;
  $display->panels['middle'][0] = 'new-025b9eb3-25a5-42dc-93e1-3ba259103c7e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-646985dd-044d-4b72-af7c-17ed47fe34a7';
  $mini->display = $display;
  $export['properties_tabs'] = $mini;

  return $export;
}
