<?php

/**
 * @file
 * roomify_offers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_offers_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_b6081843-c3ff-4f6e-b39a-7e52e55ea907';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Offer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Roomify Rate from Node (on Node: Offer Reference [field_offer_reference])',
        'keyword' => 'roomify_rate',
        'name' => 'entity_from_field:field_offer_reference-node-roomify_rate',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'offer' => 'offer',
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
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c13f483e-ada1-4883-b6c7-475afbc85103';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_b6081843-c3ff-4f6e-b39a-7e52e55ea907';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5797f152-7425-4f83-aa11-d8f208589224';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_offer_description';
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
  $pane->uuid = '5797f152-7425-4f83-aa11-d8f208589224';
  $display->content['new-5797f152-7425-4f83-aa11-d8f208589224'] = $pane;
  $display->panels['bottom'][0] = 'new-5797f152-7425-4f83-aa11-d8f208589224';
  $pane = new stdClass();
  $pane->pid = 'new-a077ae2c-0585-4bf8-ab54-e78a4dcc96a9';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'offer-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Participating Properties',
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
  $pane->uuid = 'a077ae2c-0585-4bf8-ab54-e78a4dcc96a9';
  $display->content['new-a077ae2c-0585-4bf8-ab54-e78a4dcc96a9'] = $pane;
  $display->panels['bottom'][1] = 'new-a077ae2c-0585-4bf8-ab54-e78a4dcc96a9';
  $pane = new stdClass();
  $pane->pid = 'new-d311fe52-8cbf-4fa2-9277-52cafbaf3c2e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_offer_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'roomify_1200x720',
      'image_link' => '',
    ),
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
  $pane->uuid = 'd311fe52-8cbf-4fa2-9277-52cafbaf3c2e';
  $display->content['new-d311fe52-8cbf-4fa2-9277-52cafbaf3c2e'] = $pane;
  $display->panels['left'][0] = 'new-d311fe52-8cbf-4fa2-9277-52cafbaf3c2e';
  $pane = new stdClass();
  $pane->pid = 'new-ae5d12d3-dc57-4ab1-a662-ee5bbf66f133';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_rate:offer_start_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'relationship_entity_from_field:field_offer_reference-node-roomify_rate_1',
    'override_title' => 1,
    'override_title_text' => 'Offer available from',
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
  $pane->uuid = 'ae5d12d3-dc57-4ab1-a662-ee5bbf66f133';
  $display->content['new-ae5d12d3-dc57-4ab1-a662-ee5bbf66f133'] = $pane;
  $display->panels['right'][0] = 'new-ae5d12d3-dc57-4ab1-a662-ee5bbf66f133';
  $pane = new stdClass();
  $pane->pid = 'new-84792e7b-5f77-4bec-a9b2-c52d4e258ed7';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_rate:offer_end_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'relationship_entity_from_field:field_offer_reference-node-roomify_rate_1',
    'override_title' => 1,
    'override_title_text' => 'to',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '84792e7b-5f77-4bec-a9b2-c52d4e258ed7';
  $display->content['new-84792e7b-5f77-4bec-a9b2-c52d4e258ed7'] = $pane;
  $display->panels['right'][1] = 'new-84792e7b-5f77-4bec-a9b2-c52d4e258ed7';
  $pane = new stdClass();
  $pane->pid = 'new-61b079e7-7e72-49e1-b876-7902b0eadc48';
  $pane->panel = 'top';
  $pane->type = 'manage_offer_link';
  $pane->subtype = 'manage_offer_link';
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
  $pane->uuid = '61b079e7-7e72-49e1-b876-7902b0eadc48';
  $display->content['new-61b079e7-7e72-49e1-b876-7902b0eadc48'] = $pane;
  $display->panels['top'][0] = 'new-61b079e7-7e72-49e1-b876-7902b0eadc48';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d311fe52-8cbf-4fa2-9277-52cafbaf3c2e';
  $handler->conf['display'] = $display;

  $export['node_view__panel_context_b6081843-c3ff-4f6e-b39a-7e52e55ea907'] = $handler;

  return $export;
}
