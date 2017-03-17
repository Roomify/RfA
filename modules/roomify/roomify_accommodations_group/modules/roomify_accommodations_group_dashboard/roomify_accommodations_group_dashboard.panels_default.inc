<?php

/**
 * @file
 * roomify_accommodations_group_dashboard.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function roomify_accommodations_group_dashboard_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'group_bookings';
  $mini->category = '';
  $mini->admin_title = 'Group Bookings';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
    ),
    'bottom' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa466e62-4a45-4956-a76a-72e3b2d67801';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'group_bookings';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-27899710-203e-4f03-ba65-c94384874622';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '27899710-203e-4f03-ba65-c94384874622';
  $display->content['new-27899710-203e-4f03-ba65-c94384874622'] = $pane;
  $display->panels['bottom'][0] = 'new-27899710-203e-4f03-ba65-c94384874622';
  $pane = new stdClass();
  $pane->pid = 'new-f5287e46-df68-4f9a-9079-7380d76ef853';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f5287e46-df68-4f9a-9079-7380d76ef853';
  $display->content['new-f5287e46-df68-4f9a-9079-7380d76ef853'] = $pane;
  $display->panels['bottom'][1] = 'new-f5287e46-df68-4f9a-9079-7380d76ef853';
  $pane = new stdClass();
  $pane->pid = 'new-e30ba8ba-5146-4f13-a6b9-5ba791fa5496';
  $pane->panel = 'top';
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
  $pane->uuid = 'e30ba8ba-5146-4f13-a6b9-5ba791fa5496';
  $display->content['new-e30ba8ba-5146-4f13-a6b9-5ba791fa5496'] = $pane;
  $display->panels['top'][0] = 'new-e30ba8ba-5146-4f13-a6b9-5ba791fa5496';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e30ba8ba-5146-4f13-a6b9-5ba791fa5496';
  $mini->display = $display;
  $export['group_bookings'] = $mini;

  return $export;
}
