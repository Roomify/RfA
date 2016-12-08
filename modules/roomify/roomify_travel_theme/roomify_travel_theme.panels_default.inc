<?php

/**
 * @file
 */

/**
 * Implements hook_default_panels_mini().
 */
function roomify_travel_theme_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'roomify_travel_highlights';
  $mini->category = '';
  $mini->admin_title = 'Roomify Travel Highlights';
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
  $display->storage_id = 'roomify_travel_highlights';
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

  $export['roomify_travel_highlights'] = $mini;

  return $export;
}
