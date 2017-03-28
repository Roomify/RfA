<?php

/**
 * @file
 * roomify_review.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function roomify_review_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'property_reviews';
  $mini->category = '';
  $mini->admin_title = 'Property Reviews';
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
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e615510-73c1-46ec-903d-885f590e2c6b';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'property_reviews';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a78f0949-5e84-4e84-8acb-fb5c9feac41e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'reviews-panel_pane_1';
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
  $pane->uuid = 'a78f0949-5e84-4e84-8acb-fb5c9feac41e';
  $display->content['new-a78f0949-5e84-4e84-8acb-fb5c9feac41e'] = $pane;
  $display->panels['middle'][0] = 'new-a78f0949-5e84-4e84-8acb-fb5c9feac41e';
  $pane = new stdClass();
  $pane->pid = 'new-ef2a5729-e644-40af-acda-bba133258857';
  $pane->panel = 'top';
  $pane->type = 'roomify_add_property_review_button';
  $pane->subtype = 'roomify_add_property_review_button';
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
  $pane->uuid = 'ef2a5729-e644-40af-acda-bba133258857';
  $display->content['new-ef2a5729-e644-40af-acda-bba133258857'] = $pane;
  $display->panels['top'][0] = 'new-ef2a5729-e644-40af-acda-bba133258857';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a78f0949-5e84-4e84-8acb-fb5c9feac41e';
  $mini->display = $display;
  $export['property_reviews'] = $mini;

  return $export;
}
