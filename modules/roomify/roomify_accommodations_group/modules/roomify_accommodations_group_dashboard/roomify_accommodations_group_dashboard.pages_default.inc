<?php

/**
 * @file
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_accommodations_group_dashboard_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'group_view__panel_context_2c6e932f-c1f8-4395-a00b-8941534027a5';
  $handler->task = 'group_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Roomify Group',
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
          'name' => 'entity_bundle:group',
          'settings' => array(
            'type' => array(
              'roomify_group' => 'roomify_group',
            ),
          ),
          'context' => 'argument_entity_id:group_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
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
      'left' => NULL,
      'right' => NULL,
      'bottom' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
    ),
    'bottom' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2cee09a7-fa2c-4eb7-8364-dec367d6121f';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-264722a1-4f9d-4526-a850-5cb986957778';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_bookings-panel_pane_3';
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
  $pane->uuid = '264722a1-4f9d-4526-a850-5cb986957778';
  $display->content['new-264722a1-4f9d-4526-a850-5cb986957778'] = $pane;
  $display->panels['bottom'][0] = 'new-264722a1-4f9d-4526-a850-5cb986957778';
  $pane = new stdClass();
  $pane->pid = 'new-0bc28d04-e1b7-4faa-b7fc-60e624e284a8';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_bookings-panel_pane_1';
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
  $pane->uuid = '0bc28d04-e1b7-4faa-b7fc-60e624e284a8';
  $display->content['new-0bc28d04-e1b7-4faa-b7fc-60e624e284a8'] = $pane;
  $display->panels['bottom'][1] = 'new-0bc28d04-e1b7-4faa-b7fc-60e624e284a8';
  $pane = new stdClass();
  $pane->pid = 'new-fd9c8234-f676-4f61-9f56-39046d98beb2';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_bookings-panel_pane_4';
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
  $pane->uuid = 'fd9c8234-f676-4f61-9f56-39046d98beb2';
  $display->content['new-fd9c8234-f676-4f61-9f56-39046d98beb2'] = $pane;
  $display->panels['bottom'][2] = 'new-fd9c8234-f676-4f61-9f56-39046d98beb2';
  $pane = new stdClass();
  $pane->pid = 'new-8ddf2e3f-8bad-4d06-8c2a-f979e66371fb';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_properties-panel_pane_1';
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
  $pane->uuid = '8ddf2e3f-8bad-4d06-8c2a-f979e66371fb';
  $display->content['new-8ddf2e3f-8bad-4d06-8c2a-f979e66371fb'] = $pane;
  $display->panels['left'][0] = 'new-8ddf2e3f-8bad-4d06-8c2a-f979e66371fb';
  $pane = new stdClass();
  $pane->pid = 'new-d56c0b34-215e-409f-bd45-919e9fd61754';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_bookings-panel_pane_2';
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
  $pane->uuid = 'd56c0b34-215e-409f-bd45-919e9fd61754';
  $display->content['new-d56c0b34-215e-409f-bd45-919e9fd61754'] = $pane;
  $display->panels['right'][0] = 'new-d56c0b34-215e-409f-bd45-919e9fd61754';
  $pane = new stdClass();
  $pane->pid = 'new-5d27304b-c310-4387-afa4-852d4530559c';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_conversations-panel_pane_1';
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
  $pane->uuid = '5d27304b-c310-4387-afa4-852d4530559c';
  $display->content['new-5d27304b-c310-4387-afa4-852d4530559c'] = $pane;
  $display->panels['right'][1] = 'new-5d27304b-c310-4387-afa4-852d4530559c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['group_view__panel_context_2c6e932f-c1f8-4395-a00b-8941534027a5'] = $handler;

  return $export;
}
