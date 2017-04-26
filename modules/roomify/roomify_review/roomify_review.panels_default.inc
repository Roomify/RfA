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
  $pane->pid = 'new-ec7bad2c-ad7d-42b0-8c88-d43d66d60da7';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'property_reviews-panel_pane_1';
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
  $pane->uuid = 'ec7bad2c-ad7d-42b0-8c88-d43d66d60da7';
  $display->content['new-ec7bad2c-ad7d-42b0-8c88-d43d66d60da7'] = $pane;
  $display->panels['middle'][0] = 'new-ec7bad2c-ad7d-42b0-8c88-d43d66d60da7';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12 col-sm-6',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ef2a5729-e644-40af-acda-bba133258857';
  $display->content['new-ef2a5729-e644-40af-acda-bba133258857'] = $pane;
  $display->panels['top'][0] = 'new-ef2a5729-e644-40af-acda-bba133258857';
  $pane = new stdClass();
  $pane->pid = 'new-ef3aa4d6-9688-4df1-b461-58f3b03c4c65';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'roomify_property:average-rating';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'requiredcontext_entity:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12 col-sm-6 col-sm-offset-6',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ef3aa4d6-9688-4df1-b461-58f3b03c4c65';
  $display->content['new-ef3aa4d6-9688-4df1-b461-58f3b03c4c65'] = $pane;
  $display->panels['top'][1] = 'new-ef3aa4d6-9688-4df1-b461-58f3b03c4c65';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['property_reviews'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'reviews';
  $mini->category = '';
  $mini->admin_title = 'Reviews';
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
      'middle' => NULL,
      'bottom' => NULL,
      'top' => NULL,
    ),
    'top' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0880e045-d5c7-479e-9096-d0acda94b998';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'reviews';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-53ec137a-1907-4216-8fa9-6f0a7b2285a9';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'reviews-panel_pane_2';
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
  $pane->uuid = '53ec137a-1907-4216-8fa9-6f0a7b2285a9';
  $display->content['new-53ec137a-1907-4216-8fa9-6f0a7b2285a9'] = $pane;
  $display->panels['top'][0] = 'new-53ec137a-1907-4216-8fa9-6f0a7b2285a9';
  $pane = new stdClass();
  $pane->pid = 'new-1505fe46-5e46-4324-97c2-a036128662c4';
  $pane->panel = 'top';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1505fe46-5e46-4324-97c2-a036128662c4';
  $display->content['new-1505fe46-5e46-4324-97c2-a036128662c4'] = $pane;
  $display->panels['top'][1] = 'new-1505fe46-5e46-4324-97c2-a036128662c4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1505fe46-5e46-4324-97c2-a036128662c4';
  $mini->display = $display;
  $export['reviews'] = $mini;

  return $export;
}
