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
      'top' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
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
    'top' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2cee09a7-fa2c-4eb7-8364-dec367d6121f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'group_view__panel_context_2c6e932f-c1f8-4395-a00b-8941534027a5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-79bed47e-8b60-4615-b6d5-64e2625ad637';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_properties-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-properties-tab"></span>Properties',
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
  $pane->uuid = '79bed47e-8b60-4615-b6d5-64e2625ad637';
  $display->content['new-79bed47e-8b60-4615-b6d5-64e2625ad637'] = $pane;
  $display->panels['top'][0] = 'new-79bed47e-8b60-4615-b6d5-64e2625ad637';
  $pane = new stdClass();
  $pane->pid = 'new-69e187d2-dd21-443b-8aa1-4386b87bdae8';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'group_bookings';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-bookings-tab"></span>Bookings',
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
  $pane->uuid = '69e187d2-dd21-443b-8aa1-4386b87bdae8';
  $display->content['new-69e187d2-dd21-443b-8aa1-4386b87bdae8'] = $pane;
  $display->panels['top'][1] = 'new-69e187d2-dd21-443b-8aa1-4386b87bdae8';
  $pane = new stdClass();
  $pane->pid = 'new-5d27304b-c310-4387-afa4-852d4530559c';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'group_conversations-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-conversations-tab"></span>Conversations',
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
  $pane->uuid = '5d27304b-c310-4387-afa4-852d4530559c';
  $display->content['new-5d27304b-c310-4387-afa4-852d4530559c'] = $pane;
  $display->panels['top'][2] = 'new-5d27304b-c310-4387-afa4-852d4530559c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['group_view__panel_context_2c6e932f-c1f8-4395-a00b-8941534027a5'] = $handler;

  return $export;
}
