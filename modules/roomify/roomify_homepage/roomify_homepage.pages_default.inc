<?php

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_homepage_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_7f598fbf-439c-4e02-8ed0-fbf05bc51957';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Homepage',
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
              'homepage' => 'homepage',
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
  $display->uuid = '3df221a1-b788-4bd3-ac2c-83d0d52ccb73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_7f598fbf-439c-4e02-8ed0-fbf05bc51957';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7f9e5ee2-ce3b-4d87-956b-7687948e982c';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_view',
        'settings' => array(
          'field_homepage_properties_view' => array(
            'und' => array(
              0 => array(
                'value' => 'carousel',
              ),
            ),
          ),
          'field_homepage_properties_view_value' => array(
            0 => 'carousel',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Properties',
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
  $pane->uuid = '7f9e5ee2-ce3b-4d87-956b-7687948e982c';
  $display->content['new-7f9e5ee2-ce3b-4d87-956b-7687948e982c'] = $pane;
  $display->panels['bottom'][0] = 'new-7f9e5ee2-ce3b-4d87-956b-7687948e982c';
  $pane = new stdClass();
  $pane->pid = 'new-894cb4e5-f8f5-43b5-bd04-56d2d6bb96b6';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_view',
        'settings' => array(
          'field_homepage_properties_view' => array(
            'und' => array(
              0 => array(
                'value' => 'grid',
              ),
            ),
          ),
          'field_homepage_properties_view_value' => array(
            0 => 'grid',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Properties',
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
  $pane->uuid = '894cb4e5-f8f5-43b5-bd04-56d2d6bb96b6';
  $display->content['new-894cb4e5-f8f5-43b5-bd04-56d2d6bb96b6'] = $pane;
  $display->panels['bottom'][1] = 'new-894cb4e5-f8f5-43b5-bd04-56d2d6bb96b6';
  $pane = new stdClass();
  $pane->pid = 'new-e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_areas-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas',
        'settings' => array(
          'field_homepage_areas' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_homepage_areas_value' => array(
            0 => 1,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Areas',
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
  $pane->uuid = 'e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $display->content['new-e88c8f7a-eb28-4c00-9697-0d8337f44af6'] = $pane;
  $display->panels['bottom'][2] = 'new-e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $pane = new stdClass();
  $pane->pid = 'new-c1895013-8a57-4022-8c59-5ce57526d669';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_blogposts-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Blogposts',
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
  $pane->uuid = 'c1895013-8a57-4022-8c59-5ce57526d669';
  $display->content['new-c1895013-8a57-4022-8c59-5ce57526d669'] = $pane;
  $display->panels['bottom'][3] = 'new-c1895013-8a57-4022-8c59-5ce57526d669';
  $pane = new stdClass();
  $pane->pid = 'new-3991b356-5bf2-4ab4-87a4-78f732a447c9';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_homepage_main_text';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3991b356-5bf2-4ab4-87a4-78f732a447c9';
  $display->content['new-3991b356-5bf2-4ab4-87a4-78f732a447c9'] = $pane;
  $display->panels['middle'][0] = 'new-3991b356-5bf2-4ab4-87a4-78f732a447c9';
  $pane = new stdClass();
  $pane->pid = 'new-e9ac8742-dda2-412e-98c8-0d4e228fa796';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_homepage_intro_text';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e9ac8742-dda2-412e-98c8-0d4e228fa796';
  $display->content['new-e9ac8742-dda2-412e-98c8-0d4e228fa796'] = $pane;
  $display->panels['top'][0] = 'new-e9ac8742-dda2-412e-98c8-0d4e228fa796';
  $pane = new stdClass();
  $pane->pid = 'new-0fb96dfb-d5bb-42e8-a349-206ec876a429';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_travel-panel_pane_1';
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
  $pane->uuid = '0fb96dfb-d5bb-42e8-a349-206ec876a429';
  $display->content['new-0fb96dfb-d5bb-42e8-a349-206ec876a429'] = $pane;
  $display->panels['top'][1] = 'new-0fb96dfb-d5bb-42e8-a349-206ec876a429';
  $pane = new stdClass();
  $pane->pid = 'new-c943a0b7-9ecd-4c93-890d-4484aa3603d3';
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
  $pane->uuid = 'c943a0b7-9ecd-4c93-890d-4484aa3603d3';
  $display->content['new-c943a0b7-9ecd-4c93-890d-4484aa3603d3'] = $pane;
  $display->panels['top'][2] = 'new-c943a0b7-9ecd-4c93-890d-4484aa3603d3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0fb96dfb-d5bb-42e8-a349-206ec876a429';
  $handler->conf['display'] = $display;

  $export['node_view__panel_context_7f598fbf-439c-4e02-8ed0-fbf05bc51957'] = $handler;

  return $export;
}
