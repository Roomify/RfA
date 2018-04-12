<?php

/**
 * @file
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_homepage_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage-tight';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Homepage Tight',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'homepage-tight',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage-tight',
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
        1 => array(
          'name' => 'entity_field_value:node:homepage:field_homepage_style',
          'settings' => array(
            'field_homepage_style' => array(
              'und' => array(
                0 => array(
                  'value' => 'tight',
                ),
              ),
            ),
            'field_homepage_style_value' => array(
              0 => 'tight',
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
      'middle-second' => NULL,
      'down' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3df221a1-b788-4bd3-ac2c-83d0d52ccb73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__homepage-tight';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_style',
        'settings' => array(
          'field_homepage_properties_style' => array(
            'und' => array(
              0 => array(
                'value' => 'vertical',
              ),
            ),
          ),
          'field_homepage_properties_style_value' => array(
            0 => 'vertical',
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
  $pane->pid = 'new-2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_style',
        'settings' => array(
          'field_homepage_properties_style' => array(
            'und' => array(
              0 => array(
                'value' => 'horizontal',
              ),
            ),
          ),
          'field_homepage_properties_style_value' => array(
            0 => 'horizontal',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82';
  $display->content['new-2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82'] = $pane;
  $display->panels['bottom'][2] = 'new-2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas_style',
        'settings' => array(
          'field_homepage_areas_style' => array(
            'und' => array(
              0 => array(
                'value' => 'vertical',
              ),
            ),
          ),
          'field_homepage_areas_style_value' => array(
            0 => 'vertical',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $display->content['new-e88c8f7a-eb28-4c00-9697-0d8337f44af6'] = $pane;
  $display->panels['bottom'][3] = 'new-e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $pane = new stdClass();
  $pane->pid = 'new-2ddcb8a3-4901-4de4-89ac-fa9ccf5db414';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_areas-panel_pane_2';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas_style',
        'settings' => array(
          'field_homepage_areas_style' => array(
            'und' => array(
              0 => array(
                'value' => 'horizontal',
              ),
            ),
          ),
          'field_homepage_areas_style_value' => array(
            0 => 'horizontal',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2ddcb8a3-4901-4de4-89ac-fa9ccf5db414';
  $display->content['new-2ddcb8a3-4901-4de4-89ac-fa9ccf5db414'] = $pane;
  $display->panels['bottom'][4] = 'new-2ddcb8a3-4901-4de4-89ac-fa9ccf5db414';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c1895013-8a57-4022-8c59-5ce57526d669';
  $display->content['new-c1895013-8a57-4022-8c59-5ce57526d669'] = $pane;
  $display->panels['bottom'][5] = 'new-c1895013-8a57-4022-8c59-5ce57526d669';
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
  $pane->pid = 'new-c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_offers-panel_pane_2';
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
  $pane->uuid = 'c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $display->content['new-c3019b17-1947-4102-b8e0-f87abb1b3d61'] = $pane;
  $display->panels['middle'][1] = 'new-c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $pane = new stdClass();
  $pane->pid = 'new-ef157365-3743-48bc-9505-8c645333e111';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage-panel_pane_2';
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
  $pane->uuid = 'ef157365-3743-48bc-9505-8c645333e111';
  $display->content['new-ef157365-3743-48bc-9505-8c645333e111'] = $pane;
  $display->panels['middle'][2] = 'new-ef157365-3743-48bc-9505-8c645333e111';
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
  $pane->pid = 'new-41f39cc3-0291-4ffa-aaec-0f410985c9d0';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage-panel_pane_1';
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
  $pane->uuid = '41f39cc3-0291-4ffa-aaec-0f410985c9d0';
  $display->content['new-41f39cc3-0291-4ffa-aaec-0f410985c9d0'] = $pane;
  $display->panels['top'][1] = 'new-41f39cc3-0291-4ffa-aaec-0f410985c9d0';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__homepage-tight'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage-large';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Homepage Large',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage-large',
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
        1 => array(
          'name' => 'entity_field_value:node:homepage:field_homepage_style',
          'settings' => array(
            'field_homepage_style' => array(
              'und' => array(
                0 => array(
                  'value' => 'large',
                ),
              ),
            ),
            'field_homepage_style_value' => array(
              0 => 'large',
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
      'middle-second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3df221a1-b788-4bd3-ac2c-83d0d52ccb73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__homepage-large';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_style',
        'settings' => array(
          'field_homepage_properties_style' => array(
            'und' => array(
              0 => array(
                'value' => 'vertical',
              ),
            ),
          ),
          'field_homepage_properties_style_value' => array(
            0 => 'vertical',
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
  $pane->pid = 'new-9b8fffc4-1d62-49bb-af47-d366d7c580e0';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_5';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_style',
        'settings' => array(
          'field_homepage_properties_style' => array(
            'und' => array(
              0 => array(
                'value' => 'horizontal',
              ),
            ),
          ),
          'field_homepage_properties_style_value' => array(
            0 => 'horizontal',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9b8fffc4-1d62-49bb-af47-d366d7c580e0';
  $display->content['new-9b8fffc4-1d62-49bb-af47-d366d7c580e0'] = $pane;
  $display->panels['bottom'][2] = 'new-9b8fffc4-1d62-49bb-af47-d366d7c580e0';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas_style',
        'settings' => array(
          'field_homepage_areas_style' => array(
            'und' => array(
              0 => array(
                'value' => 'vertical',
              ),
            ),
          ),
          'field_homepage_areas_style_value' => array(
            0 => 'vertical',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $display->content['new-e88c8f7a-eb28-4c00-9697-0d8337f44af6'] = $pane;
  $display->panels['bottom'][3] = 'new-e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $pane = new stdClass();
  $pane->pid = 'new-7fc3cb6f-5bb5-4dce-96c0-66eb4f8f2f5d';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_areas-panel_pane_2';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas_style',
        'settings' => array(
          'field_homepage_areas_style' => array(
            'und' => array(
              0 => array(
                'value' => 'horizontal',
              ),
            ),
          ),
          'field_homepage_areas_style_value' => array(
            0 => 'horizontal',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7fc3cb6f-5bb5-4dce-96c0-66eb4f8f2f5d';
  $display->content['new-7fc3cb6f-5bb5-4dce-96c0-66eb4f8f2f5d'] = $pane;
  $display->panels['bottom'][4] = 'new-7fc3cb6f-5bb5-4dce-96c0-66eb4f8f2f5d';
  $pane = new stdClass();
  $pane->pid = 'new-c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_offers-panel_pane_2';
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
  $pane->uuid = 'c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $display->content['new-c3019b17-1947-4102-b8e0-f87abb1b3d61'] = $pane;
  $display->panels['bottom'][5] = 'new-c3019b17-1947-4102-b8e0-f87abb1b3d61';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c1895013-8a57-4022-8c59-5ce57526d669';
  $display->content['new-c1895013-8a57-4022-8c59-5ce57526d669'] = $pane;
  $display->panels['bottom'][6] = 'new-c1895013-8a57-4022-8c59-5ce57526d669';
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
  $pane->pid = 'new-8de822a2-5489-40aa-9ca7-0a88e0e9c024';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage-panel_pane_2';
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
  $pane->uuid = '8de822a2-5489-40aa-9ca7-0a88e0e9c024';
  $display->content['new-8de822a2-5489-40aa-9ca7-0a88e0e9c024'] = $pane;
  $display->panels['middle'][1] = 'new-8de822a2-5489-40aa-9ca7-0a88e0e9c024';
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
  $pane->access = array(
    'plugins' => array(),
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
  $export['node_view__homepage-large'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage-video';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Homepage Video',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'homepage-tight homepage-video',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage-video',
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
        1 => array(
          'name' => 'entity_field_value:node:homepage:field_homepage_style',
          'settings' => array(
            'field_homepage_style' => array(
              'und' => array(
                0 => array(
                  'value' => 'video',
                ),
              ),
            ),
            'field_homepage_style_value' => array(
              0 => 'video',
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
      'middle-second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3df221a1-b788-4bd3-ac2c-83d0d52ccb73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__homepage-video';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_style',
        'settings' => array(
          'field_homepage_properties_style' => array(
            'und' => array(
              0 => array(
                'value' => 'vertical',
              ),
            ),
          ),
          'field_homepage_properties_style_value' => array(
            0 => 'vertical',
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
  $pane->pid = 'new-2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_properties_style',
        'settings' => array(
          'field_homepage_properties_style' => array(
            'und' => array(
              0 => array(
                'value' => 'horizontal',
              ),
            ),
          ),
          'field_homepage_properties_style_value' => array(
            0 => 'horizontal',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
      1 => array(
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82';
  $display->content['new-2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82'] = $pane;
  $display->panels['bottom'][2] = 'new-2ee540a1-d8c7-4d8e-9d9e-0f36c8a98e82';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas_style',
        'settings' => array(
          'field_homepage_areas_style' => array(
            'und' => array(
              0 => array(
                'value' => 'vertical',
              ),
            ),
          ),
          'field_homepage_areas_style_value' => array(
            0 => 'vertical',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $display->content['new-e88c8f7a-eb28-4c00-9697-0d8337f44af6'] = $pane;
  $display->panels['bottom'][3] = 'new-e88c8f7a-eb28-4c00-9697-0d8337f44af6';
  $pane = new stdClass();
  $pane->pid = 'new-2ddcb8a3-4901-4de4-89ac-fa9ccf5db414';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_areas-panel_pane_2';
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
      1 => array(
        'name' => 'entity_field_value:node:homepage:field_homepage_areas_style',
        'settings' => array(
          'field_homepage_areas_style' => array(
            'und' => array(
              0 => array(
                'value' => 'horizontal',
              ),
            ),
          ),
          'field_homepage_areas_style_value' => array(
            0 => 'horizontal',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2ddcb8a3-4901-4de4-89ac-fa9ccf5db414';
  $display->content['new-2ddcb8a3-4901-4de4-89ac-fa9ccf5db414'] = $pane;
  $display->panels['bottom'][4] = 'new-2ddcb8a3-4901-4de4-89ac-fa9ccf5db414';
  $pane = new stdClass();
  $pane->pid = 'new-c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage_offers-panel_pane_2';
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
  $pane->uuid = 'c3019b17-1947-4102-b8e0-f87abb1b3d61';
  $display->content['new-c3019b17-1947-4102-b8e0-f87abb1b3d61'] = $pane;
  $display->panels['bottom'][5] = 'new-c3019b17-1947-4102-b8e0-f87abb1b3d61';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c1895013-8a57-4022-8c59-5ce57526d669';
  $display->content['new-c1895013-8a57-4022-8c59-5ce57526d669'] = $pane;
  $display->panels['bottom'][6] = 'new-c1895013-8a57-4022-8c59-5ce57526d669';
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
  $pane->pid = 'new-ef157365-3743-48bc-9505-8c645333e111';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'homepage-panel_pane_2';
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
  $pane->uuid = 'ef157365-3743-48bc-9505-8c645333e111';
  $display->content['new-ef157365-3743-48bc-9505-8c645333e111'] = $pane;
  $display->panels['middle'][1] = 'new-ef157365-3743-48bc-9505-8c645333e111';
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
  $pane->pid = 'new-76dccc1e-3211-4959-a4ab-6070bfb15a11';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_homepage_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'video_formatter_player',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'widthxheight' => '640x360',
      'poster_image_style' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '76dccc1e-3211-4959-a4ab-6070bfb15a11';
  $display->content['new-76dccc1e-3211-4959-a4ab-6070bfb15a11'] = $pane;
  $display->panels['top'][1] = 'new-76dccc1e-3211-4959-a4ab-6070bfb15a11';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__homepage-video'] = $handler;

  return $export;
}
