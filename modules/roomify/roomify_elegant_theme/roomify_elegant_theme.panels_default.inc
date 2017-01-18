<?php

/**
 * @file
 */

/**
 * Implements hook_default_panels_mini().
 */
function roomify_elegant_theme_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'roomify_elegant_highlights';
  $mini->category = '';
  $mini->admin_title = 'Roomify Elegant Highlights';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Roomify Property',
      'keyword' => 'roomify_property',
      'name' => 'entity:roomify_property',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_three_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1e09bebb-734a-4beb-a33f-768445471118';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'roomify_elegant_highlights';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-02b5a63f-9edc-4040-92bf-1327e56df738';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'requiredcontext_entity:roomify_property_1',
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
  $pane->uuid = '02b5a63f-9edc-4040-92bf-1327e56df738';
  $display->content['new-02b5a63f-9edc-4040-92bf-1327e56df738'] = $pane;
  $display->panels['center'][0] = 'new-02b5a63f-9edc-4040-92bf-1327e56df738';
  $pane = new stdClass();
  $pane->pid = 'new-544cf06a-fa5e-42ee-a47a-bbe98b0c8401';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image2_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:roomify_property_1',
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
  $pane->uuid = '544cf06a-fa5e-42ee-a47a-bbe98b0c8401';
  $display->content['new-544cf06a-fa5e-42ee-a47a-bbe98b0c8401'] = $pane;
  $display->panels['center'][1] = 'new-544cf06a-fa5e-42ee-a47a-bbe98b0c8401';
  $pane = new stdClass();
  $pane->pid = 'new-2b1ac345-c484-401b-b00a-f574f0c00cbd';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'requiredcontext_entity:roomify_property_1',
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
  $pane->uuid = '2b1ac345-c484-401b-b00a-f574f0c00cbd';
  $display->content['new-2b1ac345-c484-401b-b00a-f574f0c00cbd'] = $pane;
  $display->panels['left'][0] = 'new-2b1ac345-c484-401b-b00a-f574f0c00cbd';
  $pane = new stdClass();
  $pane->pid = 'new-50f66081-b9b0-40af-b690-d3fb8689c92f';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image1_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:roomify_property_1',
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
  $pane->uuid = '50f66081-b9b0-40af-b690-d3fb8689c92f';
  $display->content['new-50f66081-b9b0-40af-b690-d3fb8689c92f'] = $pane;
  $display->panels['left'][1] = 'new-50f66081-b9b0-40af-b690-d3fb8689c92f';
  $pane = new stdClass();
  $pane->pid = 'new-c2106874-cf44-4077-8ab5-0d8d03f932c9';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'requiredcontext_entity:roomify_property_1',
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
  $pane->uuid = 'c2106874-cf44-4077-8ab5-0d8d03f932c9';
  $display->content['new-c2106874-cf44-4077-8ab5-0d8d03f932c9'] = $pane;
  $display->panels['right'][0] = 'new-c2106874-cf44-4077-8ab5-0d8d03f932c9';
  $pane = new stdClass();
  $pane->pid = 'new-5315b2d9-702e-4abc-b7e8-f6bd9e3b48f5';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image3_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:roomify_property_1',
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
  $pane->uuid = '5315b2d9-702e-4abc-b7e8-f6bd9e3b48f5';
  $display->content['new-5315b2d9-702e-4abc-b7e8-f6bd9e3b48f5'] = $pane;
  $display->panels['right'][1] = 'new-5315b2d9-702e-4abc-b7e8-f6bd9e3b48f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;

  $export['roomify_elegant_highlights'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'properties_tabs_elegant';
  $mini->category = '';
  $mini->admin_title = 'Properties tabs Elegant';
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
  $display->storage_id = 'properties_tabs_elegant';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bfd068c8-399b-4b3c-846d-edf4320ef76e';
  $display->content['new-bfd068c8-399b-4b3c-846d-edf4320ef76e'] = $pane;
  $display->panels['bottom'][0] = 'new-bfd068c8-399b-4b3c-846d-edf4320ef76e';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '646985dd-044d-4b72-af7c-17ed47fe34a7';
  $display->content['new-646985dd-044d-4b72-af7c-17ed47fe34a7'] = $pane;
  $display->panels['bottom'][1] = 'new-646985dd-044d-4b72-af7c-17ed47fe34a7';
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
  $export['properties_tabs_elegant'] = $mini;

  return $export;
}
