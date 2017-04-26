<?php

/**
 * @file
 * roomify_review.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_review_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6941b25c-7d01-44c4-916b-c1430afc795a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Review',
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
              'review' => 'review',
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
  $display->uuid = '1a5d1743-0cdd-40f9-82d4-5e7fce94ee67';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_6941b25c-7d01-44c4-916b-c1430afc795a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e3e388cd-6e36-4af0-8dc3-b1add2efced3';
  $pane->panel = 'middle';
  $pane->type = 'token';
  $pane->subtype = 'node:status';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
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
  $pane->uuid = 'e3e388cd-6e36-4af0-8dc3-b1add2efced3';
  $display->content['new-e3e388cd-6e36-4af0-8dc3-b1add2efced3'] = $pane;
  $display->panels['middle'][0] = 'new-e3e388cd-6e36-4af0-8dc3-b1add2efced3';
  $pane = new stdClass();
  $pane->pid = 'new-5ffd86e9-5eda-417a-b444-956538383fc6';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_review_property_reviewed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Property Reviewed:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5ffd86e9-5eda-417a-b444-956538383fc6';
  $display->content['new-5ffd86e9-5eda-417a-b444-956538383fc6'] = $pane;
  $display->panels['middle'][1] = 'new-5ffd86e9-5eda-417a-b444-956538383fc6';
  $pane = new stdClass();
  $pane->pid = 'new-3762f04b-6ee8-4984-b00b-276747527b39';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_review_rating';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'fivestar_formatter_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'widget' => array(
        'fivestar_widget' => 'default',
      ),
      'style' => 'average',
      'text' => 'none',
      'expose' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Rating:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3762f04b-6ee8-4984-b00b-276747527b39';
  $display->content['new-3762f04b-6ee8-4984-b00b-276747527b39'] = $pane;
  $display->panels['middle'][2] = 'new-3762f04b-6ee8-4984-b00b-276747527b39';
  $pane = new stdClass();
  $pane->pid = 'new-090fce68-b70e-4a74-96a9-01a1aa1dc188';
  $pane->panel = 'middle';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '090fce68-b70e-4a74-96a9-01a1aa1dc188';
  $display->content['new-090fce68-b70e-4a74-96a9-01a1aa1dc188'] = $pane;
  $display->panels['middle'][3] = 'new-090fce68-b70e-4a74-96a9-01a1aa1dc188';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5ffd86e9-5eda-417a-b444-956538383fc6';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6941b25c-7d01-44c4-916b-c1430afc795a'] = $handler;

  return $export;
}
