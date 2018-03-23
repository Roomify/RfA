<?php

/**
 * @file
 * roomify_travel_theme.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_travel_theme_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_listings__listing-travel';
  $handler->task = 'page';
  $handler->subtask = 'listings';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Listing Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'listing-travel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'roomify_travel_two_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'right' => NULL,
      'bottom' => NULL,
      'main-left' => NULL,
      'main-right' => NULL,
      'main-center' => NULL,
    ),
    'left' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%type_id:name';
  $display->uuid = '2d69b058-2e08-4ef6-afdb-fbcb4023c51d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_listings__listing-travel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e698fde-1d20-482f-baa6-7144a9bd9491';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
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
  $pane->uuid = '6e698fde-1d20-482f-baa6-7144a9bd9491';
  $display->content['new-6e698fde-1d20-482f-baa6-7144a9bd9491'] = $pane;
  $display->panels['bottom'][0] = 'new-6e698fde-1d20-482f-baa6-7144a9bd9491';
  $pane = new stdClass();
  $pane->pid = 'new-e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-description-tab"></span>Description',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $display->content['new-e01ffd75-ddef-44c3-b1f6-12ecf4700622'] = $pane;
  $display->panels['left'][0] = 'new-e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $pane = new stdClass();
  $pane->pid = 'new-4f7a236a-284f-476f-8577-4f6ac764b375';
  $pane->panel = 'left';
  $pane->type = 'roomify_availability_calendar';
  $pane->subtype = 'roomify_availability_calendar';
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
  $pane->uuid = '4f7a236a-284f-476f-8577-4f6ac764b375';
  $display->content['new-4f7a236a-284f-476f-8577-4f6ac764b375'] = $pane;
  $display->panels['left'][1] = 'new-4f7a236a-284f-476f-8577-4f6ac764b375';
  $pane = new stdClass();
  $pane->pid = 'new-f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-amenities-tab"></span>Amenities',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75';
  $display->content['new-f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75'] = $pane;
  $display->panels['left'][2] = 'new-f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75';
  $pane = new stdClass();
  $pane->pid = 'new-4026878e-a350-4dc5-ba8a-8d11b6d248c7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_policies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-policies-tab"></span>Policies',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4026878e-a350-4dc5-ba8a-8d11b6d248c7';
  $display->content['new-4026878e-a350-4dc5-ba8a-8d11b6d248c7'] = $pane;
  $display->panels['left'][3] = 'new-4026878e-a350-4dc5-ba8a-8d11b6d248c7';
  $pane = new stdClass();
  $pane->pid = 'new-824392b0-c5d4-4ed7-ab57-b00e404fb51e';
  $pane->panel = 'left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="property-location-tab"></span>Location',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '824392b0-c5d4-4ed7-ab57-b00e404fb51e';
  $display->content['new-824392b0-c5d4-4ed7-ab57-b00e404fb51e'] = $pane;
  $display->panels['left'][4] = 'new-824392b0-c5d4-4ed7-ab57-b00e404fb51e';
  $pane = new stdClass();
  $pane->pid = 'new-2afd9cbd-f378-4858-9cfe-31cd76925e38';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'property_travel-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="property-rooms-tab"></span>Rooms',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'property-types',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2afd9cbd-f378-4858-9cfe-31cd76925e38';
  $display->content['new-2afd9cbd-f378-4858-9cfe-31cd76925e38'] = $pane;
  $display->panels['left'][5] = 'new-2afd9cbd-f378-4858-9cfe-31cd76925e38';
  $pane = new stdClass();
  $pane->pid = 'new-96c76c2d-bc7e-48d9-bab3-b598120df78b';
  $pane->panel = 'left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_reviews';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:roomify_property:casa_property:field_sp_allow_property_reviews',
        'settings' => array(
          'field_sp_allow_property_reviews' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_sp_allow_property_reviews_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="property-reviews-tab"></span>Reviews',
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
  $pane->uuid = '96c76c2d-bc7e-48d9-bab3-b598120df78b';
  $display->content['new-96c76c2d-bc7e-48d9-bab3-b598120df78b'] = $pane;
  $display->panels['left'][6] = 'new-96c76c2d-bc7e-48d9-bab3-b598120df78b';
  $pane = new stdClass();
  $pane->pid = 'new-6b1b6374-7759-470e-8cc9-9c34b7ae881c';
  $pane->panel = 'main-center';
  $pane->type = 'panels_mini';
  $pane->subtype = 'roomify_travel_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b1b6374-7759-470e-8cc9-9c34b7ae881c';
  $display->content['new-6b1b6374-7759-470e-8cc9-9c34b7ae881c'] = $pane;
  $display->panels['main-center'][0] = 'new-6b1b6374-7759-470e-8cc9-9c34b7ae881c';
  $pane = new stdClass();
  $pane->pid = 'new-e3e68037-8a08-468b-9f60-3aebd76b903d';
  $pane->panel = 'main-left';
  $pane->type = 'token';
  $pane->subtype = 'roomify_property:flag-favorites-link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = 'e3e68037-8a08-468b-9f60-3aebd76b903d';
  $display->content['new-e3e68037-8a08-468b-9f60-3aebd76b903d'] = $pane;
  $display->panels['main-left'][0] = 'new-e3e68037-8a08-468b-9f60-3aebd76b903d';
  $pane = new stdClass();
  $pane->pid = 'new-9e48cc04-62f7-49bb-8beb-41a62fdd2ead';
  $pane->panel = 'main-left';
  $pane->type = 'views_panes';
  $pane->subtype = 'property_slideshow-panel_pane_2';
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
  $pane->uuid = '9e48cc04-62f7-49bb-8beb-41a62fdd2ead';
  $display->content['new-9e48cc04-62f7-49bb-8beb-41a62fdd2ead'] = $pane;
  $display->panels['main-left'][1] = 'new-9e48cc04-62f7-49bb-8beb-41a62fdd2ead';
  $pane = new stdClass();
  $pane->pid = 'new-531705a1-93a7-4271-8003-d6673e6fc1ae';
  $pane->panel = 'main-right';
  $pane->type = 'roomify_listing_availability_calendar_popup';
  $pane->subtype = 'roomify_listing_availability_calendar_popup';
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
  $pane->uuid = '531705a1-93a7-4271-8003-d6673e6fc1ae';
  $display->content['new-531705a1-93a7-4271-8003-d6673e6fc1ae'] = $pane;
  $display->panels['main-right'][0] = 'new-531705a1-93a7-4271-8003-d6673e6fc1ae';
  $pane = new stdClass();
  $pane->pid = 'new-0b596513-39fb-438d-a469-6ad9b3cdbc29';
  $pane->panel = 'main-right';
  $pane->type = 'token';
  $pane->subtype = 'roomify_property:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '0b596513-39fb-438d-a469-6ad9b3cdbc29';
  $display->content['new-0b596513-39fb-438d-a469-6ad9b3cdbc29'] = $pane;
  $display->panels['main-right'][1] = 'new-0b596513-39fb-438d-a469-6ad9b3cdbc29';
  $pane = new stdClass();
  $pane->pid = 'new-57121337-eaf4-4f12-9d69-9746f2f6d022';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_short_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '57121337-eaf4-4f12-9d69-9746f2f6d022';
  $display->content['new-57121337-eaf4-4f12-9d69-9746f2f6d022'] = $pane;
  $display->panels['main-right'][2] = 'new-57121337-eaf4-4f12-9d69-9746f2f6d022';
  $pane = new stdClass();
  $pane->pid = 'new-5f6f0333-55cb-4244-8fa4-75b1a49b0087';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5f6f0333-55cb-4244-8fa4-75b1a49b0087';
  $display->content['new-5f6f0333-55cb-4244-8fa4-75b1a49b0087'] = $pane;
  $display->panels['main-right'][3] = 'new-5f6f0333-55cb-4244-8fa4-75b1a49b0087';
  $pane = new stdClass();
  $pane->pid = 'new-c76a5f05-7a42-4b0f-9177-1f62886e7f7d';
  $pane->panel = 'main-right';
  $pane->type = 'block';
  $pane->subtype = 'roomify_listing_availability_search_block-roomify_listing_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'casa_property' => 'casa_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c76a5f05-7a42-4b0f-9177-1f62886e7f7d';
  $display->content['new-c76a5f05-7a42-4b0f-9177-1f62886e7f7d'] = $pane;
  $display->panels['main-right'][4] = 'new-c76a5f05-7a42-4b0f-9177-1f62886e7f7d';
  $pane = new stdClass();
  $pane->pid = 'new-a6d19895-ba66-48d2-82d0-481090491cb0';
  $pane->panel = 'main-right';
  $pane->type = 'locanda_availability_search';
  $pane->subtype = 'locanda_availability_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a6d19895-ba66-48d2-82d0-481090491cb0';
  $display->content['new-a6d19895-ba66-48d2-82d0-481090491cb0'] = $pane;
  $display->panels['main-right'][5] = 'new-a6d19895-ba66-48d2-82d0-481090491cb0';
  $pane = new stdClass();
  $pane->pid = 'new-29b76a98-643d-45a9-a610-71dda7f80f00';
  $pane->panel = 'right';
  $pane->type = 'roomify_user_profile_on_listing';
  $pane->subtype = 'roomify_user_profile_on_listing';
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
  $pane->uuid = '29b76a98-643d-45a9-a610-71dda7f80f00';
  $display->content['new-29b76a98-643d-45a9-a610-71dda7f80f00'] = $pane;
  $display->panels['right'][0] = 'new-29b76a98-643d-45a9-a610-71dda7f80f00';
  $pane = new stdClass();
  $pane->pid = 'new-6cdbfffd-41eb-467c-a3c2-e7e02324ee18';
  $pane->panel = 'right';
  $pane->type = 'roomify_owner_social_pages';
  $pane->subtype = 'roomify_owner_social_pages';
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
  $pane->uuid = '6cdbfffd-41eb-467c-a3c2-e7e02324ee18';
  $display->content['new-6cdbfffd-41eb-467c-a3c2-e7e02324ee18'] = $pane;
  $display->panels['right'][1] = 'new-6cdbfffd-41eb-467c-a3c2-e7e02324ee18';
  $pane = new stdClass();
  $pane->pid = 'new-b87fa40d-3d29-4407-bcfe-0a3af1e84986';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
              if (isset($social_feeds_pages[\'property_page\']) && $social_feeds_pages[\'property_page\'] === \'property_page\') {
                return TRUE;
              }
              return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b87fa40d-3d29-4407-bcfe-0a3af1e84986';
  $display->content['new-b87fa40d-3d29-4407-bcfe-0a3af1e84986'] = $pane;
  $display->panels['right'][2] = 'new-b87fa40d-3d29-4407-bcfe-0a3af1e84986';
  $pane = new stdClass();
  $pane->pid = 'new-90f7ca06-8bad-45f4-80a7-071b983ac82e';
  $pane->panel = 'top';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
        if (isset($customer_message[\'property_page\']) && $customer_message[\'property_page\'] === \'property_page\') {
          return TRUE;
        }
        return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '90f7ca06-8bad-45f4-80a7-071b983ac82e';
  $display->content['new-90f7ca06-8bad-45f4-80a7-071b983ac82e'] = $pane;
  $display->panels['top'][0] = 'new-90f7ca06-8bad-45f4-80a7-071b983ac82e';
  $pane = new stdClass();
  $pane->pid = 'new-c74caf38-acb4-43cf-bb9b-bf1799352310';
  $pane->panel = 'top';
  $pane->type = 'roomify_manage_property';
  $pane->subtype = 'roomify_manage_property';
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
  $pane->uuid = 'c74caf38-acb4-43cf-bb9b-bf1799352310';
  $display->content['new-c74caf38-acb4-43cf-bb9b-bf1799352310'] = $pane;
  $display->panels['top'][1] = 'new-c74caf38-acb4-43cf-bb9b-bf1799352310';
  $pane = new stdClass();
  $pane->pid = 'new-e295e42c-ed1e-4252-99d6-b2f26220ffd9';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

    if (in_array(\'property\', $addtoany_settings)) {
      return TRUE;
    }',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e295e42c-ed1e-4252-99d6-b2f26220ffd9';
  $display->content['new-e295e42c-ed1e-4252-99d6-b2f26220ffd9'] = $pane;
  $display->panels['top'][2] = 'new-e295e42c-ed1e-4252-99d6-b2f26220ffd9';
  $pane = new stdClass();
  $pane->pid = 'new-654faa0b-aa5f-4949-a268-0a8998831633';
  $pane->panel = 'top';
  $pane->type = 'property_on_offer';
  $pane->subtype = 'property_on_offer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '654faa0b-aa5f-4949-a268-0a8998831633';
  $display->content['new-654faa0b-aa5f-4949-a268-0a8998831633'] = $pane;
  $display->panels['top'][3] = 'new-654faa0b-aa5f-4949-a268-0a8998831633';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $handler->conf['display'] = $display;

  $export['page_listings__listing-travel'] = $handler;

  /* AVAILAILITY SEARCH PAGE */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369';
  $handler->task = 'page';
  $handler->subtask = 'availability_search';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Travel Search',
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
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_strict_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'bottom' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cd222d1f-3338-497d-9d75-c9016f3c7bb6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bc3107cb-a814-4dfa-82d0-b5778eb9c046';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'current_search-properties';
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
  $pane->uuid = 'bc3107cb-a814-4dfa-82d0-b5778eb9c046';
  $display->content['new-bc3107cb-a814-4dfa-82d0-b5778eb9c046'] = $pane;
  $display->panels['left'][0] = 'new-bc3107cb-a814-4dfa-82d0-b5778eb9c046';
  $pane = new stdClass();
  $pane->pid = 'new-daade953-2593-460e-aa6b-3c54e4ec9032';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-p8tdBgF3m6VbI1oKafiwW9evusLmW6R3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Availability',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'availability-search-facet',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'daade953-2593-460e-aa6b-3c54e4ec9032';
  $display->content['new-daade953-2593-460e-aa6b-3c54e4ec9032'] = $pane;
  $display->panels['left'][1] = 'new-daade953-2593-460e-aa6b-3c54e4ec9032';
  $pane = new stdClass();
  $pane->pid = 'new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PSgMGV0vhgwKGBG76zNiI6gHpbuUpy7v';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7d6ba4a9-6a11-4acd-b940-ef6e593c32f1';
  $display->content['new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1'] = $pane;
  $display->panels['left'][2] = 'new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1';
  $pane = new stdClass();
  $pane->pid = 'new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-LZ5CVSwTZdsXhbhn7Z38s9xNZroPD6oC';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fdb0b6f2-e201-4493-84ac-11fbb5f57a82';
  $display->content['new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82'] = $pane;
  $display->panels['left'][3] = 'new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82';
  $pane = new stdClass();
  $pane->pid = 'new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-l43LlleliFlK22LqmnY4nQB1SdXo4Lw3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Capacity',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2c1d95f8-4ad9-4e43-b485-63efc38bba9a';
  $display->content['new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a'] = $pane;
  $display->panels['left'][4] = 'new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a';
  $pane = new stdClass();
  $pane->pid = 'new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-04a5frpwjrTOGzFu5zVVfB1agfNlhYJ3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '03f67cdb-5245-4ddc-a101-b6f79aa84ddc';
  $display->content['new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc'] = $pane;
  $display->panels['left'][5] = 'new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc';
  $pane = new stdClass();
  $pane->pid = 'new-a511d181-afb2-4a91-948c-d6fd102cbebc';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-5HkeJoBRGIgKxKA4SoWbq7llH7h7jkWv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Property type',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a511d181-afb2-4a91-948c-d6fd102cbebc';
  $display->content['new-a511d181-afb2-4a91-948c-d6fd102cbebc'] = $pane;
  $display->panels['left'][6] = 'new-a511d181-afb2-4a91-948c-d6fd102cbebc';
  $pane = new stdClass();
  $pane->pid = 'new-72d233c3-4436-4a0a-abf9-18d42762be8a';
  $pane->panel = 'left';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
      if (isset($social_feeds_pages[\'availability_page\']) && $social_feeds_pages[\'availability_page\'] === \'availability_page\') {
        return TRUE;
      }
      return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '72d233c3-4436-4a0a-abf9-18d42762be8a';
  $display->content['new-72d233c3-4436-4a0a-abf9-18d42762be8a'] = $pane;
  $display->panels['left'][7] = 'new-72d233c3-4436-4a0a-abf9-18d42762be8a';
  $pane = new stdClass();
  $pane->pid = 'new-6aca56b8-9c1f-4712-8b56-3232dfb695f4';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'properties_tabs';
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
  $pane->css = array(
    'css_id' => 'properties-tabs',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6aca56b8-9c1f-4712-8b56-3232dfb695f4';
  $display->content['new-6aca56b8-9c1f-4712-8b56-3232dfb695f4'] = $pane;
  $display->panels['right'][0] = 'new-6aca56b8-9c1f-4712-8b56-3232dfb695f4';
  $pane = new stdClass();
  $pane->pid = 'new-028fc2b3-ef7c-4f31-a180-e9ba99f4f019';
  $pane->panel = 'top';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
  if (isset($customer_message[\'availability_page\']) && $customer_message[\'availability_page\'] === \'availability_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '028fc2b3-ef7c-4f31-a180-e9ba99f4f019';
  $display->content['new-028fc2b3-ef7c-4f31-a180-e9ba99f4f019'] = $pane;
  $display->panels['top'][0] = 'new-028fc2b3-ef7c-4f31-a180-e9ba99f4f019';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-daade953-2593-460e-aa6b-3c54e4ec9032';
  $handler->conf['display'] = $display;

  $export['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panel_context_cd13821b-0e32-48de-a90e-b72b75526f84';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Blog Travel',
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
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '';
  $display->uuid = 'c94422fa-97ec-42a4-98a0-befe39ba11be';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_blog__panel_context_cd13821b-0e32-48de-a90e-b72b75526f84';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d1c1c24e-4de8-4d46-87d8-f4d4078d360f';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_travel-panel_pane_1';
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
  $pane->uuid = 'd1c1c24e-4de8-4d46-87d8-f4d4078d360f';
  $display->content['new-d1c1c24e-4de8-4d46-87d8-f4d4078d360f'] = $pane;
  $display->panels['left'][0] = 'new-d1c1c24e-4de8-4d46-87d8-f4d4078d360f';
  $pane = new stdClass();
  $pane->pid = 'new-8d365dba-1402-4666-bdad-d0f57c92200d';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
  if (isset($customer_message[\'blog_page\']) && $customer_message[\'blog_page\'] === \'blog_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8d365dba-1402-4666-bdad-d0f57c92200d';
  $display->content['new-8d365dba-1402-4666-bdad-d0f57c92200d'] = $pane;
  $display->panels['right'][0] = 'new-8d365dba-1402-4666-bdad-d0f57c92200d';
  $pane = new stdClass();
  $pane->pid = 'new-302c18c5-d664-4a26-943f-994cb1e6b5f7';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ozwx1S54VyldwQPX0j0nHZpwu9NNbuDT';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'area',
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
  $pane->uuid = '302c18c5-d664-4a26-943f-994cb1e6b5f7';
  $display->content['new-302c18c5-d664-4a26-943f-994cb1e6b5f7'] = $pane;
  $display->panels['right'][1] = 'new-302c18c5-d664-4a26-943f-994cb1e6b5f7';
  $pane = new stdClass();
  $pane->pid = 'new-e41574a9-47d8-435e-a2f3-9e7a0505aeb2';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-jWNffqnrk4T5fQni1bU4JjGhrZulYZ2K';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'category',
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
  $pane->uuid = 'e41574a9-47d8-435e-a2f3-9e7a0505aeb2';
  $display->content['new-e41574a9-47d8-435e-a2f3-9e7a0505aeb2'] = $pane;
  $display->panels['right'][2] = 'new-e41574a9-47d8-435e-a2f3-9e7a0505aeb2';
  $pane = new stdClass();
  $pane->pid = 'new-cd414cba-9b2a-4093-9b4d-a66ebc613f2d';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Properties',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cd414cba-9b2a-4093-9b4d-a66ebc613f2d';
  $display->content['new-cd414cba-9b2a-4093-9b4d-a66ebc613f2d'] = $pane;
  $display->panels['right'][3] = 'new-cd414cba-9b2a-4093-9b4d-a66ebc613f2d';
  $pane = new stdClass();
  $pane->pid = 'new-77dbffdc-78fb-436b-8be1-1723a09eb617';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
    if (isset($social_feeds_pages[\'blog_page\']) && $social_feeds_pages[\'blog_page\'] === \'blog_page\') {
      return TRUE;
    }
    return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '77dbffdc-78fb-436b-8be1-1723a09eb617';
  $display->content['new-77dbffdc-78fb-436b-8be1-1723a09eb617'] = $pane;
  $display->panels['right'][4] = 'new-77dbffdc-78fb-436b-8be1-1723a09eb617';
  $pane = new stdClass();
  $pane->pid = 'new-2cad4f71-6c30-4ab3-aa84-86f3d6f317b5';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Blogpost',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-default btn-primary roomify-add-blogpost" href="/node/add/blog"><span class="glyphicon glyphicon-plus" style="color:rgb(255, 255, 255);"></span> Add Blogpost</a></p>',
    'format' => 'filtered_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2cad4f71-6c30-4ab3-aa84-86f3d6f317b5';
  $display->content['new-2cad4f71-6c30-4ab3-aa84-86f3d6f317b5'] = $pane;
  $display->panels['top'][0] = 'new-2cad4f71-6c30-4ab3-aa84-86f3d6f317b5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['page_blog__panel_context_cd13821b-0e32-48de-a90e-b72b75526f84'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blogpost-travel';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Blogpost Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blogpost-travel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '%node:title_field';
  $display->uuid = 'bdfbe48f-f065-4ea6-9330-0aca5c08a60f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__blogpost-travel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-83400982-c5f4-42cb-88f2-0c8858c4c997';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'where to stay in %node:field-blog-area',
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
  $pane->uuid = '83400982-c5f4-42cb-88f2-0c8858c4c997';
  $display->content['new-83400982-c5f4-42cb-88f2-0c8858c4c997'] = $pane;
  $display->panels['bottom'][0] = 'new-83400982-c5f4-42cb-88f2-0c8858c4c997';
  $pane = new stdClass();
  $pane->pid = 'new-78626eed-d17a-4369-8cfb-1c35275e5880';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_area';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'i18n_taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-map-marker"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-icon',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '78626eed-d17a-4369-8cfb-1c35275e5880';
  $display->content['new-78626eed-d17a-4369-8cfb-1c35275e5880'] = $pane;
  $display->panels['left'][0] = 'new-78626eed-d17a-4369-8cfb-1c35275e5880';
  $pane = new stdClass();
  $pane->pid = 'new-710c987b-525c-4ca8-b708-195fa836f6f8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-pushpin"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-icon',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '710c987b-525c-4ca8-b708-195fa836f6f8';
  $display->content['new-710c987b-525c-4ca8-b708-195fa836f6f8'] = $pane;
  $display->panels['left'][1] = 'new-710c987b-525c-4ca8-b708-195fa836f6f8';
  $pane = new stdClass();
  $pane->pid = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'roomify_blog_image',
      'image_link' => '',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '616ba109-af3e-4b9d-b240-c52afc39d04f';
  $display->content['new-616ba109-af3e-4b9d-b240-c52afc39d04f'] = $pane;
  $display->panels['left'][2] = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
  $pane = new stdClass();
  $pane->pid = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '76512c7e-4af9-4fde-a085-5210d11581dc';
  $display->content['new-76512c7e-4af9-4fde-a085-5210d11581dc'] = $pane;
  $display->panels['left'][3] = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
  $pane = new stdClass();
  $pane->pid = 'new-c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-tags"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-icon',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $display->content['new-c3a20eab-f7ad-4f85-b999-b9ae5e761242'] = $pane;
  $display->panels['left'][4] = 'new-c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $pane = new stdClass();
  $pane->pid = 'new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

  if (in_array(\'blog\', $addtoany_settings)) {
    return TRUE;
  }',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $display->content['new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98'] = $pane;
  $display->panels['left'][5] = 'new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $pane = new stdClass();
  $pane->pid = 'new-6e345cbf-8108-4371-8110-c08554620999';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
  if (isset($customer_message[\'blog_node\']) && $customer_message[\'blog_node\'] === \'blog_node\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e345cbf-8108-4371-8110-c08554620999';
  $display->content['new-6e345cbf-8108-4371-8110-c08554620999'] = $pane;
  $display->panels['right'][0] = 'new-6e345cbf-8108-4371-8110-c08554620999';
  $pane = new stdClass();
  $pane->pid = 'new-644b477e-fc6b-4dac-8e75-b3bfa8aab133';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'blog_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => 'blog',
    'display' => 'search_api_views_facets_block_1',
    'override_title' => 1,
    'override_title_text' => 'categories',
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
  $pane->uuid = '644b477e-fc6b-4dac-8e75-b3bfa8aab133';
  $display->content['new-644b477e-fc6b-4dac-8e75-b3bfa8aab133'] = $pane;
  $display->panels['right'][1] = 'new-644b477e-fc6b-4dac-8e75-b3bfa8aab133';
  $pane = new stdClass();
  $pane->pid = 'new-83cdedd4-e427-471e-a9a2-ff35314f2906';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_travel-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'related posts',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '83cdedd4-e427-471e-a9a2-ff35314f2906';
  $display->content['new-83cdedd4-e427-471e-a9a2-ff35314f2906'] = $pane;
  $display->panels['right'][2] = 'new-83cdedd4-e427-471e-a9a2-ff35314f2906';
  $pane = new stdClass();
  $pane->pid = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $display->content['new-7ce9eb59-d184-4caf-96df-52dd072a3c8a'] = $pane;
  $display->panels['right'][3] = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $pane = new stdClass();
  $pane->pid = 'new-38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-new-window"></span>posts about %node:field-blog-area',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $display->content['new-38da774c-eb67-42a1-a48d-8f88b16ae6ad'] = $pane;
  $display->panels['right'][4] = 'new-38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $pane = new stdClass();
  $pane->pid = 'new-75d124ba-408a-401a-8e3c-1ee0b0790ac5';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '75d124ba-408a-401a-8e3c-1ee0b0790ac5';
  $display->content['new-75d124ba-408a-401a-8e3c-1ee0b0790ac5'] = $pane;
  $display->panels['right'][5] = 'new-75d124ba-408a-401a-8e3c-1ee0b0790ac5';
  $pane = new stdClass();
  $pane->pid = 'new-de12b1de-9830-4d02-b900-6c5dbffaaa79';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
        if (isset($social_feeds_pages[\'blog_node\']) && $social_feeds_pages[\'blog_node\'] === \'blog_node\') {
          return TRUE;
        }
        return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'de12b1de-9830-4d02-b900-6c5dbffaaa79';
  $display->content['new-de12b1de-9830-4d02-b900-6c5dbffaaa79'] = $pane;
  $display->panels['right'][6] = 'new-de12b1de-9830-4d02-b900-6c5dbffaaa79';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blogpost-travel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_7ddeeb25-0c6c-4a38-8df4-e4a2eb636bcd';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Thing to do Travel',
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
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'activity' => 'activity',
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
  $display->title = '%node:title_field';
  $display->uuid = 'af415ea7-94db-4ad7-8a09-f539e31d845e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_7ddeeb25-0c6c-4a38-8df4-e4a2eb636bcd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ef4303f2-9172-4492-a61d-0ed0042803c9';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_activity_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-pushpin"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ef4303f2-9172-4492-a61d-0ed0042803c9';
  $display->content['new-ef4303f2-9172-4492-a61d-0ed0042803c9'] = $pane;
  $display->panels['left'][0] = 'new-ef4303f2-9172-4492-a61d-0ed0042803c9';
  $pane = new stdClass();
  $pane->pid = 'new-e220c90d-9446-47c3-b7b3-75a65d249772';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_2';
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
  $pane->uuid = 'e220c90d-9446-47c3-b7b3-75a65d249772';
  $display->content['new-e220c90d-9446-47c3-b7b3-75a65d249772'] = $pane;
  $display->panels['left'][1] = 'new-e220c90d-9446-47c3-b7b3-75a65d249772';
  $pane = new stdClass();
  $pane->pid = 'new-2f4f9057-91b9-41dd-9e13-dc45a6568f8b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2f4f9057-91b9-41dd-9e13-dc45a6568f8b';
  $display->content['new-2f4f9057-91b9-41dd-9e13-dc45a6568f8b'] = $pane;
  $display->panels['left'][2] = 'new-2f4f9057-91b9-41dd-9e13-dc45a6568f8b';
  $pane = new stdClass();
  $pane->pid = 'new-8fb25d49-d943-4727-b247-fbd715f109d6';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

  if (in_array(\'activity\', $addtoany_settings)) {
    return TRUE;
  }',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8fb25d49-d943-4727-b247-fbd715f109d6';
  $display->content['new-8fb25d49-d943-4727-b247-fbd715f109d6'] = $pane;
  $display->panels['left'][3] = 'new-8fb25d49-d943-4727-b247-fbd715f109d6';
  $pane = new stdClass();
  $pane->pid = 'new-4523a43d-9f84-41bb-adc7-42223858535a';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
  if (isset($customer_message[\'things_to_do_node\']) && $customer_message[\'things_to_do_node\'] === \'things_to_do_node\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4523a43d-9f84-41bb-adc7-42223858535a';
  $display->content['new-4523a43d-9f84-41bb-adc7-42223858535a'] = $pane;
  $display->panels['right'][0] = 'new-4523a43d-9f84-41bb-adc7-42223858535a';
  $pane = new stdClass();
  $pane->pid = 'new-4e7852f3-439c-4947-b06e-41ab1427b289';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'location-panel_pane_2';
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
  $pane->uuid = '4e7852f3-439c-4947-b06e-41ab1427b289';
  $display->content['new-4e7852f3-439c-4947-b06e-41ab1427b289'] = $pane;
  $display->panels['right'][1] = 'new-4e7852f3-439c-4947-b06e-41ab1427b289';
  $pane = new stdClass();
  $pane->pid = 'new-83a58552-d482-4cd4-873c-34ff3d40bded';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'related activities',
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
  $pane->uuid = '83a58552-d482-4cd4-873c-34ff3d40bded';
  $display->content['new-83a58552-d482-4cd4-873c-34ff3d40bded'] = $pane;
  $display->panels['right'][2] = 'new-83a58552-d482-4cd4-873c-34ff3d40bded';
  $pane = new stdClass();
  $pane->pid = 'new-4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5';
  $display->content['new-4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5'] = $pane;
  $display->panels['right'][3] = 'new-4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5';
  $pane = new stdClass();
  $pane->pid = 'new-9d88f2bd-7ad5-4325-9ec0-f017c51e70de';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
    if (isset($social_feeds_pages[\'things_to_do_node\']) && $social_feeds_pages[\'things_to_do_node\'] === \'things_to_do_node\') {
      return TRUE;
    }
    return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9d88f2bd-7ad5-4325-9ec0-f017c51e70de';
  $display->content['new-9d88f2bd-7ad5-4325-9ec0-f017c51e70de'] = $pane;
  $display->panels['right'][4] = 'new-9d88f2bd-7ad5-4325-9ec0-f017c51e70de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ef4303f2-9172-4492-a61d-0ed0042803c9';
  $handler->conf['display'] = $display;

  $export['node_view__panel_context_7ddeeb25-0c6c-4a38-8df4-e4a2eb636bcd'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__location-travel';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Location Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'location-travel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = '9ef84618-1857-465c-a31a-7230c09fde85';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__location-travel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'location-panel_pane_2';
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
  $pane->uuid = '9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed';
  $display->content['new-9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed'] = $pane;
  $display->panels['middle'][0] = 'new-9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed';
  $pane = new stdClass();
  $pane->pid = 'new-c268cac4-8e93-40ec-8cb4-66c8275cab00';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'c268cac4-8e93-40ec-8cb4-66c8275cab00';
  $display->content['new-c268cac4-8e93-40ec-8cb4-66c8275cab00'] = $pane;
  $display->panels['middle'][1] = 'new-c268cac4-8e93-40ec-8cb4-66c8275cab00';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__location-travel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_location__location-travel';
  $handler->task = 'page';
  $handler->subtask = 'location';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Location Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'location-travel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
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
  $display->title = 'Location';
  $display->uuid = 'b6088c17-489a-4ca1-8a7a-fddef04798b9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_location__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c473a8b1-beff-431c-8225-90c0d6eacb26';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create location content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Location',
    'title' => '',
    'body' => '<p><a class="roomify-add-button roomify-add-location btn btn-default btn-primary" href="/node/add/location">Add Location</a></p>',
    'format' => 'rich_text',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c473a8b1-beff-431c-8225-90c0d6eacb26';
  $display->content['new-c473a8b1-beff-431c-8225-90c0d6eacb26'] = $pane;
  $display->panels['middle'][0] = 'new-c473a8b1-beff-431c-8225-90c0d6eacb26';
  $pane = new stdClass();
  $pane->pid = 'new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'location-panel_pane_1';
  $pane->shown = TRUE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $display->content['new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec'] = $pane;
  $display->panels['middle'][1] = 'new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $handler->conf['display'] = $display;
  $export['page_location__location-travel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activity_page__panel_context_e0d179c1-1656-49c6-a3ab-a7824e4be438';
  $handler->task = 'page';
  $handler->subtask = 'activity_page';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Thing to do Travel',
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
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
  $display->title = '';
  $display->uuid = '95950754-1aca-49cc-a371-f0d7a3a09593';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_activity_page__panel_context_e0d179c1-1656-49c6-a3ab-a7824e4be438';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b68698f1-6745-4f38-8608-7d59dc74dafb';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'things_to_do_index-panel_pane_1';
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
  $pane->uuid = 'b68698f1-6745-4f38-8608-7d59dc74dafb';
  $display->content['new-b68698f1-6745-4f38-8608-7d59dc74dafb'] = $pane;
  $display->panels['left'][0] = 'new-b68698f1-6745-4f38-8608-7d59dc74dafb';
  $pane = new stdClass();
  $pane->pid = 'new-b790439c-6eca-4d26-9d91-c60503139af1';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
  if (isset($customer_message[\'things_to_do_page\']) && $customer_message[\'things_to_do_page\'] === \'things_to_do_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b790439c-6eca-4d26-9d91-c60503139af1';
  $display->content['new-b790439c-6eca-4d26-9d91-c60503139af1'] = $pane;
  $display->panels['right'][0] = 'new-b790439c-6eca-4d26-9d91-c60503139af1';
  $pane = new stdClass();
  $pane->pid = 'new-176926b8-3b79-48ea-ba64-3cd0e2820605';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-vRyy3WdE9NncAu1blRZM83olHEClJfMx';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'activity type',
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
  $pane->uuid = '176926b8-3b79-48ea-ba64-3cd0e2820605';
  $display->content['new-176926b8-3b79-48ea-ba64-3cd0e2820605'] = $pane;
  $display->panels['right'][1] = 'new-176926b8-3b79-48ea-ba64-3cd0e2820605';
  $pane = new stdClass();
  $pane->pid = 'new-b839718f-643f-4ab2-9b7b-2a9843ca2507';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
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
  $pane->uuid = 'b839718f-643f-4ab2-9b7b-2a9843ca2507';
  $display->content['new-b839718f-643f-4ab2-9b7b-2a9843ca2507'] = $pane;
  $display->panels['right'][2] = 'new-b839718f-643f-4ab2-9b7b-2a9843ca2507';
  $pane = new stdClass();
  $pane->pid = 'new-bfbc9358-2bdc-490a-afdf-892ada89ae02';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
    if (isset($social_feeds_pages[\'things_to_do_page\']) && $social_feeds_pages[\'things_to_do_page\'] === \'things_to_do_page\') {
      return TRUE;
    }
    return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bfbc9358-2bdc-490a-afdf-892ada89ae02';
  $display->content['new-bfbc9358-2bdc-490a-afdf-892ada89ae02'] = $pane;
  $display->panels['right'][3] = 'new-bfbc9358-2bdc-490a-afdf-892ada89ae02';
  $pane = new stdClass();
  $pane->pid = 'new-00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create activity content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Activity',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-default btn-primary" href="/node/add/activity"><span class="glyphicon glyphicon-plus" style="color:rgb(255, 255, 255);"></span> Add Activity</a></p>',
    'format' => 'filtered_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06';
  $display->content['new-00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06'] = $pane;
  $display->panels['top'][0] = 'new-00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b68698f1-6745-4f38-8608-7d59dc74dafb';
  $handler->conf['display'] = $display;

  $export['page_activity_page__panel_context_e0d179c1-1656-49c6-a3ab-a7824e4be438'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_806814de-8dbc-4e52-85c9-cc1de0f7359e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Page Travel',
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
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
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
  $display->uuid = 'c965fd25-a303-456c-8500-65a777c3a8a1';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $display->content['new-8c2d1d6f-406b-43e4-9159-82203a8af3eb'] = $pane;
  $display->panels['middle'][0] = 'new-8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_806814de-8dbc-4e52-85c9-cc1de0f7359e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_type__room-type-travel';
  $handler->task = 'page';
  $handler->subtask = 'type';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Room type Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Roomify Property from Type (on Type: Property [field_st_property_reference])',
        'keyword' => 'roomify_property',
        'name' => 'entity_from_field:field_st_property_reference-bat_type-roomify_property',
        'delta' => 0,
        'context' => 'argument_entity_id:bat_type_1',
        'id' => 1,
      ),
    ),
    'name' => 'room-type-travel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%roomify_property:name : %type_id:name';
  $display->uuid = 'c61020a0-b75b-49d4-be75-e42066dc313a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_type__room-type-travel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7d1622c1-ce7f-4f23-b96d-64911f321048';
  $pane->panel = 'left';
  $pane->type = 'roomify_manage_type';
  $pane->subtype = 'roomify_manage_type';
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
  $pane->uuid = '7d1622c1-ce7f-4f23-b96d-64911f321048';
  $display->content['new-7d1622c1-ce7f-4f23-b96d-64911f321048'] = $pane;
  $display->panels['left'][0] = 'new-7d1622c1-ce7f-4f23-b96d-64911f321048';
  $pane = new stdClass();
  $pane->pid = 'new-3ec8fec5-1943-42ac-84a6-71e65210f34a';
  $pane->panel = 'left';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
  if (isset($customer_message[\'type_page\']) && $customer_message[\'type_page\'] === \'type_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3ec8fec5-1943-42ac-84a6-71e65210f34a';
  $display->content['new-3ec8fec5-1943-42ac-84a6-71e65210f34a'] = $pane;
  $display->panels['left'][1] = 'new-3ec8fec5-1943-42ac-84a6-71e65210f34a';
  $pane = new stdClass();
  $pane->pid = 'new-d4746735-38dd-488b-9953-5399faf72354';
  $pane->panel = 'left';
  $pane->type = 'type_availability_search';
  $pane->subtype = 'type_availability_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Check Availability',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd4746735-38dd-488b-9953-5399faf72354';
  $display->content['new-d4746735-38dd-488b-9953-5399faf72354'] = $pane;
  $display->panels['left'][2] = 'new-d4746735-38dd-488b-9953-5399faf72354';
  $pane = new stdClass();
  $pane->pid = 'new-a3d4189e-6012-4006-9801-8a5e5403c789';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_default_price';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'commerce_price_formatted_amount',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'calculation' => FALSE,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Price per Night:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a3d4189e-6012-4006-9801-8a5e5403c789';
  $display->content['new-a3d4189e-6012-4006-9801-8a5e5403c789'] = $pane;
  $display->panels['left'][3] = 'new-a3d4189e-6012-4006-9801-8a5e5403c789';
  $pane = new stdClass();
  $pane->pid = 'new-e0afa24c-b997-4b4c-bf2a-19c129286769';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_max_capacity';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Max Capacity: ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e0afa24c-b997-4b4c-bf2a-19c129286769';
  $display->content['new-e0afa24c-b997-4b4c-bf2a-19c129286769'] = $pane;
  $display->panels['left'][4] = 'new-e0afa24c-b997-4b4c-bf2a-19c129286769';
  $pane = new stdClass();
  $pane->pid = 'new-55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_bedrooms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'list_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Bedrooms:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $display->content['new-55dd48d2-aae7-4ee2-ab23-077f9df94820'] = $pane;
  $display->panels['left'][5] = 'new-55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $pane = new stdClass();
  $pane->pid = 'new-0d5bba15-55cd-4218-ab08-0c950628c87f';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_single_bed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Single Beds: ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0d5bba15-55cd-4218-ab08-0c950628c87f';
  $display->content['new-0d5bba15-55cd-4218-ab08-0c950628c87f'] = $pane;
  $display->panels['left'][6] = 'new-0d5bba15-55cd-4218-ab08-0c950628c87f';
  $pane = new stdClass();
  $pane->pid = 'new-e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_double_bed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Double Beds: ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $display->content['new-e0e1a521-9f6a-492a-94cc-d79842502dbb'] = $pane;
  $display->panels['left'][7] = 'new-e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $pane = new stdClass();
  $pane->pid = 'new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_bathrooms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Bathrooms:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $display->content['new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526'] = $pane;
  $display->panels['left'][8] = 'new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $pane = new stdClass();
  $pane->pid = 'new-c4980ee4-f216-4b91-9410-de4f404624e8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'i18n_taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'c4980ee4-f216-4b91-9410-de4f404624e8';
  $display->content['new-c4980ee4-f216-4b91-9410-de4f404624e8'] = $pane;
  $display->panels['left'][9] = 'new-c4980ee4-f216-4b91-9410-de4f404624e8';
  $pane = new stdClass();
  $pane->pid = 'new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $pane->panel = 'left';
  $pane->type = 'roomify_back_to_property_link';
  $pane->subtype = 'roomify_back_to_property_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $display->content['new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702'] = $pane;
  $display->panels['left'][10] = 'new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $pane = new stdClass();
  $pane->pid = 'new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'types-panel_pane_1';
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
  $pane->uuid = 'bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $display->content['new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34'] = $pane;
  $display->panels['right'][0] = 'new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $pane = new stdClass();
  $pane->pid = 'new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Room Description',
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
  $pane->uuid = 'a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $display->content['new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206'] = $pane;
  $display->panels['right'][1] = 'new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_type__room-type-travel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_areas__panel_context_c0730131-d7e5-4771-b0d6-36390c7ebc8e';
  $handler->task = 'page';
  $handler->subtask = 'all_areas';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'All Areas Travel',
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
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
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
  $display->title = 'Areas';
  $display->uuid = '54fbbbd4-2026-4268-8238-9b028f95f8a0';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-86c794a7-7f86-43ec-88d7-af9bb5b1e6d2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'areas_travel-all_areas_view';
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
  $pane->uuid = '86c794a7-7f86-43ec-88d7-af9bb5b1e6d2';
  $display->content['new-86c794a7-7f86-43ec-88d7-af9bb5b1e6d2'] = $pane;
  $display->panels['middle'][0] = 'new-86c794a7-7f86-43ec-88d7-af9bb5b1e6d2';
  $pane = new stdClass();
  $pane->pid = 'new-acec1aa5-b26c-4f58-9c0c-c83bb72d4509';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit terms in 6',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Area',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-primary btn-default" href="/admin/structure/taxonomy/location/add"><span class="glyphicon glyphicon-plus" style="color:rgb(255, 255, 255);"></span>  Add Area</a></p>',
    'format' => 'filtered_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'acec1aa5-b26c-4f58-9c0c-c83bb72d4509';
  $display->content['new-acec1aa5-b26c-4f58-9c0c-c83bb72d4509'] = $pane;
  $display->panels['top'][0] = 'new-acec1aa5-b26c-4f58-9c0c-c83bb72d4509';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-86c794a7-7f86-43ec-88d7-af9bb5b1e6d2';
  $handler->conf['display'] = $display;
  $export['page_all_areas__panel_context_c0730131-d7e5-4771-b0d6-36390c7ebc8e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_area_blog__single-area-blogposts-travel';
  $handler->task = 'page';
  $handler->subtask = 'area_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Single Area blogposts Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'single-area-blogposts-travel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
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
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%area:name Blog';
  $display->uuid = '65229042-f911-4f90-9228-210e74cb3376';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_area_blog__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-86cf41e6-2dd6-4d17-9fe8-6fed84683d43';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Blogposts',
    'title' => '',
    'body' => '<p><a class="roomify-add-blog-post-link roomify-add-button btn btn-default" href="/node/add/blog">Add Blogpost</a></p>',
    'format' => 'filtered_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86cf41e6-2dd6-4d17-9fe8-6fed84683d43';
  $display->content['new-86cf41e6-2dd6-4d17-9fe8-6fed84683d43'] = $pane;
  $display->panels['middle'][0] = 'new-86cf41e6-2dd6-4d17-9fe8-6fed84683d43';
  $pane = new stdClass();
  $pane->pid = 'new-2bd53c58-97d0-4083-9a79-22e106a2e654';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '%area:name blog posts',
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
  $pane->uuid = '2bd53c58-97d0-4083-9a79-22e106a2e654';
  $display->content['new-2bd53c58-97d0-4083-9a79-22e106a2e654'] = $pane;
  $display->panels['middle'][1] = 'new-2bd53c58-97d0-4083-9a79-22e106a2e654';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_area_blog__single-area-blogposts-travel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_listings__locanda-travel';
  $handler->task = 'page';
  $handler->subtask = 'listings';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Single Property Travel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => 'page-listing',
    'body_classes_to_add' => 'page-single-property-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'locanda-travel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'travel_theme_or_subtheme',
          'settings' => NULL,
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Locanda or Casa',
            'php' => '$product = variable_get(\'roomify_accommodation_example_content\', \'\');
        if ($product == \'b_and_b\' || $product == \'vacation_rental\')
                return TRUE;',
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
      'top' => NULL,
      'left' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'right' => NULL,
      'bottom' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'main-left' => NULL,
      'main-right' => NULL,
      'main-center' => NULL,
      'middle' => NULL,
      'bottom-right' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'bottom-left' => NULL,
      'middle-second' => NULL,
      'down' => NULL,
    ),
    'left' => array(
      'style' => 'tabs',
    ),
    'bottom' => array(
      'style' => 'tabs',
    ),
    'bottom-left' => array(
      'style' => '-1',
    ),
    'bottom-right' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%type_id:name';
  $display->uuid = '2d69b058-2e08-4ef6-afdb-fbcb4023c51d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_listings__locanda-travel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_description';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-description-tab"></span>Description',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $display->content['new-e01ffd75-ddef-44c3-b1f6-12ecf4700622'] = $pane;
  $display->panels['bottom'][0] = 'new-e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $pane = new stdClass();
  $pane->pid = 'new-9ba3d849-bbc0-472c-ac8a-542cef17124f';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'single_property_gallery-panel_pane_1';
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
  $pane->uuid = '9ba3d849-bbc0-472c-ac8a-542cef17124f';
  $display->content['new-9ba3d849-bbc0-472c-ac8a-542cef17124f'] = $pane;
  $display->panels['bottom'][1] = 'new-9ba3d849-bbc0-472c-ac8a-542cef17124f';
  $pane = new stdClass();
  $pane->pid = 'new-824392b0-c5d4-4ed7-ab57-b00e404fb51e';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="property-location-tab"></span>Location',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '824392b0-c5d4-4ed7-ab57-b00e404fb51e';
  $display->content['new-824392b0-c5d4-4ed7-ab57-b00e404fb51e'] = $pane;
  $display->panels['bottom'][2] = 'new-824392b0-c5d4-4ed7-ab57-b00e404fb51e';
  $pane = new stdClass();
  $pane->pid = 'new-f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-amenities-tab"></span>Amenities',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75';
  $display->content['new-f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75'] = $pane;
  $display->panels['bottom'][3] = 'new-f4c87a0f-8a2a-4a84-be06-b0fe7bf33e75';
  $pane = new stdClass();
  $pane->pid = 'new-4026878e-a350-4dc5-ba8a-8d11b6d248c7';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_policies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-policies-tab"></span>Policies',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4026878e-a350-4dc5-ba8a-8d11b6d248c7';
  $display->content['new-4026878e-a350-4dc5-ba8a-8d11b6d248c7'] = $pane;
  $display->panels['bottom'][4] = 'new-4026878e-a350-4dc5-ba8a-8d11b6d248c7';
  $pane = new stdClass();
  $pane->pid = 'new-1b95bbc5-2240-4c7f-be2f-8973f525ff1a';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_reviews';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:roomify_property:casa_property:field_sp_allow_property_reviews',
        'settings' => array(
          'field_sp_allow_property_reviews' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_sp_allow_property_reviews_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="property-reviews-tab"></span>Reviews',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1b95bbc5-2240-4c7f-be2f-8973f525ff1a';
  $display->content['new-1b95bbc5-2240-4c7f-be2f-8973f525ff1a'] = $pane;
  $display->panels['bottom'][5] = 'new-1b95bbc5-2240-4c7f-be2f-8973f525ff1a';
  $pane = new stdClass();
  $pane->pid = 'new-ddaf500d-532e-4705-be8b-0128867cc306';
  $pane->panel = 'down';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'geolocation_googlemaps_dynamic',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'map_width' => '100%',
      'map_height' => '580px',
      'map_zoomlevel' => '8',
      'map_maptype' => 'roadmap',
      'marker_icon' => '',
      'map_scrollwheel' => 0,
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = 'ddaf500d-532e-4705-be8b-0128867cc306';
  $display->content['new-ddaf500d-532e-4705-be8b-0128867cc306'] = $pane;
  $display->panels['down'][0] = 'new-ddaf500d-532e-4705-be8b-0128867cc306';
  $pane = new stdClass();
  $pane->pid = 'new-9a625f00-abda-4185-913d-209af1b4bbc0';
  $pane->panel = 'middle';
  $pane->type = 'token';
  $pane->subtype = 'roomify_property:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '9a625f00-abda-4185-913d-209af1b4bbc0';
  $display->content['new-9a625f00-abda-4185-913d-209af1b4bbc0'] = $pane;
  $display->panels['middle'][0] = 'new-9a625f00-abda-4185-913d-209af1b4bbc0';
  $pane = new stdClass();
  $pane->pid = 'new-57121337-eaf4-4f12-9d69-9746f2f6d022';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_short_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '57121337-eaf4-4f12-9d69-9746f2f6d022';
  $display->content['new-57121337-eaf4-4f12-9d69-9746f2f6d022'] = $pane;
  $display->panels['middle'][1] = 'new-57121337-eaf4-4f12-9d69-9746f2f6d022';
  $pane = new stdClass();
  $pane->pid = 'new-c74caf38-acb4-43cf-bb9b-bf1799352310';
  $pane->panel = 'middle';
  $pane->type = 'roomify_manage_property';
  $pane->subtype = 'roomify_manage_property';
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
  $pane->uuid = 'c74caf38-acb4-43cf-bb9b-bf1799352310';
  $display->content['new-c74caf38-acb4-43cf-bb9b-bf1799352310'] = $pane;
  $display->panels['middle'][2] = 'new-c74caf38-acb4-43cf-bb9b-bf1799352310';
  $pane = new stdClass();
  $pane->pid = 'new-6b1b6374-7759-470e-8cc9-9c34b7ae881c';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'roomify_travel_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6b1b6374-7759-470e-8cc9-9c34b7ae881c';
  $display->content['new-6b1b6374-7759-470e-8cc9-9c34b7ae881c'] = $pane;
  $display->panels['middle'][3] = 'new-6b1b6374-7759-470e-8cc9-9c34b7ae881c';
  $pane = new stdClass();
  $pane->pid = 'new-0433d235-259a-4cd7-933d-5703a8ab2950';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'property_travel-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Choose your stay',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'property-types',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0433d235-259a-4cd7-933d-5703a8ab2950';
  $display->content['new-0433d235-259a-4cd7-933d-5703a8ab2950'] = $pane;
  $display->panels['middle'][4] = 'new-0433d235-259a-4cd7-933d-5703a8ab2950';
  $pane = new stdClass();
  $pane->pid = 'new-01204d2c-8fb2-496a-8e9e-b45f39bcf5c9';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'reviews-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:roomify_property:casa_property:field_sp_allow_property_reviews',
        'settings' => array(
          'field_sp_allow_property_reviews' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_sp_allow_property_reviews_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '01204d2c-8fb2-496a-8e9e-b45f39bcf5c9';
  $display->content['new-01204d2c-8fb2-496a-8e9e-b45f39bcf5c9'] = $pane;
  $display->panels['middle'][5] = 'new-01204d2c-8fb2-496a-8e9e-b45f39bcf5c9';
  $pane = new stdClass();
  $pane->pid = 'new-5b2b21bd-5230-475c-a265-7bfecbe27907';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'property_slideshow-panel_pane_1';
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
  $pane->uuid = '5b2b21bd-5230-475c-a265-7bfecbe27907';
  $display->content['new-5b2b21bd-5230-475c-a265-7bfecbe27907'] = $pane;
  $display->panels['top'][0] = 'new-5b2b21bd-5230-475c-a265-7bfecbe27907';
  $pane = new stdClass();
  $pane->pid = 'new-c76a5f05-7a42-4b0f-9177-1f62886e7f7d';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'roomify_listing_availability_search_block-roomify_listing_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'casa_property' => 'casa_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c76a5f05-7a42-4b0f-9177-1f62886e7f7d';
  $display->content['new-c76a5f05-7a42-4b0f-9177-1f62886e7f7d'] = $pane;
  $display->panels['top'][1] = 'new-c76a5f05-7a42-4b0f-9177-1f62886e7f7d';
  $pane = new stdClass();
  $pane->pid = 'new-a6d19895-ba66-48d2-82d0-481090491cb0';
  $pane->panel = 'top';
  $pane->type = 'locanda_availability_search';
  $pane->subtype = 'locanda_availability_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a6d19895-ba66-48d2-82d0-481090491cb0';
  $display->content['new-a6d19895-ba66-48d2-82d0-481090491cb0'] = $pane;
  $display->panels['top'][2] = 'new-a6d19895-ba66-48d2-82d0-481090491cb0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e01ffd75-ddef-44c3-b1f6-12ecf4700622';
  $handler->conf['display'] = $display;
  $export['page_listings__locanda-travel'] = $handler;

  return $export;
}
