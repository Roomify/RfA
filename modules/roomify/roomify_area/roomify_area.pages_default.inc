<?php

/**
 * @file
 * File roomify_area.pages_default.inc.
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_area_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_7d61dcb8-1d9b-4aa7-9e09-ff7d96fdccc7';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Area',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-taxonomy-area',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'location' => 'location',
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
  $display->uuid = '3be9551a-81cc-441b-bc2c-fbfa5a06cf4a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_7d61dcb8-1d9b-4aa7-9e09-ff7d96fdccc7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5585ed72-cd7b-4650-a083-5f359fe3d7a3';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_area_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'geofield_map_map',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'geofield_map_width' => '100%',
      'geofield_map_height' => '500px',
      'geofield_map_zoom' => '8',
      'geofield_map_min_zoom' => '0',
      'geofield_map_max_zoom' => '0',
      'geofield_map_controltype' => 'default',
      'geofield_map_mtc' => 'standard',
      'geofield_map_pancontrol' => 1,
      'geofield_map_maptype' => 'map',
      'geofield_map_baselayers_map' => 1,
      'geofield_map_baselayers_satellite' => 1,
      'geofield_map_baselayers_hybrid' => 1,
      'geofield_map_baselayers_physical' => 0,
      'geofield_map_scale' => 0,
      'geofield_map_overview' => 0,
      'geofield_map_overview_opened' => 0,
      'geofield_map_scrollwheel' => 0,
      'geofield_map_draggable' => 1,
      'geofield_map_streetview_show' => 1,
      'geofield_map_center' => array(
        'lat' => '',
        'lon' => '',
        'geocode' => 'Find my location',
      ),
    ),
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
  $pane->uuid = '5585ed72-cd7b-4650-a083-5f359fe3d7a3';
  $display->content['new-5585ed72-cd7b-4650-a083-5f359fe3d7a3'] = $pane;
  $display->panels['bottom'][0] = 'new-5585ed72-cd7b-4650-a083-5f359fe3d7a3';
  $pane = new stdClass();
  $pane->pid = 'new-631c33c4-b755-4b31-bcfc-085044430561';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_area_title_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->uuid = '631c33c4-b755-4b31-bcfc-085044430561';
  $display->content['new-631c33c4-b755-4b31-bcfc-085044430561'] = $pane;
  $display->panels['middle'][0] = 'new-631c33c4-b755-4b31-bcfc-085044430561';
  $pane = new stdClass();
  $pane->pid = 'new-70d604c4-2f6e-49d1-b500-6090a1d1eec0';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_area_description_subtitle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '70d604c4-2f6e-49d1-b500-6090a1d1eec0';
  $display->content['new-70d604c4-2f6e-49d1-b500-6090a1d1eec0'] = $pane;
  $display->panels['middle'][1] = 'new-70d604c4-2f6e-49d1-b500-6090a1d1eec0';
  $pane = new stdClass();
  $pane->pid = 'new-24aab0c7-c7fb-404e-8cf8-62f946124a0f';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:description_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '24aab0c7-c7fb-404e-8cf8-62f946124a0f';
  $display->content['new-24aab0c7-c7fb-404e-8cf8-62f946124a0f'] = $pane;
  $display->panels['middle'][2] = 'new-24aab0c7-c7fb-404e-8cf8-62f946124a0f';
  $pane = new stdClass();
  $pane->pid = 'new-21f0932d-c91b-4141-aaaa-287ac350653c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_title_featured_properties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '21f0932d-c91b-4141-aaaa-287ac350653c';
  $display->content['new-21f0932d-c91b-4141-aaaa-287ac350653c'] = $pane;
  $display->panels['middle'][3] = 'new-21f0932d-c91b-4141-aaaa-287ac350653c';
  $pane = new stdClass();
  $pane->pid = 'new-a984243d-2727-4daa-9637-8042f03a6e5a';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_desc_featured_properities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a984243d-2727-4daa-9637-8042f03a6e5a';
  $display->content['new-a984243d-2727-4daa-9637-8042f03a6e5a'] = $pane;
  $display->panels['middle'][4] = 'new-a984243d-2727-4daa-9637-8042f03a6e5a';
  $pane = new stdClass();
  $pane->pid = 'new-32ed3f4c-30e1-4d20-b031-97e80eeffec2';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'areas-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '32ed3f4c-30e1-4d20-b031-97e80eeffec2';
  $display->content['new-32ed3f4c-30e1-4d20-b031-97e80eeffec2'] = $pane;
  $display->panels['middle'][5] = 'new-32ed3f4c-30e1-4d20-b031-97e80eeffec2';
  $pane = new stdClass();
  $pane->pid = 'new-a5dba32c-030b-446a-8a1e-1dc252f1a916';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_area_title_blog_posts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a5dba32c-030b-446a-8a1e-1dc252f1a916';
  $display->content['new-a5dba32c-030b-446a-8a1e-1dc252f1a916'] = $pane;
  $display->panels['middle'][6] = 'new-a5dba32c-030b-446a-8a1e-1dc252f1a916';
  $pane = new stdClass();
  $pane->pid = 'new-aeb08eb8-d398-4b20-b7a7-35f711d1a90e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_area_description_blog_post';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'aeb08eb8-d398-4b20-b7a7-35f711d1a90e';
  $display->content['new-aeb08eb8-d398-4b20-b7a7-35f711d1a90e'] = $pane;
  $display->panels['middle'][7] = 'new-aeb08eb8-d398-4b20-b7a7-35f711d1a90e';
  $pane = new stdClass();
  $pane->pid = 'new-aa44b39b-57f2-4428-9c6d-b4988c75b927';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'aa44b39b-57f2-4428-9c6d-b4988c75b927';
  $display->content['new-aa44b39b-57f2-4428-9c6d-b4988c75b927'] = $pane;
  $display->panels['middle'][8] = 'new-aa44b39b-57f2-4428-9c6d-b4988c75b927';
  $pane = new stdClass();
  $pane->pid = 'new-2ba6a343-aa6b-4432-a9e2-60d25b7b261a';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_field_link_to_area_blog';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '2ba6a343-aa6b-4432-a9e2-60d25b7b261a';
  $display->content['new-2ba6a343-aa6b-4432-a9e2-60d25b7b261a'] = $pane;
  $display->panels['middle'][9] = 'new-2ba6a343-aa6b-4432-a9e2-60d25b7b261a';
  $pane = new stdClass();
  $pane->pid = 'new-53affa52-a0f4-409b-aea8-b58fb0e64479';
  $pane->panel = 'top';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
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
  $pane->uuid = '53affa52-a0f4-409b-aea8-b58fb0e64479';
  $display->content['new-53affa52-a0f4-409b-aea8-b58fb0e64479'] = $pane;
  $display->panels['top'][0] = 'new-53affa52-a0f4-409b-aea8-b58fb0e64479';
  $pane = new stdClass();
  $pane->pid = 'new-aab34454-dbcf-48c3-86ca-4ec6563da598';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_area_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'paragraphs_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'aab34454-dbcf-48c3-86ca-4ec6563da598';
  $display->content['new-aab34454-dbcf-48c3-86ca-4ec6563da598'] = $pane;
  $display->panels['top'][1] = 'new-aab34454-dbcf-48c3-86ca-4ec6563da598';
  $pane = new stdClass();
  $pane->pid = 'new-4d09d177-2199-4ef4-83d6-b9128208ef03';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'roomify_listing_availability_search_block-roomify_property_search';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4d09d177-2199-4ef4-83d6-b9128208ef03';
  $display->content['new-4d09d177-2199-4ef4-83d6-b9128208ef03'] = $pane;
  $display->panels['top'][2] = 'new-4d09d177-2199-4ef4-83d6-b9128208ef03';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-aab34454-dbcf-48c3-86ca-4ec6563da598';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_7d61dcb8-1d9b-4aa7-9e09-ff7d96fdccc7'] = $handler;

  return $export;
}
