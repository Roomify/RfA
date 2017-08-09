<?php

/**
 * @file
 * roomify_base_theme.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_base_theme_default_page_manager_handlers() {
  $export = array();

  /* BLOG NODE PANEL */
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Blog post',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog_post',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
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
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = 'bdfbe48f-f065-4ea6-9330-0aca5c08a60f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__blog_post';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-83400982-c5f4-42cb-88f2-0c8858c4c997';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-home"></span> where to stay',
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
  $pane->uuid = '83400982-c5f4-42cb-88f2-0c8858c4c997';
  $display->content['new-83400982-c5f4-42cb-88f2-0c8858c4c997'] = $pane;
  $display->panels['bottom'][0] = 'new-83400982-c5f4-42cb-88f2-0c8858c4c997';
  $pane = new stdClass();
  $pane->pid = 'new-38f2d5a2-290e-4eef-be2c-2b4537e7ee07';
  $pane->panel = 'left';
  $pane->type = 'node_author';
  $pane->subtype = 'node_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Written by ',
    'override_title_heading' => 'span',
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
  $pane->uuid = '38f2d5a2-290e-4eef-be2c-2b4537e7ee07';
  $display->content['new-38f2d5a2-290e-4eef-be2c-2b4537e7ee07'] = $pane;
  $display->panels['left'][0] = 'new-38f2d5a2-290e-4eef-be2c-2b4537e7ee07';
  $pane = new stdClass();
  $pane->pid = 'new-7489de43-1ae2-4ddd-95ab-6125f2ad2818';
  $pane->panel = 'left';
  $pane->type = 'node_created';
  $pane->subtype = 'node_created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'search_api_facetapi_DAY',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => ' | ',
    'override_title_heading' => 'span',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7489de43-1ae2-4ddd-95ab-6125f2ad2818';
  $display->content['new-7489de43-1ae2-4ddd-95ab-6125f2ad2818'] = $pane;
  $display->panels['left'][1] = 'new-7489de43-1ae2-4ddd-95ab-6125f2ad2818';
  $pane = new stdClass();
  $pane->pid = 'new-78626eed-d17a-4369-8cfb-1c35275e5880';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_area';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'i18n_taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-map-marker"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-icon',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '78626eed-d17a-4369-8cfb-1c35275e5880';
  $display->content['new-78626eed-d17a-4369-8cfb-1c35275e5880'] = $pane;
  $display->panels['left'][2] = 'new-78626eed-d17a-4369-8cfb-1c35275e5880';
  $pane = new stdClass();
  $pane->pid = 'new-710c987b-525c-4ca8-b708-195fa836f6f8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_blog_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-pushpin"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-icon',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '710c987b-525c-4ca8-b708-195fa836f6f8';
  $display->content['new-710c987b-525c-4ca8-b708-195fa836f6f8'] = $pane;
  $display->panels['left'][3] = 'new-710c987b-525c-4ca8-b708-195fa836f6f8';
  $pane = new stdClass();
  $pane->pid = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'roomify_blog_image',
      'image_link' => '',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '616ba109-af3e-4b9d-b240-c52afc39d04f';
  $display->content['new-616ba109-af3e-4b9d-b240-c52afc39d04f'] = $pane;
  $display->panels['left'][4] = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
  $pane = new stdClass();
  $pane->pid = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '76512c7e-4af9-4fde-a085-5210d11581dc';
  $display->content['new-76512c7e-4af9-4fde-a085-5210d11581dc'] = $pane;
  $display->panels['left'][5] = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
  $pane = new stdClass();
  $pane->pid = 'new-c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-tags"></span>',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-icon',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $display->content['new-c3a20eab-f7ad-4f85-b999-b9ae5e761242'] = $pane;
  $display->panels['left'][6] = 'new-c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $pane = new stdClass();
  $pane->pid = 'new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

  if (in_array(\'blog\', $addtoany_settings)) {
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $display->content['new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98'] = $pane;
  $display->panels['left'][7] = 'new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $pane = new stdClass();
  $pane->pid = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_4';
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
  $pane->uuid = '7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $display->content['new-7ce9eb59-d184-4caf-96df-52dd072a3c8a'] = $pane;
  $display->panels['right'][0] = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $pane = new stdClass();
  $pane->pid = 'new-38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-new-window"></span>posts about %node:field-blog-area',
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
  $pane->uuid = '38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $display->content['new-38da774c-eb67-42a1-a48d-8f88b16ae6ad'] = $pane;
  $display->panels['right'][1] = 'new-38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $pane = new stdClass();
  $pane->pid = 'new-3b768030-c844-4cf2-ba53-11c1483c8d2e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'tagclouds-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3b768030-c844-4cf2-ba53-11c1483c8d2e';
  $display->content['new-3b768030-c844-4cf2-ba53-11c1483c8d2e'] = $pane;
  $display->panels['right'][2] = 'new-3b768030-c844-4cf2-ba53-11c1483c8d2e';
  $pane = new stdClass();
  $pane->pid = 'new-a86aab12-9eb9-4800-b2a1-57c0bf02f1b2';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'tagclouds-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a86aab12-9eb9-4800-b2a1-57c0bf02f1b2';
  $display->content['new-a86aab12-9eb9-4800-b2a1-57c0bf02f1b2'] = $pane;
  $display->panels['right'][3] = 'new-a86aab12-9eb9-4800-b2a1-57c0bf02f1b2';
  $pane = new stdClass();
  $pane->pid = 'new-03b08ead-decc-40f3-adbb-e28585bac8a9';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
  if (isset($social_feeds_pages[\'blog_node\']) && $social_feeds_pages[\'blog_node\'] === \'blog_node\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '03b08ead-decc-40f3-adbb-e28585bac8a9';
  $display->content['new-03b08ead-decc-40f3-adbb-e28585bac8a9'] = $pane;
  $display->panels['right'][4] = 'new-03b08ead-decc-40f3-adbb-e28585bac8a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post'] = $handler;

  /* ACTIVITY NODE PANEL */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__activity';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Activity',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'activity' => 'activity',
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
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = 'b4a8fd8a-aced-42ab-b4a8-2f0f0f6e43b3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__activity';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ccf30f69-232a-4fb3-b9cb-4f4206bdfdd2';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_2';
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
  $pane->uuid = 'ccf30f69-232a-4fb3-b9cb-4f4206bdfdd2';
  $display->content['new-ccf30f69-232a-4fb3-b9cb-4f4206bdfdd2'] = $pane;
  $display->panels['left'][0] = 'new-ccf30f69-232a-4fb3-b9cb-4f4206bdfdd2';
  $pane = new stdClass();
  $pane->pid = 'new-5cccf582-3af1-460c-aad1-0fb2ef982df7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_activity_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5cccf582-3af1-460c-aad1-0fb2ef982df7';
  $display->content['new-5cccf582-3af1-460c-aad1-0fb2ef982df7'] = $pane;
  $display->panels['left'][1] = 'new-5cccf582-3af1-460c-aad1-0fb2ef982df7';
  $pane = new stdClass();
  $pane->pid = 'new-891f497f-32cb-4562-9af4-21766cbe3caa';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '891f497f-32cb-4562-9af4-21766cbe3caa';
  $display->content['new-891f497f-32cb-4562-9af4-21766cbe3caa'] = $pane;
  $display->panels['left'][2] = 'new-891f497f-32cb-4562-9af4-21766cbe3caa';
  $pane = new stdClass();
  $pane->pid = 'new-fe88fa22-b877-49e3-b5f6-582fda8d641d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

  if (in_array(\'activity\', $addtoany_settings)) {
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fe88fa22-b877-49e3-b5f6-582fda8d641d';
  $display->content['new-fe88fa22-b877-49e3-b5f6-582fda8d641d'] = $pane;
  $display->panels['left'][3] = 'new-fe88fa22-b877-49e3-b5f6-582fda8d641d';
  $pane = new stdClass();
  $pane->pid = 'new-af836c84-4d9e-4455-891d-471d36fbe0fe';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'location-panel_pane_2';
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
  $pane->uuid = 'af836c84-4d9e-4455-891d-471d36fbe0fe';
  $display->content['new-af836c84-4d9e-4455-891d-471d36fbe0fe'] = $pane;
  $display->panels['right'][0] = 'new-af836c84-4d9e-4455-891d-471d36fbe0fe';
  $pane = new stdClass();
  $pane->pid = 'new-91c7484c-a47e-4b58-a61b-50b6bf625295';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_3';
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
  $pane->uuid = '91c7484c-a47e-4b58-a61b-50b6bf625295';
  $display->content['new-91c7484c-a47e-4b58-a61b-50b6bf625295'] = $pane;
  $display->panels['right'][1] = 'new-91c7484c-a47e-4b58-a61b-50b6bf625295';
  $pane = new stdClass();
  $pane->pid = 'new-1f41334a-e83d-420f-9cbe-7d379252a555';
  $pane->panel = 'right';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
  if (isset($social_feeds_pages[\'things_to_do_node\']) && $social_feeds_pages[\'things_to_do_node\'] === \'things_to_do_node\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1f41334a-e83d-420f-9cbe-7d379252a555';
  $display->content['new-1f41334a-e83d-420f-9cbe-7d379252a555'] = $pane;
  $display->panels['right'][2] = 'new-1f41334a-e83d-420f-9cbe-7d379252a555';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__activity'] = $handler;

  /* LOCATION NODE PANEL */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__location';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Location',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = '9ef84618-1857-465c-a31a-7230c09fde85';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__location';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'location-panel_pane_2';
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
  $pane->uuid = '9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed';
  $display->content['new-9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed'] = $pane;
  $display->panels['middle'][0] = 'new-9ce89e1a-df9d-42ac-8e0c-a7d45f2b34ed';
  $pane = new stdClass();
  $pane->pid = 'new-c268cac4-8e93-40ec-8cb4-66c8275cab00';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
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
  $pane->uuid = 'c268cac4-8e93-40ec-8cb4-66c8275cab00';
  $display->content['new-c268cac4-8e93-40ec-8cb4-66c8275cab00'] = $pane;
  $display->panels['middle'][1] = 'new-c268cac4-8e93-40ec-8cb4-66c8275cab00';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__location'] = $handler;

  /* LANDING PAGE NODE PANEL */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_c54ec31f-2210-4189-9353-47061a92fed7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Landing Page',
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
              'landing_page' => 'landing_page',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '83cb72e9-32ba-4361-b84b-58394eedb7fc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8ff56e8b-6fb8-4ef4-b51f-17eaf09470ca';
  $pane->panel = 'middle';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '8ff56e8b-6fb8-4ef4-b51f-17eaf09470ca';
  $display->content['new-8ff56e8b-6fb8-4ef4-b51f-17eaf09470ca'] = $pane;
  $display->panels['middle'][0] = 'new-8ff56e8b-6fb8-4ef4-b51f-17eaf09470ca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-8ff56e8b-6fb8-4ef4-b51f-17eaf09470ca';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c54ec31f-2210-4189-9353-47061a92fed7'] = $handler;

  /* PAGE NODE PANEL */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_5b3a7d14-8128-47c7-9f97-29a7a4585528';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Page',
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
              'page' => 'page',
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
  $display->uuid = 'ad43e632-7bb5-4c1d-b857-67e94df29ce6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_5b3a7d14-8128-47c7-9f97-29a7a4585528';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8916fdb1-6719-42b0-9f9e-9875b789f07a';
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
  $pane->uuid = '8916fdb1-6719-42b0-9f9e-9875b789f07a';
  $display->content['new-8916fdb1-6719-42b0-9f9e-9875b789f07a'] = $pane;
  $display->panels['middle'][0] = 'new-8916fdb1-6719-42b0-9f9e-9875b789f07a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8916fdb1-6719-42b0-9f9e-9875b789f07a';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_5b3a7d14-8128-47c7-9f97-29a7a4585528'] = $handler;

  /* PAGE BLOG VARIANT */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panel_context_ef468927-73d8-4605-8bd7-497e37a6e952';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(),
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
  $display->title = 'Blog';
  $display->uuid = '63f37ac1-85a0-447a-929f-f94334989411';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_blog__panel_context_ef468927-73d8-4605-8bd7-497e37a6e952';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ee5bbc06-fc71-40e7-ba0c-1f5215ef211b';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Link to add/blog',
    'title' => '',
    'body' => '<p><a class="roomify-add-blog-post-link roomify-add-button" href="/node/add/blog">Add Blogpost</a></p>',
    'format' => 'rich_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ee5bbc06-fc71-40e7-ba0c-1f5215ef211b';
  $display->content['new-ee5bbc06-fc71-40e7-ba0c-1f5215ef211b'] = $pane;
  $display->panels['middle'][0] = 'new-ee5bbc06-fc71-40e7-ba0c-1f5215ef211b';
  $pane = new stdClass();
  $pane->pid = 'new-858e8fa0-0604-44d3-8d7d-7e98843528b9';
  $pane->panel = 'middle';
  $pane->type = 'roomify_blog_area_filter';
  $pane->subtype = 'roomify_blog_area_filter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-filter',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '858e8fa0-0604-44d3-8d7d-7e98843528b9';
  $display->content['new-858e8fa0-0604-44d3-8d7d-7e98843528b9'] = $pane;
  $display->panels['middle'][1] = 'new-858e8fa0-0604-44d3-8d7d-7e98843528b9';
  $pane = new stdClass();
  $pane->pid = 'new-9e2853e1-2507-436b-8850-0e4b9b572a0f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-blog-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'roomify-blog-filter',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9e2853e1-2507-436b-8850-0e4b9b572a0f';
  $display->content['new-9e2853e1-2507-436b-8850-0e4b9b572a0f'] = $pane;
  $display->panels['middle'][2] = 'new-9e2853e1-2507-436b-8850-0e4b9b572a0f';
  $pane = new stdClass();
  $pane->pid = 'new-b5f481a2-4a92-4979-8b96-0df1802822f0';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b5f481a2-4a92-4979-8b96-0df1802822f0';
  $display->content['new-b5f481a2-4a92-4979-8b96-0df1802822f0'] = $pane;
  $display->panels['middle'][3] = 'new-b5f481a2-4a92-4979-8b96-0df1802822f0';
  $pane = new stdClass();
  $pane->pid = 'new-db7de4cf-87c5-4322-ab65-4c1878d0449e';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_2';
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
  $pane->uuid = 'db7de4cf-87c5-4322-ab65-4c1878d0449e';
  $display->content['new-db7de4cf-87c5-4322-ab65-4c1878d0449e'] = $pane;
  $display->panels['top'][0] = 'new-db7de4cf-87c5-4322-ab65-4c1878d0449e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-db7de4cf-87c5-4322-ab65-4c1878d0449e';
  $handler->conf['display'] = $display;
  $export['page_blog__panel_context_ef468927-73d8-4605-8bd7-497e37a6e952'] = $handler;

  /* PAGE LOCATION PANEL */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_location__panel';
  $handler->task = 'page';
  $handler->subtask = 'location';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(),
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
  $display->title = 'Location';
  $display->uuid = 'b6088c17-489a-4ca1-8a7a-fddef04798b9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_location__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c473a8b1-beff-431c-8225-90c0d6eacb26';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create location content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Location',
    'title' => '',
    'body' => '<p><a class="roomify-add-button roomify-add-location" href="/node/add/location">Add Location</a></p>',
    'format' => 'rich_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c473a8b1-beff-431c-8225-90c0d6eacb26';
  $display->content['new-c473a8b1-beff-431c-8225-90c0d6eacb26'] = $pane;
  $display->panels['middle'][0] = 'new-c473a8b1-beff-431c-8225-90c0d6eacb26';
  $pane = new stdClass();
  $pane->pid = 'new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'location-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $display->content['new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec'] = $pane;
  $display->panels['middle'][1] = 'new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81edf8e1-a7b7-4683-a3d6-2615e9f509ec';
  $handler->conf['display'] = $display;
  $export['page_location__panel'] = $handler;

  /* THINGS TO DO PAGE PANEL */
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activity_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'activity_page';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Things to do';
  $display->uuid = 'b75199b7-3956-47ec-9c25-51badc55ff9d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_activity_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4f1499f2-f855-4fcc-9d1c-d126533f7de2';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create activity content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Activity',
    'title' => '',
    'body' => '<p><a class="roomify-add-activity-link roomify-add-button" href="/node/add/activity">Add Activity</a></p>',
    'format' => 'rich_text',
    'substitute' => TRUE,
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
  $pane->uuid = '4f1499f2-f855-4fcc-9d1c-d126533f7de2';
  $display->content['new-4f1499f2-f855-4fcc-9d1c-d126533f7de2'] = $pane;
  $display->panels['middle'][0] = 'new-4f1499f2-f855-4fcc-9d1c-d126533f7de2';
  $pane = new stdClass();
  $pane->pid = 'new-c1f50a5a-ecf1-4706-a68a-8fa0eec27d2e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_5';
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
  $pane->uuid = 'c1f50a5a-ecf1-4706-a68a-8fa0eec27d2e';
  $display->content['new-c1f50a5a-ecf1-4706-a68a-8fa0eec27d2e'] = $pane;
  $display->panels['middle'][1] = 'new-c1f50a5a-ecf1-4706-a68a-8fa0eec27d2e';
  $pane = new stdClass();
  $pane->pid = 'new-8076745d-8cd8-47fa-a668-49eb498744f5';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_6';
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
  $pane->uuid = '8076745d-8cd8-47fa-a668-49eb498744f5';
  $display->content['new-8076745d-8cd8-47fa-a668-49eb498744f5'] = $pane;
  $display->panels['top'][0] = 'new-8076745d-8cd8-47fa-a668-49eb498744f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['page_activity_page_panel_context'] = $handler;

  /* LOCANDA PAGE */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_listings__locanda';
  $handler->task = 'page';
  $handler->subtask = 'listings';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Locanda',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-locanda-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'locanda',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Is Locanda',
            'php' => 'if (variable_get(\'roomify_accommodation_example_content\', \'\') == \'b_and_b\')
        return TRUE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_property_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'slideshow' => NULL,
      'pre-content-right' => NULL,
      'content' => NULL,
      'headline' => NULL,
      'highlight' => NULL,
      'booking' => NULL,
      'user-details' => NULL,
      'property-description' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'highlight-intro' => NULL,
      'highlight1' => NULL,
      'highlight2' => NULL,
      'highlight3' => NULL,
      'property-types' => NULL,
    ),
    'property-description' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%type_id:name';
  $display->uuid = 'bd3e6d7f-df61-40a6-87a6-ad2477b6fa1c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_listings__locanda';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3';
  $pane->panel = 'headline';
  $pane->type = 'roomify_manage_property';
  $pane->subtype = 'roomify_manage_property';
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
  $pane->uuid = '6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3';
  $display->content['new-6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3'] = $pane;
  $display->panels['headline'][0] = 'new-6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3';
  $pane = new stdClass();
  $pane->pid = 'new-a5ceb4b1-c1f3-4219-bedf-e6264403a347';
  $pane->panel = 'headline';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

  if (in_array(\'property\', $addtoany_settings)) {
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
  $pane->uuid = 'a5ceb4b1-c1f3-4219-bedf-e6264403a347';
  $display->content['new-a5ceb4b1-c1f3-4219-bedf-e6264403a347'] = $pane;
  $display->panels['headline'][1] = 'new-a5ceb4b1-c1f3-4219-bedf-e6264403a347';
  $pane = new stdClass();
  $pane->pid = 'new-e9b19cfb-6c27-431e-9b37-d1b12b7839e0';
  $pane->panel = 'headline';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_short_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e9b19cfb-6c27-431e-9b37-d1b12b7839e0';
  $display->content['new-e9b19cfb-6c27-431e-9b37-d1b12b7839e0'] = $pane;
  $display->panels['headline'][2] = 'new-e9b19cfb-6c27-431e-9b37-d1b12b7839e0';
  $pane = new stdClass();
  $pane->pid = 'new-c6b3382a-b170-4c1a-adb2-78fa96c75e03';
  $pane->panel = 'highlight-intro';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c6b3382a-b170-4c1a-adb2-78fa96c75e03';
  $display->content['new-c6b3382a-b170-4c1a-adb2-78fa96c75e03'] = $pane;
  $display->panels['highlight-intro'][0] = 'new-c6b3382a-b170-4c1a-adb2-78fa96c75e03';
  $pane = new stdClass();
  $pane->pid = 'new-5eed9064-b4ba-4fa8-9bae-9260893e7cea';
  $pane->panel = 'highlight-intro';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '5eed9064-b4ba-4fa8-9bae-9260893e7cea';
  $display->content['new-5eed9064-b4ba-4fa8-9bae-9260893e7cea'] = $pane;
  $display->panels['highlight-intro'][1] = 'new-5eed9064-b4ba-4fa8-9bae-9260893e7cea';
  $pane = new stdClass();
  $pane->pid = 'new-457cb66f-becd-4b21-9168-4b5dcf95f8ba';
  $pane->panel = 'highlight1';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '457cb66f-becd-4b21-9168-4b5dcf95f8ba';
  $display->content['new-457cb66f-becd-4b21-9168-4b5dcf95f8ba'] = $pane;
  $display->panels['highlight1'][0] = 'new-457cb66f-becd-4b21-9168-4b5dcf95f8ba';
  $pane = new stdClass();
  $pane->pid = 'new-d980d7ea-e82d-4656-8ebb-8f009888ac6f';
  $pane->panel = 'highlight1';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image1_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = 'd980d7ea-e82d-4656-8ebb-8f009888ac6f';
  $display->content['new-d980d7ea-e82d-4656-8ebb-8f009888ac6f'] = $pane;
  $display->panels['highlight1'][1] = 'new-d980d7ea-e82d-4656-8ebb-8f009888ac6f';
  $pane = new stdClass();
  $pane->pid = 'new-15c50392-1d96-4dee-8fb6-06b08c30a2f5';
  $pane->panel = 'highlight2';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15c50392-1d96-4dee-8fb6-06b08c30a2f5';
  $display->content['new-15c50392-1d96-4dee-8fb6-06b08c30a2f5'] = $pane;
  $display->panels['highlight2'][0] = 'new-15c50392-1d96-4dee-8fb6-06b08c30a2f5';
  $pane = new stdClass();
  $pane->pid = 'new-19ac71b0-64c5-4c31-b9bd-cee0f0153c30';
  $pane->panel = 'highlight2';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image2_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '19ac71b0-64c5-4c31-b9bd-cee0f0153c30';
  $display->content['new-19ac71b0-64c5-4c31-b9bd-cee0f0153c30'] = $pane;
  $display->panels['highlight2'][1] = 'new-19ac71b0-64c5-4c31-b9bd-cee0f0153c30';
  $pane = new stdClass();
  $pane->pid = 'new-a73b7107-7bd9-4d4f-b223-6fa9148e8e16';
  $pane->panel = 'highlight3';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a73b7107-7bd9-4d4f-b223-6fa9148e8e16';
  $display->content['new-a73b7107-7bd9-4d4f-b223-6fa9148e8e16'] = $pane;
  $display->panels['highlight3'][0] = 'new-a73b7107-7bd9-4d4f-b223-6fa9148e8e16';
  $pane = new stdClass();
  $pane->pid = 'new-2ec102e0-f5ad-42eb-aa0c-17fca5524c5d';
  $pane->panel = 'highlight3';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image3_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '2ec102e0-f5ad-42eb-aa0c-17fca5524c5d';
  $display->content['new-2ec102e0-f5ad-42eb-aa0c-17fca5524c5d'] = $pane;
  $display->panels['highlight3'][1] = 'new-2ec102e0-f5ad-42eb-aa0c-17fca5524c5d';
  $pane = new stdClass();
  $pane->pid = 'new-83ffa68e-569e-4bf2-8e96-4e377ba26c19';
  $pane->panel = 'property-description';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Overview',
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
  $pane->uuid = '83ffa68e-569e-4bf2-8e96-4e377ba26c19';
  $display->content['new-83ffa68e-569e-4bf2-8e96-4e377ba26c19'] = $pane;
  $display->panels['property-description'][0] = 'new-83ffa68e-569e-4bf2-8e96-4e377ba26c19';
  $pane = new stdClass();
  $pane->pid = 'new-a17a8f27-81ed-4d44-8ba9-ea14e0184bb6';
  $pane->panel = 'property-description';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_policies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Policies',
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
  $pane->uuid = 'a17a8f27-81ed-4d44-8ba9-ea14e0184bb6';
  $display->content['new-a17a8f27-81ed-4d44-8ba9-ea14e0184bb6'] = $pane;
  $display->panels['property-description'][1] = 'new-a17a8f27-81ed-4d44-8ba9-ea14e0184bb6';
  $pane = new stdClass();
  $pane->pid = 'new-f6a02da2-e289-41b4-bf02-e95d69c3f74b';
  $pane->panel = 'property-description';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'i18n_taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
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
  $pane->uuid = 'f6a02da2-e289-41b4-bf02-e95d69c3f74b';
  $display->content['new-f6a02da2-e289-41b4-bf02-e95d69c3f74b'] = $pane;
  $display->panels['property-description'][2] = 'new-f6a02da2-e289-41b4-bf02-e95d69c3f74b';
  $pane = new stdClass();
  $pane->pid = 'new-90f88a03-550b-469e-a83f-2ddab03d8ac4';
  $pane->panel = 'property-description';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Location',
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
  $pane->uuid = '90f88a03-550b-469e-a83f-2ddab03d8ac4';
  $display->content['new-90f88a03-550b-469e-a83f-2ddab03d8ac4'] = $pane;
  $display->panels['property-description'][3] = 'new-90f88a03-550b-469e-a83f-2ddab03d8ac4';
  $pane = new stdClass();
  $pane->pid = 'new-2ce187d9-ec1b-4cf5-a08e-f7e633f95258';
  $pane->panel = 'property-types';
  $pane->type = 'views_panes';
  $pane->subtype = 'property-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ce187d9-ec1b-4cf5-a08e-f7e633f95258';
  $display->content['new-2ce187d9-ec1b-4cf5-a08e-f7e633f95258'] = $pane;
  $display->panels['property-types'][0] = 'new-2ce187d9-ec1b-4cf5-a08e-f7e633f95258';
  $pane = new stdClass();
  $pane->pid = 'new-c845ec1c-a8f2-451d-b94f-8900de485e84';
  $pane->panel = 'slideshow';
  $pane->type = 'views_panes';
  $pane->subtype = 'property-panel_pane_1';
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
  $pane->uuid = 'c845ec1c-a8f2-451d-b94f-8900de485e84';
  $display->content['new-c845ec1c-a8f2-451d-b94f-8900de485e84'] = $pane;
  $display->panels['slideshow'][0] = 'new-c845ec1c-a8f2-451d-b94f-8900de485e84';
  $pane = new stdClass();
  $pane->pid = 'new-62c3f7f9-ca8a-4f05-a610-6d674a20e75f';
  $pane->panel = 'slideshow';
  $pane->type = 'locanda_availability_search';
  $pane->subtype = 'locanda_availability_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
    'override_title' => 0,
    'override_title_text' => 'Check Availability',
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
  $pane->uuid = '62c3f7f9-ca8a-4f05-a610-6d674a20e75f';
  $display->content['new-62c3f7f9-ca8a-4f05-a610-6d674a20e75f'] = $pane;
  $display->panels['slideshow'][1] = 'new-62c3f7f9-ca8a-4f05-a610-6d674a20e75f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_listings__locanda'] = $handler;

  /* PAGE LISTING */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_property__panel';
  $handler->task = 'page';
  $handler->subtask = 'listings';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Listing',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_property_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'slideshow' => NULL,
      'pre-content-right' => NULL,
      'content' => NULL,
      'headline' => NULL,
      'highlight' => NULL,
      'booking' => NULL,
      'user-details' => NULL,
      'property-description' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'highlight-intro' => NULL,
      'highlight1' => NULL,
      'highlight2' => NULL,
      'highlight3' => NULL,
      'property-types' => NULL,
    ),
    'property-description' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%type_id:name';
  $display->uuid = 'bd3e6d7f-df61-40a6-87a6-ad2477b6fa1c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_property__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b3a22cc0-1d2b-41a2-8e27-eb337d9e3b71';
  $pane->panel = 'booking';
  $pane->type = 'block';
  $pane->subtype = 'roomify_listing_availability_search_block-roomify_listing_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'casa_property' => 'casa_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3a22cc0-1d2b-41a2-8e27-eb337d9e3b71';
  $display->content['new-b3a22cc0-1d2b-41a2-8e27-eb337d9e3b71'] = $pane;
  $display->panels['booking'][0] = 'new-b3a22cc0-1d2b-41a2-8e27-eb337d9e3b71';
  $pane = new stdClass();
  $pane->pid = 'new-62c3f7f9-ca8a-4f05-a610-6d674a20e75f';
  $pane->panel = 'booking';
  $pane->type = 'locanda_availability_search';
  $pane->subtype = 'locanda_availability_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
    'override_title' => 0,
    'override_title_text' => 'Check Availability',
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
  $pane->uuid = '62c3f7f9-ca8a-4f05-a610-6d674a20e75f';
  $display->content['new-62c3f7f9-ca8a-4f05-a610-6d674a20e75f'] = $pane;
  $display->panels['booking'][1] = 'new-62c3f7f9-ca8a-4f05-a610-6d674a20e75f';
  $pane = new stdClass();
  $pane->pid = 'new-a5ceb4b1-c1f3-4219-bedf-e6264403a347';
  $pane->panel = 'headline';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$addtoany_settings = array_filter(variable_get(\'roomify_addtoany_settings\', array(\'property\' => \'property\', \'type\' => \'type\', \'blog\' => \'blog\', \'activity\' => \'activity\')));

  if (in_array(\'property\', $addtoany_settings)) {
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a5ceb4b1-c1f3-4219-bedf-e6264403a347';
  $display->content['new-a5ceb4b1-c1f3-4219-bedf-e6264403a347'] = $pane;
  $display->panels['headline'][0] = 'new-a5ceb4b1-c1f3-4219-bedf-e6264403a347';
  $pane = new stdClass();
  $pane->pid = 'new-e9b19cfb-6c27-431e-9b37-d1b12b7839e0';
  $pane->panel = 'headline';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_short_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = 'e9b19cfb-6c27-431e-9b37-d1b12b7839e0';
  $display->content['new-e9b19cfb-6c27-431e-9b37-d1b12b7839e0'] = $pane;
  $display->panels['headline'][1] = 'new-e9b19cfb-6c27-431e-9b37-d1b12b7839e0';
  $pane = new stdClass();
  $pane->pid = 'new-c6b3382a-b170-4c1a-adb2-78fa96c75e03';
  $pane->panel = 'highlight-intro';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c6b3382a-b170-4c1a-adb2-78fa96c75e03';
  $display->content['new-c6b3382a-b170-4c1a-adb2-78fa96c75e03'] = $pane;
  $display->panels['highlight-intro'][0] = 'new-c6b3382a-b170-4c1a-adb2-78fa96c75e03';
  $pane = new stdClass();
  $pane->pid = 'new-5eed9064-b4ba-4fa8-9bae-9260893e7cea';
  $pane->panel = 'highlight-intro';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_intro';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '5eed9064-b4ba-4fa8-9bae-9260893e7cea';
  $display->content['new-5eed9064-b4ba-4fa8-9bae-9260893e7cea'] = $pane;
  $display->panels['highlight-intro'][1] = 'new-5eed9064-b4ba-4fa8-9bae-9260893e7cea';
  $pane = new stdClass();
  $pane->pid = 'new-457cb66f-becd-4b21-9168-4b5dcf95f8ba';
  $pane->panel = 'highlight1';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '457cb66f-becd-4b21-9168-4b5dcf95f8ba';
  $display->content['new-457cb66f-becd-4b21-9168-4b5dcf95f8ba'] = $pane;
  $display->panels['highlight1'][0] = 'new-457cb66f-becd-4b21-9168-4b5dcf95f8ba';
  $pane = new stdClass();
  $pane->pid = 'new-d980d7ea-e82d-4656-8ebb-8f009888ac6f';
  $pane->panel = 'highlight1';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image1_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = 'd980d7ea-e82d-4656-8ebb-8f009888ac6f';
  $display->content['new-d980d7ea-e82d-4656-8ebb-8f009888ac6f'] = $pane;
  $display->panels['highlight1'][1] = 'new-d980d7ea-e82d-4656-8ebb-8f009888ac6f';
  $pane = new stdClass();
  $pane->pid = 'new-15c50392-1d96-4dee-8fb6-06b08c30a2f5';
  $pane->panel = 'highlight2';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15c50392-1d96-4dee-8fb6-06b08c30a2f5';
  $display->content['new-15c50392-1d96-4dee-8fb6-06b08c30a2f5'] = $pane;
  $display->panels['highlight2'][0] = 'new-15c50392-1d96-4dee-8fb6-06b08c30a2f5';
  $pane = new stdClass();
  $pane->pid = 'new-19ac71b0-64c5-4c31-b9bd-cee0f0153c30';
  $pane->panel = 'highlight2';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image2_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '19ac71b0-64c5-4c31-b9bd-cee0f0153c30';
  $display->content['new-19ac71b0-64c5-4c31-b9bd-cee0f0153c30'] = $pane;
  $display->panels['highlight2'][1] = 'new-19ac71b0-64c5-4c31-b9bd-cee0f0153c30';
  $pane = new stdClass();
  $pane->pid = 'new-a73b7107-7bd9-4d4f-b223-6fa9148e8e16';
  $pane->panel = 'highlight3';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a73b7107-7bd9-4d4f-b223-6fa9148e8e16';
  $display->content['new-a73b7107-7bd9-4d4f-b223-6fa9148e8e16'] = $pane;
  $display->panels['highlight3'][0] = 'new-a73b7107-7bd9-4d4f-b223-6fa9148e8e16';
  $pane = new stdClass();
  $pane->pid = 'new-2ec102e0-f5ad-42eb-aa0c-17fca5524c5d';
  $pane->panel = 'highlight3';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_highlight_image3_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '2ec102e0-f5ad-42eb-aa0c-17fca5524c5d';
  $display->content['new-2ec102e0-f5ad-42eb-aa0c-17fca5524c5d'] = $pane;
  $display->panels['highlight3'][1] = 'new-2ec102e0-f5ad-42eb-aa0c-17fca5524c5d';
  $pane = new stdClass();
  $pane->pid = 'new-83ffa68e-569e-4bf2-8e96-4e377ba26c19';
  $pane->panel = 'property-description';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Overview',
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
  $pane->uuid = '83ffa68e-569e-4bf2-8e96-4e377ba26c19';
  $display->content['new-83ffa68e-569e-4bf2-8e96-4e377ba26c19'] = $pane;
  $display->panels['property-description'][0] = 'new-83ffa68e-569e-4bf2-8e96-4e377ba26c19';
  $pane = new stdClass();
  $pane->pid = 'new-a17a8f27-81ed-4d44-8ba9-ea14e0184bb6';
  $pane->panel = 'property-description';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_policies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Policies',
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
  $pane->uuid = 'a17a8f27-81ed-4d44-8ba9-ea14e0184bb6';
  $display->content['new-a17a8f27-81ed-4d44-8ba9-ea14e0184bb6'] = $pane;
  $display->panels['property-description'][1] = 'new-a17a8f27-81ed-4d44-8ba9-ea14e0184bb6';
  $pane = new stdClass();
  $pane->pid = 'new-f6a02da2-e289-41b4-bf02-e95d69c3f74b';
  $pane->panel = 'property-description';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'i18n_taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
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
  $pane->uuid = 'f6a02da2-e289-41b4-bf02-e95d69c3f74b';
  $display->content['new-f6a02da2-e289-41b4-bf02-e95d69c3f74b'] = $pane;
  $display->panels['property-description'][2] = 'new-f6a02da2-e289-41b4-bf02-e95d69c3f74b';
  $pane = new stdClass();
  $pane->pid = 'new-90f88a03-550b-469e-a83f-2ddab03d8ac4';
  $pane->panel = 'property-description';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Location',
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
  $pane->uuid = '90f88a03-550b-469e-a83f-2ddab03d8ac4';
  $display->content['new-90f88a03-550b-469e-a83f-2ddab03d8ac4'] = $pane;
  $display->panels['property-description'][3] = 'new-90f88a03-550b-469e-a83f-2ddab03d8ac4';
  $pane = new stdClass();
  $pane->pid = 'new-52b57d62-41b6-4920-aebe-ac02642c1330';
  $pane->panel = 'property-description';
  $pane->type = 'panels_mini';
  $pane->subtype = 'property_reviews';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Reviews',
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
  $pane->uuid = '52b57d62-41b6-4920-aebe-ac02642c1330';
  $display->content['new-52b57d62-41b6-4920-aebe-ac02642c1330'] = $pane;
  $display->panels['property-description'][4] = 'new-52b57d62-41b6-4920-aebe-ac02642c1330';
  $pane = new stdClass();
  $pane->pid = 'new-2ce187d9-ec1b-4cf5-a08e-f7e633f95258';
  $pane->panel = 'property-types';
  $pane->type = 'views_panes';
  $pane->subtype = 'property-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:roomify_property',
        'settings' => array(
          'type' => array(
            'locanda_property' => 'locanda_property',
          ),
        ),
        'context' => 'argument_entity_id:roomify_property_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ce187d9-ec1b-4cf5-a08e-f7e633f95258';
  $display->content['new-2ce187d9-ec1b-4cf5-a08e-f7e633f95258'] = $pane;
  $display->panels['property-types'][0] = 'new-2ce187d9-ec1b-4cf5-a08e-f7e633f95258';
  $pane = new stdClass();
  $pane->pid = 'new-e8d581e0-de44-4838-ad8f-26032068a3c8';
  $pane->panel = 'slideshow';
  $pane->type = 'token';
  $pane->subtype = 'roomify_property:name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = 'e8d581e0-de44-4838-ad8f-26032068a3c8';
  $display->content['new-e8d581e0-de44-4838-ad8f-26032068a3c8'] = $pane;
  $display->panels['slideshow'][0] = 'new-e8d581e0-de44-4838-ad8f-26032068a3c8';
  $pane = new stdClass();
  $pane->pid = 'new-474ceef6-0572-4655-ba93-ede26b586e31';
  $pane->panel = 'slideshow';
  $pane->type = 'token';
  $pane->subtype = 'roomify_property:flag-favorites-link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:roomify_property_1',
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
  $pane->uuid = '474ceef6-0572-4655-ba93-ede26b586e31';
  $display->content['new-474ceef6-0572-4655-ba93-ede26b586e31'] = $pane;
  $display->panels['slideshow'][1] = 'new-474ceef6-0572-4655-ba93-ede26b586e31';
  $pane = new stdClass();
  $pane->pid = 'new-c845ec1c-a8f2-451d-b94f-8900de485e84';
  $pane->panel = 'slideshow';
  $pane->type = 'views_panes';
  $pane->subtype = 'property-panel_pane_1';
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
  $pane->uuid = 'c845ec1c-a8f2-451d-b94f-8900de485e84';
  $display->content['new-c845ec1c-a8f2-451d-b94f-8900de485e84'] = $pane;
  $display->panels['slideshow'][2] = 'new-c845ec1c-a8f2-451d-b94f-8900de485e84';
  $pane = new stdClass();
  $pane->pid = 'new-6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3';
  $pane->panel = 'slideshow';
  $pane->type = 'roomify_manage_property';
  $pane->subtype = 'roomify_manage_property';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3';
  $display->content['new-6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3'] = $pane;
  $display->panels['slideshow'][3] = 'new-6ad7cd5c-9fd1-43d3-a6a9-b59fbc8c1bf3';
  $pane = new stdClass();
  $pane->pid = 'new-c17e5771-e0cf-4ba8-8b8b-a96e906aaae1';
  $pane->panel = 'user-details';
  $pane->type = 'roomify_user_profile_on_listing';
  $pane->subtype = 'roomify_user_profile_on_listing';
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
  $pane->uuid = 'c17e5771-e0cf-4ba8-8b8b-a96e906aaae1';
  $display->content['new-c17e5771-e0cf-4ba8-8b8b-a96e906aaae1'] = $pane;
  $display->panels['user-details'][0] = 'new-c17e5771-e0cf-4ba8-8b8b-a96e906aaae1';
  $pane = new stdClass();
  $pane->pid = 'new-dfdba799-9012-4942-a2fa-4529bb4e9573';
  $pane->panel = 'user-details';
  $pane->type = 'roomify_owner_social_pages';
  $pane->subtype = 'roomify_owner_social_pages';
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
  $pane->uuid = 'dfdba799-9012-4942-a2fa-4529bb4e9573';
  $display->content['new-dfdba799-9012-4942-a2fa-4529bb4e9573'] = $pane;
  $display->panels['user-details'][1] = 'new-dfdba799-9012-4942-a2fa-4529bb4e9573';
  $pane = new stdClass();
  $pane->pid = 'new-6d02fb97-2a87-45d1-88a9-be9cc3cfda76';
  $pane->panel = 'user-details';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
  if (isset($social_feeds_pages[\'property_page\']) && $social_feeds_pages[\'property_page\'] === \'property_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6d02fb97-2a87-45d1-88a9-be9cc3cfda76';
  $display->content['new-6d02fb97-2a87-45d1-88a9-be9cc3cfda76'] = $pane;
  $display->panels['user-details'][2] = 'new-6d02fb97-2a87-45d1-88a9-be9cc3cfda76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_property__panel'] = $handler;

  /* ROOM TYPE PAGE */
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_type__panel';
  $handler->task = 'page';
  $handler->subtask = 'type';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Roomify Property from Type (on Type: Property [field_st_property_reference])',
        'keyword' => 'roomify_property',
        'name' => 'entity_from_field:field_st_property_reference-bat_type-roomify_property',
        'delta' => 0,
        'context' => 'argument_entity_id:bat_type_1',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_left';
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
  $display->title = '%roomify_property:name : %type_id:name';
  $display->uuid = 'c61020a0-b75b-49d4-be75-e42066dc313a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_type__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7d1622c1-ce7f-4f23-b96d-64911f321048';
  $pane->panel = 'left';
  $pane->type = 'roomify_manage_type';
  $pane->subtype = 'roomify_manage_type';
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
  $pane->uuid = '7d1622c1-ce7f-4f23-b96d-64911f321048';
  $display->content['new-7d1622c1-ce7f-4f23-b96d-64911f321048'] = $pane;
  $display->panels['left'][0] = 'new-7d1622c1-ce7f-4f23-b96d-64911f321048';
  $pane = new stdClass();
  $pane->pid = 'new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $pane->panel = 'left';
  $pane->type = 'roomify_back_to_property_link';
  $pane->subtype = 'roomify_back_to_property_link';
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
  $pane->uuid = '6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $display->content['new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702'] = $pane;
  $display->panels['left'][1] = 'new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $pane = new stdClass();
  $pane->pid = 'new-a3d4189e-6012-4006-9801-8a5e5403c789';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_default_price';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'commerce_price_formatted_amount',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'calculation' => FALSE,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Price per Night:',
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
  $pane->uuid = 'a3d4189e-6012-4006-9801-8a5e5403c789';
  $display->content['new-a3d4189e-6012-4006-9801-8a5e5403c789'] = $pane;
  $display->panels['left'][2] = 'new-a3d4189e-6012-4006-9801-8a5e5403c789';
  $pane = new stdClass();
  $pane->pid = 'new-e0afa24c-b997-4b4c-bf2a-19c129286769';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_max_capacity';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Max Capacity: ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e0afa24c-b997-4b4c-bf2a-19c129286769';
  $display->content['new-e0afa24c-b997-4b4c-bf2a-19c129286769'] = $pane;
  $display->panels['left'][3] = 'new-e0afa24c-b997-4b4c-bf2a-19c129286769';
  $pane = new stdClass();
  $pane->pid = 'new-55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_bedrooms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'list_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Bedrooms:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $display->content['new-55dd48d2-aae7-4ee2-ab23-077f9df94820'] = $pane;
  $display->panels['left'][4] = 'new-55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $pane = new stdClass();
  $pane->pid = 'new-0d5bba15-55cd-4218-ab08-0c950628c87f';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_single_bed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Single Beds: ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0d5bba15-55cd-4218-ab08-0c950628c87f';
  $display->content['new-0d5bba15-55cd-4218-ab08-0c950628c87f'] = $pane;
  $display->panels['left'][5] = 'new-0d5bba15-55cd-4218-ab08-0c950628c87f';
  $pane = new stdClass();
  $pane->pid = 'new-e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_double_bed';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Double Beds: ',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $display->content['new-e0e1a521-9f6a-492a-94cc-d79842502dbb'] = $pane;
  $display->panels['left'][6] = 'new-e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $pane = new stdClass();
  $pane->pid = 'new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_bathrooms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Bathrooms:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $display->content['new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526'] = $pane;
  $display->panels['left'][7] = 'new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $pane = new stdClass();
  $pane->pid = 'new-d4746735-38dd-488b-9953-5399faf72354';
  $pane->panel = 'left';
  $pane->type = 'type_availability_search';
  $pane->subtype = 'type_availability_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Check Availability',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'd4746735-38dd-488b-9953-5399faf72354';
  $display->content['new-d4746735-38dd-488b-9953-5399faf72354'] = $pane;
  $display->panels['left'][8] = 'new-d4746735-38dd-488b-9953-5399faf72354';
  $pane = new stdClass();
  $pane->pid = 'new-c4980ee4-f216-4b91-9410-de4f404624e8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'i18n_taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'c4980ee4-f216-4b91-9410-de4f404624e8';
  $display->content['new-c4980ee4-f216-4b91-9410-de4f404624e8'] = $pane;
  $display->panels['left'][9] = 'new-c4980ee4-f216-4b91-9410-de4f404624e8';
  $pane = new stdClass();
  $pane->pid = 'new-20486aa9-cd29-447a-94cb-21fca103331d';
  $pane->panel = 'left';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
  if (isset($social_feeds_pages[\'type_page\']) && $social_feeds_pages[\'type_page\'] === \'type_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '20486aa9-cd29-447a-94cb-21fca103331d';
  $display->content['new-20486aa9-cd29-447a-94cb-21fca103331d'] = $pane;
  $display->panels['left'][10] = 'new-20486aa9-cd29-447a-94cb-21fca103331d';
  $pane = new stdClass();
  $pane->pid = 'new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'types-panel_pane_1';
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
  $pane->uuid = 'bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $display->content['new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34'] = $pane;
  $display->panels['right'][0] = 'new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $pane = new stdClass();
  $pane->pid = 'new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'bat_type:field_st_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:bat_type_1',
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
  $pane->uuid = 'a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $display->content['new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206'] = $pane;
  $display->panels['right'][1] = 'new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_type__panel'] = $handler;

  /* PAGE SEARCH */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_availability_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'availability_search';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_strict_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Availability Search';
  $display->uuid = 'b657bc5f-df29-40ea-b151-c7eb04f232b0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_availability_search__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bc7f1b9a-cdef-40cd-b00e-6347d852f61a';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'current_search-properties';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'bc7f1b9a-cdef-40cd-b00e-6347d852f61a';
  $display->content['new-bc7f1b9a-cdef-40cd-b00e-6347d852f61a'] = $pane;
  $display->panels['left'][0] = 'new-bc7f1b9a-cdef-40cd-b00e-6347d852f61a';
  $pane = new stdClass();
  $pane->pid = 'new-82337349-263b-4cbb-8812-8353de47f769';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PSgMGV0vhgwKGBG76zNiI6gHpbuUpy7v';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '82337349-263b-4cbb-8812-8353de47f769';
  $display->content['new-82337349-263b-4cbb-8812-8353de47f769'] = $pane;
  $display->panels['left'][1] = 'new-82337349-263b-4cbb-8812-8353de47f769';
  $pane = new stdClass();
  $pane->pid = 'new-28dac05b-8272-45de-b736-276405437be3';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-l43LlleliFlK22LqmnY4nQB1SdXo4Lw3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Capacity',
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
  $pane->uuid = '28dac05b-8272-45de-b736-276405437be3';
  $display->content['new-28dac05b-8272-45de-b736-276405437be3'] = $pane;
  $display->panels['left'][2] = 'new-28dac05b-8272-45de-b736-276405437be3';
  $pane = new stdClass();
  $pane->pid = 'new-d3b2146d-1063-4ddd-9045-42ffadc306f9';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-04a5frpwjrTOGzFu5zVVfB1agfNlhYJ3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd3b2146d-1063-4ddd-9045-42ffadc306f9';
  $display->content['new-d3b2146d-1063-4ddd-9045-42ffadc306f9'] = $pane;
  $display->panels['left'][3] = 'new-d3b2146d-1063-4ddd-9045-42ffadc306f9';
  $pane = new stdClass();
  $pane->pid = 'new-3d2cefa7-5668-467c-940e-a49831df191f';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-5HkeJoBRGIgKxKA4SoWbq7llH7h7jkWv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Property type',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3d2cefa7-5668-467c-940e-a49831df191f';
  $display->content['new-3d2cefa7-5668-467c-940e-a49831df191f'] = $pane;
  $display->panels['left'][4] = 'new-3d2cefa7-5668-467c-940e-a49831df191f';
  $pane = new stdClass();
  $pane->pid = 'new-f48647ce-158c-4b7f-96e6-336348b610d9';
  $pane->panel = 'left';
  $pane->type = 'roomify_social_feed_render';
  $pane->subtype = 'roomify_social_feed_render';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Social Feeds Enabled',
          'php' => '$social_feeds_pages = variable_get(\'roomify_feed_pages\', array());
  if (isset($social_feeds_pages[\'availability_page\']) && $social_feeds_pages[\'availability_page\'] === \'availability_page\') {
    return TRUE;
  }
  return FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'f48647ce-158c-4b7f-96e6-336348b610d9';
  $display->content['new-f48647ce-158c-4b7f-96e6-336348b610d9'] = $pane;
  $display->panels['left'][5] = 'new-f48647ce-158c-4b7f-96e6-336348b610d9';
  $pane = new stdClass();
  $pane->pid = 'new-11c1943c-80c0-4645-a265-61049fca89bb';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'available_properties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'List View',
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
  $pane->uuid = '11c1943c-80c0-4645-a265-61049fca89bb';
  $display->content['new-11c1943c-80c0-4645-a265-61049fca89bb'] = $pane;
  $display->panels['right'][0] = 'new-11c1943c-80c0-4645-a265-61049fca89bb';
  $pane = new stdClass();
  $pane->pid = 'new-a7f24c77-e9e0-4d70-b41e-a15a4f3dc910';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties_index-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Map',
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
  $pane->uuid = 'a7f24c77-e9e0-4d70-b41e-a15a4f3dc910';
  $display->content['new-a7f24c77-e9e0-4d70-b41e-a15a4f3dc910'] = $pane;
  $display->panels['right'][1] = 'new-a7f24c77-e9e0-4d70-b41e-a15a4f3dc910';
  $pane = new stdClass();
  $pane->pid = 'new-978ad1d9-93c2-48ed-affe-a909be63bad1';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'available_properties_grid';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Grid View',
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
  $pane->uuid = '978ad1d9-93c2-48ed-affe-a909be63bad1';
  $display->content['new-978ad1d9-93c2-48ed-affe-a909be63bad1'] = $pane;
  $display->panels['right'][2] = 'new-978ad1d9-93c2-48ed-affe-a909be63bad1';
  $pane = new stdClass();
  $pane->pid = 'new-d262cfae-0a0c-425d-a5ae-9a3ee88cbc71';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-p8tdBgF3m6VbI1oKafiwW9evusLmW6R3';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd262cfae-0a0c-425d-a5ae-9a3ee88cbc71';
  $display->content['new-d262cfae-0a0c-425d-a5ae-9a3ee88cbc71'] = $pane;
  $display->panels['top'][0] = 'new-d262cfae-0a0c-425d-a5ae-9a3ee88cbc71';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_availability_search__panel'] = $handler;

  /* ACTIVITIES SEARCH PAGE */

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activities_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'activities_search';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_strict_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f136b62-5b1e-4489-8dbe-672c143ed17a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_activities_search__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1009b53c-4eba-4533-ad00-9ffe1de5186d';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'activities_index-panel_pane_1';
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
  $pane->uuid = '1009b53c-4eba-4533-ad00-9ffe1de5186d';
  $display->content['new-1009b53c-4eba-4533-ad00-9ffe1de5186d'] = $pane;
  $display->panels['right'][0] = 'new-1009b53c-4eba-4533-ad00-9ffe1de5186d';
  $pane = new stdClass();
  $pane->pid = 'new-beffa72f-1e3d-43a6-b3fb-67c577b4b5bb';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-P75p8TwytWZIY2wwYtsujGy6daC8vaFE';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'beffa72f-1e3d-43a6-b3fb-67c577b4b5bb';
  $display->content['new-beffa72f-1e3d-43a6-b3fb-67c577b4b5bb'] = $pane;
  $display->panels['top'][0] = 'new-beffa72f-1e3d-43a6-b3fb-67c577b4b5bb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_activities_search__panel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_areas__panel';
  $handler->task = 'page';
  $handler->subtask = 'all_areas';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(),
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
  $display->title = 'Areas';
  $display->uuid = 'ddd1a694-6fa7-4ce6-90f4-f5f7e4c5a9e5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_areas__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b2960c3c-47f4-450b-9778-709e98d82b94';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'areas-all_areas_view';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b2960c3c-47f4-450b-9778-709e98d82b94';
  $display->content['new-b2960c3c-47f4-450b-9778-709e98d82b94'] = $pane;
  $display->panels['middle'][0] = 'new-b2960c3c-47f4-450b-9778-709e98d82b94';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_all_areas__panel'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_area_blog__panel';
  $handler->task = 'page';
  $handler->subtask = 'area_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
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
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%area:name Blog';
  $display->uuid = '65229042-f911-4f90-9228-210e74cb3376';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_area_blog__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-86cf41e6-2dd6-4d17-9fe8-6fed84683d43';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Blogposts',
    'title' => '',
    'body' => '<p><a class="roomify-add-blog-post-link roomify-add-button" href="/node/add/blog">Add Blogpost</a></p>',
    'format' => 'filtered_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86cf41e6-2dd6-4d17-9fe8-6fed84683d43';
  $display->content['new-86cf41e6-2dd6-4d17-9fe8-6fed84683d43'] = $pane;
  $display->panels['middle'][0] = 'new-86cf41e6-2dd6-4d17-9fe8-6fed84683d43';
  $pane = new stdClass();
  $pane->pid = 'new-2bd53c58-97d0-4083-9a79-22e106a2e654';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '%area:name blog posts',
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
  $pane->uuid = '2bd53c58-97d0-4083-9a79-22e106a2e654';
  $display->content['new-2bd53c58-97d0-4083-9a79-22e106a2e654'] = $pane;
  $display->panels['middle'][1] = 'new-2bd53c58-97d0-4083-9a79-22e106a2e654';
  $pane = new stdClass();
  $pane->pid = 'new-bad964c4-7b7f-4db2-b0d8-f7af5b3926d4';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog-panel_pane_6';
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
  $pane->uuid = 'bad964c4-7b7f-4db2-b0d8-f7af5b3926d4';
  $display->content['new-bad964c4-7b7f-4db2-b0d8-f7af5b3926d4'] = $pane;
  $display->panels['top'][0] = 'new-bad964c4-7b7f-4db2-b0d8-f7af5b3926d4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_area_blog__panel'] = $handler;

  return $export;
}
