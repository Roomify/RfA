<?php

/**
 * @file
 * roomify_properties_list.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_properties_list_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_fcba3fdb-2866-45e3-a6e0-b7ab9edd9a98';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Properties list',
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
              'properties_list' => 'properties_list',
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
  $display->layout = 'bootstrap_properties_list';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'middle-second' => NULL,
      'highlight1' => NULL,
      'highlight2' => NULL,
      'highlight3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f740cd3d-0a06-4943-b850-1e3cb6ef0ba3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_fcba3fdb-2866-45e3-a6e0-b7ab9edd9a98';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5a97ec64-a311-47ee-90e4-3e09f9913419';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_5';
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
  $pane->uuid = '5a97ec64-a311-47ee-90e4-3e09f9913419';
  $display->content['new-5a97ec64-a311-47ee-90e4-3e09f9913419'] = $pane;
  $display->panels['bottom'][0] = 'new-5a97ec64-a311-47ee-90e4-3e09f9913419';
  $pane = new stdClass();
  $pane->pid = 'new-61b40018-b4c2-4835-8a8a-cb3c6924802a';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Properties are set',
          'php' => 'if (isset($contexts[\'argument_entity_id:node_1\']->data->field_properties_list_properties)) {
  if (empty($contexts[\'argument_entity_id:node_1\']->data->field_properties_list_properties)) {
    return FALSE;
  }
  return TRUE;
}',
        ),
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '61b40018-b4c2-4835-8a8a-cb3c6924802a';
  $display->content['new-61b40018-b4c2-4835-8a8a-cb3c6924802a'] = $pane;
  $display->panels['bottom'][1] = 'new-61b40018-b4c2-4835-8a8a-cb3c6924802a';
  $pane = new stdClass();
  $pane->pid = 'new-f3f8c3aa-613f-42b4-b2ff-f1c43ddff149';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Other Types',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f3f8c3aa-613f-42b4-b2ff-f1c43ddff149';
  $display->content['new-f3f8c3aa-613f-42b4-b2ff-f1c43ddff149'] = $pane;
  $display->panels['bottom'][2] = 'new-f3f8c3aa-613f-42b4-b2ff-f1c43ddff149';
  $pane = new stdClass();
  $pane->pid = 'new-85344fda-1eab-4d87-a7fc-b37f18d7dc7f';
  $pane->panel = 'highlight1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'highlight',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
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
  $pane->uuid = '85344fda-1eab-4d87-a7fc-b37f18d7dc7f';
  $display->content['new-85344fda-1eab-4d87-a7fc-b37f18d7dc7f'] = $pane;
  $display->panels['highlight1'][0] = 'new-85344fda-1eab-4d87-a7fc-b37f18d7dc7f';
  $pane = new stdClass();
  $pane->pid = 'new-9ff236a6-63b7-4214-a779-2586aba6713d';
  $pane->panel = 'highlight1';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image1_cap';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9ff236a6-63b7-4214-a779-2586aba6713d';
  $display->content['new-9ff236a6-63b7-4214-a779-2586aba6713d'] = $pane;
  $display->panels['highlight1'][1] = 'new-9ff236a6-63b7-4214-a779-2586aba6713d';
  $pane = new stdClass();
  $pane->pid = 'new-d1b23207-9fd5-44bb-a5d1-a39f01b041fc';
  $pane->panel = 'highlight2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'highlight',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
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
  $pane->uuid = 'd1b23207-9fd5-44bb-a5d1-a39f01b041fc';
  $display->content['new-d1b23207-9fd5-44bb-a5d1-a39f01b041fc'] = $pane;
  $display->panels['highlight2'][0] = 'new-d1b23207-9fd5-44bb-a5d1-a39f01b041fc';
  $pane = new stdClass();
  $pane->pid = 'new-939115c6-6b35-45ad-99ae-8a9ae69f44e8';
  $pane->panel = 'highlight2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image2_cap';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '939115c6-6b35-45ad-99ae-8a9ae69f44e8';
  $display->content['new-939115c6-6b35-45ad-99ae-8a9ae69f44e8'] = $pane;
  $display->panels['highlight2'][1] = 'new-939115c6-6b35-45ad-99ae-8a9ae69f44e8';
  $pane = new stdClass();
  $pane->pid = 'new-221ed7d4-8f97-44d8-a036-fe4297fca724';
  $pane->panel = 'highlight3';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'highlight',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
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
  $pane->uuid = '221ed7d4-8f97-44d8-a036-fe4297fca724';
  $display->content['new-221ed7d4-8f97-44d8-a036-fe4297fca724'] = $pane;
  $display->panels['highlight3'][0] = 'new-221ed7d4-8f97-44d8-a036-fe4297fca724';
  $pane = new stdClass();
  $pane->pid = 'new-3709919f-6dab-485a-ae8e-a66f4d24eb74';
  $pane->panel = 'highlight3';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image3_cap';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3709919f-6dab-485a-ae8e-a66f4d24eb74';
  $display->content['new-3709919f-6dab-485a-ae8e-a66f4d24eb74'] = $pane;
  $display->panels['highlight3'][1] = 'new-3709919f-6dab-485a-ae8e-a66f4d24eb74';
  $pane = new stdClass();
  $pane->pid = 'new-23da1c11-1868-43e5-889b-1d0ec775024e';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23da1c11-1868-43e5-889b-1d0ec775024e';
  $display->content['new-23da1c11-1868-43e5-889b-1d0ec775024e'] = $pane;
  $display->panels['middle'][0] = 'new-23da1c11-1868-43e5-889b-1d0ec775024e';
  $pane = new stdClass();
  $pane->pid = 'new-5ba9bd8f-6eb1-4fe9-95b9-eaa22f6e0481';
  $pane->panel = 'middle-second';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PSgMGV0vhgwKGBG76zNiI6gHpbuUpy7v';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:properties_list:field_pl_area_facet',
        'settings' => array(
          'field_pl_area_facet' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_pl_area_facet_value' => array(
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
    'override_title_text' => 'Area',
    'override_title_heading' => 'h4',
  );
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
  $pane->uuid = '5ba9bd8f-6eb1-4fe9-95b9-eaa22f6e0481';
  $display->content['new-5ba9bd8f-6eb1-4fe9-95b9-eaa22f6e0481'] = $pane;
  $display->panels['middle-second'][0] = 'new-5ba9bd8f-6eb1-4fe9-95b9-eaa22f6e0481';
  $pane = new stdClass();
  $pane->pid = 'new-605a4b7b-d0c0-44ad-b638-1807c0e77620';
  $pane->panel = 'middle-second';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-LZ5CVSwTZdsXhbhn7Z38s9xNZroPD6oC';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:properties_list:field_pl_area_type_filter',
        'settings' => array(
          'field_pl_area_type_filter' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_pl_area_type_filter_value' => array(
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
    'override_title_text' => 'Area Type',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12 col-sm-6',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '605a4b7b-d0c0-44ad-b638-1807c0e77620';
  $display->content['new-605a4b7b-d0c0-44ad-b638-1807c0e77620'] = $pane;
  $display->panels['middle-second'][1] = 'new-605a4b7b-d0c0-44ad-b638-1807c0e77620';
  $pane = new stdClass();
  $pane->pid = 'new-4bcf2e82-dac1-4330-b65d-cfba6b187923';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pl_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'background_image_formatter',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '1600x460',
      'background_image_selector' => 'background-image-formatter',
      'background_image_output_type' => 'inline',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
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
  $pane->uuid = '4bcf2e82-dac1-4330-b65d-cfba6b187923';
  $display->content['new-4bcf2e82-dac1-4330-b65d-cfba6b187923'] = $pane;
  $display->panels['top'][0] = 'new-4bcf2e82-dac1-4330-b65d-cfba6b187923';
  $pane = new stdClass();
  $pane->pid = 'new-a7b68bc1-4e45-403b-a398-ef41d63a8561';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'node:title_field';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7b68bc1-4e45-403b-a398-ef41d63a8561';
  $display->content['new-a7b68bc1-4e45-403b-a398-ef41d63a8561'] = $pane;
  $display->panels['top'][1] = 'new-a7b68bc1-4e45-403b-a398-ef41d63a8561';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_fcba3fdb-2866-45e3-a6e0-b7ab9edd9a98'] = $handler;

  return $export;
}
