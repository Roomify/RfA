<?php

/**
 * @file
 * roomify_elegant_theme.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function roomify_elegant_theme_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blogpost-elegant';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Blogpost Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blogpost-elegant',
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
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
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
  $display->title = '';
  $display->uuid = 'bdfbe48f-f065-4ea6-9330-0aca5c08a60f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__blogpost-elegant';
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
    'override_title_text' => 'where to stay in %node:field-blog-area',
    'override_title_heading' => 'h3',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '616ba109-af3e-4b9d-b240-c52afc39d04f';
  $display->content['new-616ba109-af3e-4b9d-b240-c52afc39d04f'] = $pane;
  $display->panels['left'][0] = 'new-616ba109-af3e-4b9d-b240-c52afc39d04f';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '710c987b-525c-4ca8-b708-195fa836f6f8';
  $display->content['new-710c987b-525c-4ca8-b708-195fa836f6f8'] = $pane;
  $display->panels['left'][1] = 'new-710c987b-525c-4ca8-b708-195fa836f6f8';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '76512c7e-4af9-4fde-a085-5210d11581dc';
  $display->content['new-76512c7e-4af9-4fde-a085-5210d11581dc'] = $pane;
  $display->panels['left'][2] = 'new-76512c7e-4af9-4fde-a085-5210d11581dc';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $display->content['new-c3a20eab-f7ad-4f85-b999-b9ae5e761242'] = $pane;
  $display->panels['left'][3] = 'new-c3a20eab-f7ad-4f85-b999-b9ae5e761242';
  $pane = new stdClass();
  $pane->pid = 'new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $display->content['new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98'] = $pane;
  $display->panels['left'][4] = 'new-2ccd9854-9eef-4687-bd7e-a5f678cf0d98';
  $pane = new stdClass();
  $pane->pid = 'new-6e345cbf-8108-4371-8110-c08554620999';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
        if (isset($customer_message[\'blog_node\']) && $customer_message[\'blog_node\'] === \'blog_node\') {
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e345cbf-8108-4371-8110-c08554620999';
  $display->content['new-6e345cbf-8108-4371-8110-c08554620999'] = $pane;
  $display->panels['right'][0] = 'new-6e345cbf-8108-4371-8110-c08554620999';
  $pane = new stdClass();
  $pane->pid = 'new-84759ac7-0647-47f6-9439-73a7fb0274b9';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'blog_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => 'blog',
    'display' => 'search_api_views_facets_block_1',
    'override_title' => 1,
    'override_title_text' => 'Categories',
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
  $pane->uuid = '84759ac7-0647-47f6-9439-73a7fb0274b9';
  $display->content['new-84759ac7-0647-47f6-9439-73a7fb0274b9'] = $pane;
  $display->panels['right'][1] = 'new-84759ac7-0647-47f6-9439-73a7fb0274b9';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7ce9eb59-d184-4caf-96df-52dd072a3c8a';
  $display->content['new-7ce9eb59-d184-4caf-96df-52dd072a3c8a'] = $pane;
  $display->panels['right'][2] = 'new-7ce9eb59-d184-4caf-96df-52dd072a3c8a';
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
  $pane->uuid = '38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $display->content['new-38da774c-eb67-42a1-a48d-8f88b16ae6ad'] = $pane;
  $display->panels['right'][3] = 'new-38da774c-eb67-42a1-a48d-8f88b16ae6ad';
  $pane = new stdClass();
  $pane->pid = 'new-75d124ba-408a-401a-8e3c-1ee0b0790ac5';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
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
  $pane->uuid = '75d124ba-408a-401a-8e3c-1ee0b0790ac5';
  $display->content['new-75d124ba-408a-401a-8e3c-1ee0b0790ac5'] = $pane;
  $display->panels['right'][4] = 'new-75d124ba-408a-401a-8e3c-1ee0b0790ac5';
  $pane = new stdClass();
  $pane->pid = 'new-de12b1de-9830-4d02-b900-6c5dbffaaa79';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'de12b1de-9830-4d02-b900-6c5dbffaaa79';
  $display->content['new-de12b1de-9830-4d02-b900-6c5dbffaaa79'] = $pane;
  $display->panels['right'][5] = 'new-de12b1de-9830-4d02-b900-6c5dbffaaa79';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blogpost-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panel_context_f013b8d1-0781-405c-a6f3-deac4fe97790';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Blog Elegant',
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
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
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
  $display->title = '';
  $display->uuid = '1d0ab30b-770a-4c14-842a-f846c5a54af4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_blog__panel_context_f013b8d1-0781-405c-a6f3-deac4fe97790';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-72dbbb0d-5331-4063-97b4-4678df14538e';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_elegant-panel_pane_1';
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
  $pane->uuid = '72dbbb0d-5331-4063-97b4-4678df14538e';
  $display->content['new-72dbbb0d-5331-4063-97b4-4678df14538e'] = $pane;
  $display->panels['left'][0] = 'new-72dbbb0d-5331-4063-97b4-4678df14538e';
  $pane = new stdClass();
  $pane->pid = 'new-acba7dbc-d7ac-4e31-97f1-8e0366c46365';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ozwx1S54VyldwQPX0j0nHZpwu9NNbuDT';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Area',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'acba7dbc-d7ac-4e31-97f1-8e0366c46365';
  $display->content['new-acba7dbc-d7ac-4e31-97f1-8e0366c46365'] = $pane;
  $display->panels['right'][0] = 'new-acba7dbc-d7ac-4e31-97f1-8e0366c46365';
  $pane = new stdClass();
  $pane->pid = 'new-bbaac4b2-74fa-407b-ab25-17f142c5fb22';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-jWNffqnrk4T5fQni1bU4JjGhrZulYZ2K';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Category',
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
  $pane->uuid = 'bbaac4b2-74fa-407b-ab25-17f142c5fb22';
  $display->content['new-bbaac4b2-74fa-407b-ab25-17f142c5fb22'] = $pane;
  $display->panels['right'][1] = 'new-bbaac4b2-74fa-407b-ab25-17f142c5fb22';
  $pane = new stdClass();
  $pane->pid = 'new-28cd498c-9d9f-4b07-952b-c3a9ead5ef2a';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Properties',
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
  $pane->uuid = '28cd498c-9d9f-4b07-952b-c3a9ead5ef2a';
  $display->content['new-28cd498c-9d9f-4b07-952b-c3a9ead5ef2a'] = $pane;
  $display->panels['right'][2] = 'new-28cd498c-9d9f-4b07-952b-c3a9ead5ef2a';
  $pane = new stdClass();
  $pane->pid = 'new-eaaca378-a597-4a2f-bd66-ca2709eca950';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create paragraph content blogpost',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Blogpost',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-default btn-primary" href="/node/add/blog"><span class="glyphicon glyphicon-plus" style="color:rgb(255, 255, 255);"></span> Add Blogost</a></p>',
    'format' => 'filtered_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'eaaca378-a597-4a2f-bd66-ca2709eca950';
  $display->content['new-eaaca378-a597-4a2f-bd66-ca2709eca950'] = $pane;
  $display->panels['top'][0] = 'new-eaaca378-a597-4a2f-bd66-ca2709eca950';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_blog__panel_context_f013b8d1-0781-405c-a6f3-deac4fe97790'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activity_page__activity-elegant';
  $handler->task = 'page';
  $handler->subtask = 'activity_page';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Activity Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'activity-elegant',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
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
  $display->title = '';
  $display->uuid = '95950754-1aca-49cc-a371-f0d7a3a09593';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_activity_page__activity-elegant';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-efc82e8a-4296-432d-97ea-799467f4ece9';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'activities_elegant-panel_pane_1';
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
  $pane->uuid = 'efc82e8a-4296-432d-97ea-799467f4ece9';
  $display->content['new-efc82e8a-4296-432d-97ea-799467f4ece9'] = $pane;
  $display->panels['left'][0] = 'new-efc82e8a-4296-432d-97ea-799467f4ece9';
  $pane = new stdClass();
  $pane->pid = 'new-b790439c-6eca-4d26-9d91-c60503139af1';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
    if (isset($customer_message[\'things_to_do_page\']) && $customer_message[\'things_to_do_page\'] === \'things_to_do_page\') {
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b790439c-6eca-4d26-9d91-c60503139af1';
  $display->content['new-b790439c-6eca-4d26-9d91-c60503139af1'] = $pane;
  $display->panels['right'][0] = 'new-b790439c-6eca-4d26-9d91-c60503139af1';
  $pane = new stdClass();
  $pane->pid = 'new-176926b8-3b79-48ea-ba64-3cd0e2820605';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-vRyy3WdE9NncAu1blRZM83olHEClJfMx';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'activity type',
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
  $pane->uuid = '176926b8-3b79-48ea-ba64-3cd0e2820605';
  $display->content['new-176926b8-3b79-48ea-ba64-3cd0e2820605'] = $pane;
  $display->panels['right'][1] = 'new-176926b8-3b79-48ea-ba64-3cd0e2820605';
  $pane = new stdClass();
  $pane->pid = 'new-b839718f-643f-4ab2-9b7b-2a9843ca2507';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
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
  $pane->uuid = 'b839718f-643f-4ab2-9b7b-2a9843ca2507';
  $display->content['new-b839718f-643f-4ab2-9b7b-2a9843ca2507'] = $pane;
  $display->panels['right'][2] = 'new-b839718f-643f-4ab2-9b7b-2a9843ca2507';
  $pane = new stdClass();
  $pane->pid = 'new-bfbc9358-2bdc-490a-afdf-892ada89ae02';
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
      if (isset($social_feeds_pages[\'things_to_do_page\']) && $social_feeds_pages[\'things_to_do_page\'] === \'things_to_do_page\') {
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bfbc9358-2bdc-490a-afdf-892ada89ae02';
  $display->content['new-bfbc9358-2bdc-490a-afdf-892ada89ae02'] = $pane;
  $display->panels['right'][3] = 'new-bfbc9358-2bdc-490a-afdf-892ada89ae02';
  $pane = new stdClass();
  $pane->pid = 'new-09db0965-e530-4607-9800-3f38709e6cb1';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'activities_map-panel_pane_1';
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
  $pane->uuid = '09db0965-e530-4607-9800-3f38709e6cb1';
  $display->content['new-09db0965-e530-4607-9800-3f38709e6cb1'] = $pane;
  $display->panels['top'][0] = 'new-09db0965-e530-4607-9800-3f38709e6cb1';
  $pane = new stdClass();
  $pane->pid = 'new-00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06';
  $pane->panel = 'top';
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
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-default btn-primary" href="/node/add/activity"><span class="glyphicon glyphicon-plus" style="color:rgb(255, 255, 255);"></span> Add Activity</a></p>',
    'format' => 'filtered_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12 add-activity-button',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06';
  $display->content['new-00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06'] = $pane;
  $display->panels['top'][1] = 'new-00b0bcd7-4fe3-4c8d-93ce-5fdf370bdd06';
  $pane = new stdClass();
  $pane->pid = 'new-f0010720-2eb8-48fe-8327-00c208b86af9';
  $pane->panel = 'top';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
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
  $pane->uuid = 'f0010720-2eb8-48fe-8327-00c208b86af9';
  $display->content['new-f0010720-2eb8-48fe-8327-00c208b86af9'] = $pane;
  $display->panels['top'][2] = 'new-f0010720-2eb8-48fe-8327-00c208b86af9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_activity_page__activity-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_listings__panel_context_ea960d6f-7489-4581-a443-77db7cfbf025';
  $handler->task = 'page';
  $handler->subtask = 'listings';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Listing Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'property_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'main-left' => NULL,
      'main-right' => NULL,
      'main-center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%type_id:name';
  $display->uuid = '11bb3ec2-717d-4a3e-b98e-c1f98dfac884';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_listings__panel_context_ea960d6f-7489-4581-a443-77db7cfbf025';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2eb9c562-9372-402a-a121-b6c72f2ecabe';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Properties',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2eb9c562-9372-402a-a121-b6c72f2ecabe';
  $display->content['new-2eb9c562-9372-402a-a121-b6c72f2ecabe'] = $pane;
  $display->panels['bottom'][0] = 'new-2eb9c562-9372-402a-a121-b6c72f2ecabe';
  $pane = new stdClass();
  $pane->pid = 'new-af49a7d3-fec3-448a-b7b6-01689cd3c1a2';
  $pane->panel = 'left';
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
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'af49a7d3-fec3-448a-b7b6-01689cd3c1a2';
  $display->content['new-af49a7d3-fec3-448a-b7b6-01689cd3c1a2'] = $pane;
  $display->panels['left'][0] = 'new-af49a7d3-fec3-448a-b7b6-01689cd3c1a2';
  $pane = new stdClass();
  $pane->pid = 'new-1099784e-9cd7-4e8c-9730-548c49d3647b';
  $pane->panel = 'main-center';
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
  $pane->uuid = '1099784e-9cd7-4e8c-9730-548c49d3647b';
  $display->content['new-1099784e-9cd7-4e8c-9730-548c49d3647b'] = $pane;
  $display->panels['main-center'][0] = 'new-1099784e-9cd7-4e8c-9730-548c49d3647b';
  $pane = new stdClass();
  $pane->pid = 'new-f7668f67-d093-4365-9dbd-87f60c197098';
  $pane->panel = 'main-center';
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
  $pane->uuid = 'f7668f67-d093-4365-9dbd-87f60c197098';
  $display->content['new-f7668f67-d093-4365-9dbd-87f60c197098'] = $pane;
  $display->panels['main-center'][1] = 'new-f7668f67-d093-4365-9dbd-87f60c197098';
  $pane = new stdClass();
  $pane->pid = 'new-b7409a4b-b369-4e8d-822b-649b92179063';
  $pane->panel = 'main-center';
  $pane->type = 'panels_mini';
  $pane->subtype = 'roomify_elegant_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:roomify_property_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Highlights',
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
  $pane->uuid = 'b7409a4b-b369-4e8d-822b-649b92179063';
  $display->content['new-b7409a4b-b369-4e8d-822b-649b92179063'] = $pane;
  $display->panels['main-center'][2] = 'new-b7409a4b-b369-4e8d-822b-649b92179063';
  $pane = new stdClass();
  $pane->pid = 'new-ea2071d1-5ac9-4e4e-944d-4611dc42cab8';
  $pane->panel = 'main-center';
  $pane->type = 'views_panes';
  $pane->subtype = 'property_elegant-panel_pane_3';
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
    'override_title' => 1,
    'override_title_text' => 'Our Rooms',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'property-types',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ea2071d1-5ac9-4e4e-944d-4611dc42cab8';
  $display->content['new-ea2071d1-5ac9-4e4e-944d-4611dc42cab8'] = $pane;
  $display->panels['main-center'][3] = 'new-ea2071d1-5ac9-4e4e-944d-4611dc42cab8';
  $pane = new stdClass();
  $pane->pid = 'new-418fa2a6-1e8c-4c81-837a-cfb67fc69daf';
  $pane->panel = 'main-left';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '418fa2a6-1e8c-4c81-837a-cfb67fc69daf';
  $display->content['new-418fa2a6-1e8c-4c81-837a-cfb67fc69daf'] = $pane;
  $display->panels['main-left'][0] = 'new-418fa2a6-1e8c-4c81-837a-cfb67fc69daf';
  $pane = new stdClass();
  $pane->pid = 'new-031255d1-81ea-4e46-b1da-aabad962bbe1';
  $pane->panel = 'main-left';
  $pane->type = 'views';
  $pane->subtype = 'property_slideshow_elegant';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '031255d1-81ea-4e46-b1da-aabad962bbe1';
  $display->content['new-031255d1-81ea-4e46-b1da-aabad962bbe1'] = $pane;
  $display->panels['main-left'][1] = 'new-031255d1-81ea-4e46-b1da-aabad962bbe1';
  $pane = new stdClass();
  $pane->pid = 'new-c27d4fdf-4279-4d3a-a613-c160cc820404';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_description';
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
    'override_title_text' => 'Description',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c27d4fdf-4279-4d3a-a613-c160cc820404';
  $display->content['new-c27d4fdf-4279-4d3a-a613-c160cc820404'] = $pane;
  $display->panels['main-right'][0] = 'new-c27d4fdf-4279-4d3a-a613-c160cc820404';
  $pane = new stdClass();
  $pane->pid = 'new-7465fae9-e822-441b-8a8a-383865f7d842';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_amenities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:roomify_property_1',
    'override_title' => 1,
    'override_title_text' => 'Amenities',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7465fae9-e822-441b-8a8a-383865f7d842';
  $display->content['new-7465fae9-e822-441b-8a8a-383865f7d842'] = $pane;
  $display->panels['right'][0] = 'new-7465fae9-e822-441b-8a8a-383865f7d842';
  $pane = new stdClass();
  $pane->pid = 'new-491d2946-e303-4145-b7b2-f747adca6750';
  $pane->panel = 'right';
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
  $pane->uuid = '491d2946-e303-4145-b7b2-f747adca6750';
  $display->content['new-491d2946-e303-4145-b7b2-f747adca6750'] = $pane;
  $display->panels['right'][1] = 'new-491d2946-e303-4145-b7b2-f747adca6750';
  $pane = new stdClass();
  $pane->pid = 'new-65bd81be-2d6f-4abe-9933-4dfe9c4d9e07';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'roomify_property:field_sp_short_description';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65bd81be-2d6f-4abe-9933-4dfe9c4d9e07';
  $display->content['new-65bd81be-2d6f-4abe-9933-4dfe9c4d9e07'] = $pane;
  $display->panels['top'][0] = 'new-65bd81be-2d6f-4abe-9933-4dfe9c4d9e07';
  $pane = new stdClass();
  $pane->pid = 'new-d52822f0-2af1-499f-94a0-ec63ad68cba4';
  $pane->panel = 'top';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd52822f0-2af1-499f-94a0-ec63ad68cba4';
  $display->content['new-d52822f0-2af1-499f-94a0-ec63ad68cba4'] = $pane;
  $display->panels['top'][1] = 'new-d52822f0-2af1-499f-94a0-ec63ad68cba4';
  $pane = new stdClass();
  $pane->pid = 'new-ccd83b35-1e04-4d9f-94dd-1e480673a0f9';
  $pane->panel = 'top';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
    if (isset($customer_message[\'property_page\']) && $customer_message[\'property_page\'] == \'property_page\') {
      return TRUE;
    }
    return FALSE;
    ',
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
  $pane->uuid = 'ccd83b35-1e04-4d9f-94dd-1e480673a0f9';
  $display->content['new-ccd83b35-1e04-4d9f-94dd-1e480673a0f9'] = $pane;
  $display->panels['top'][2] = 'new-ccd83b35-1e04-4d9f-94dd-1e480673a0f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_listings__panel_context_ea960d6f-7489-4581-a443-77db7cfbf025'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_type__room-type-elegant';
  $handler->task = 'page';
  $handler->subtask = 'type';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Room Type Elegant',
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
    'name' => 'room-type-elegant',
    'access' => array(),
  );
  $display = new panels_display();
  $display->layout = 'property_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main-left' => NULL,
      'main-right' => NULL,
      'main-center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%roomify_property:name : %type_id:name';
  $display->uuid = 'c61020a0-b75b-49d4-be75-e42066dc313a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_type__room-type-elegant';
  $display->content = array();
  $display->panels = array();
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a3d4189e-6012-4006-9801-8a5e5403c789';
  $display->content['new-a3d4189e-6012-4006-9801-8a5e5403c789'] = $pane;
  $display->panels['left'][0] = 'new-a3d4189e-6012-4006-9801-8a5e5403c789';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e0afa24c-b997-4b4c-bf2a-19c129286769';
  $display->content['new-e0afa24c-b997-4b4c-bf2a-19c129286769'] = $pane;
  $display->panels['left'][1] = 'new-e0afa24c-b997-4b4c-bf2a-19c129286769';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '55dd48d2-aae7-4ee2-ab23-077f9df94820';
  $display->content['new-55dd48d2-aae7-4ee2-ab23-077f9df94820'] = $pane;
  $display->panels['left'][2] = 'new-55dd48d2-aae7-4ee2-ab23-077f9df94820';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0d5bba15-55cd-4218-ab08-0c950628c87f';
  $display->content['new-0d5bba15-55cd-4218-ab08-0c950628c87f'] = $pane;
  $display->panels['left'][3] = 'new-0d5bba15-55cd-4218-ab08-0c950628c87f';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e0e1a521-9f6a-492a-94cc-d79842502dbb';
  $display->content['new-e0e1a521-9f6a-492a-94cc-d79842502dbb'] = $pane;
  $display->panels['left'][4] = 'new-e0e1a521-9f6a-492a-94cc-d79842502dbb';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $display->content['new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526'] = $pane;
  $display->panels['left'][5] = 'new-3ed86781-edb7-4a47-9d6d-8cb2eeb96526';
  $pane = new stdClass();
  $pane->pid = 'new-d4746735-38dd-488b-9953-5399faf72354';
  $pane->panel = 'main-center';
  $pane->type = 'type_availability_search';
  $pane->subtype = 'type_availability_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'locanda_availability_search_title' => NULL,
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
  $pane->uuid = 'd4746735-38dd-488b-9953-5399faf72354';
  $display->content['new-d4746735-38dd-488b-9953-5399faf72354'] = $pane;
  $display->panels['main-center'][0] = 'new-d4746735-38dd-488b-9953-5399faf72354';
  $pane = new stdClass();
  $pane->pid = 'new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $pane->panel = 'main-left';
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
  $display->panels['main-left'][0] = 'new-bb89b3ef-ad1f-47d4-a370-97b9d6897e34';
  $pane = new stdClass();
  $pane->pid = 'new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $pane->panel = 'main-right';
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
    'override_title_text' => 'Description',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $display->content['new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206'] = $pane;
  $display->panels['main-right'][0] = 'new-a3aac16e-bf29-4f6f-8a6f-6f6a37453206';
  $pane = new stdClass();
  $pane->pid = 'new-c4980ee4-f216-4b91-9410-de4f404624e8';
  $pane->panel = 'main-right';
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
  $pane->uuid = 'c4980ee4-f216-4b91-9410-de4f404624e8';
  $display->content['new-c4980ee4-f216-4b91-9410-de4f404624e8'] = $pane;
  $display->panels['main-right'][1] = 'new-c4980ee4-f216-4b91-9410-de4f404624e8';
  $pane = new stdClass();
  $pane->pid = 'new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $pane->panel = 'right';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $display->content['new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702'] = $pane;
  $display->panels['right'][0] = 'new-6a33a9d9-4e89-4865-a8ac-8ab1b73e1702';
  $pane = new stdClass();
  $pane->pid = 'new-7d1622c1-ce7f-4f23-b96d-64911f321048';
  $pane->panel = 'top';
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
  $display->panels['top'][0] = 'new-7d1622c1-ce7f-4f23-b96d-64911f321048';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_type__room-type-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_availability_search__availability-search-elegant';
  $handler->task = 'page';
  $handler->subtask = 'availability_search';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Availability Search Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'availability-search-elegant',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_strict_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'bottom' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Search Availability';
  $display->uuid = 'cd222d1f-3338-497d-9d75-c9016f3c7bb6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_availability_search__availability-search-elegant';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bc3107cb-a814-4dfa-82d0-b5778eb9c046';
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
  $pane->uuid = 'bc3107cb-a814-4dfa-82d0-b5778eb9c046';
  $display->content['new-bc3107cb-a814-4dfa-82d0-b5778eb9c046'] = $pane;
  $display->panels['left'][0] = 'new-bc3107cb-a814-4dfa-82d0-b5778eb9c046';
  $pane = new stdClass();
  $pane->pid = 'new-daade953-2593-460e-aa6b-3c54e4ec9032';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-p8tdBgF3m6VbI1oKafiwW9evusLmW6R3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Availability',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'availability-search-facet',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'daade953-2593-460e-aa6b-3c54e4ec9032';
  $display->content['new-daade953-2593-460e-aa6b-3c54e4ec9032'] = $pane;
  $display->panels['left'][1] = 'new-daade953-2593-460e-aa6b-3c54e4ec9032';
  $pane = new stdClass();
  $pane->pid = 'new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PSgMGV0vhgwKGBG76zNiI6gHpbuUpy7v';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Area',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7d6ba4a9-6a11-4acd-b940-ef6e593c32f1';
  $display->content['new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1'] = $pane;
  $display->panels['left'][2] = 'new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1';
  $pane = new stdClass();
  $pane->pid = 'new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-LZ5CVSwTZdsXhbhn7Z38s9xNZroPD6oC';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Area Type',
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
  $pane->uuid = 'fdb0b6f2-e201-4493-84ac-11fbb5f57a82';
  $display->content['new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82'] = $pane;
  $display->panels['left'][3] = 'new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82';
  $pane = new stdClass();
  $pane->pid = 'new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-l43LlleliFlK22LqmnY4nQB1SdXo4Lw3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Capacity',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2c1d95f8-4ad9-4e43-b485-63efc38bba9a';
  $display->content['new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a'] = $pane;
  $display->panels['left'][4] = 'new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a';
  $pane = new stdClass();
  $pane->pid = 'new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-04a5frpwjrTOGzFu5zVVfB1agfNlhYJ3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Amenities',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '03f67cdb-5245-4ddc-a101-b6f79aa84ddc';
  $display->content['new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc'] = $pane;
  $display->panels['left'][5] = 'new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc';
  $pane = new stdClass();
  $pane->pid = 'new-a511d181-afb2-4a91-948c-d6fd102cbebc';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-5HkeJoBRGIgKxKA4SoWbq7llH7h7jkWv';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Property type',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a511d181-afb2-4a91-948c-d6fd102cbebc';
  $display->content['new-a511d181-afb2-4a91-948c-d6fd102cbebc'] = $pane;
  $display->panels['left'][6] = 'new-a511d181-afb2-4a91-948c-d6fd102cbebc';
  $pane = new stdClass();
  $pane->pid = 'new-72d233c3-4436-4a0a-abf9-18d42762be8a';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '72d233c3-4436-4a0a-abf9-18d42762be8a';
  $display->content['new-72d233c3-4436-4a0a-abf9-18d42762be8a'] = $pane;
  $display->panels['left'][7] = 'new-72d233c3-4436-4a0a-abf9-18d42762be8a';
  $pane = new stdClass();
  $pane->pid = 'new-16a5d941-3056-4ce1-9519-c776a9ad3113';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'properties_tabs_elegant';
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
  $pane->css = array(
    'css_id' => 'properties-tabs',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '16a5d941-3056-4ce1-9519-c776a9ad3113';
  $display->content['new-16a5d941-3056-4ce1-9519-c776a9ad3113'] = $pane;
  $display->panels['right'][0] = 'new-16a5d941-3056-4ce1-9519-c776a9ad3113';
  $pane = new stdClass();
  $pane->pid = 'new-028fc2b3-ef7c-4f31-a180-e9ba99f4f019';
  $pane->panel = 'top';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
    if (isset($customer_message[\'availability_page\']) && $customer_message[\'availability_page\'] === \'availability_page\') {
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '028fc2b3-ef7c-4f31-a180-e9ba99f4f019';
  $display->content['new-028fc2b3-ef7c-4f31-a180-e9ba99f4f019'] = $pane;
  $display->panels['top'][0] = 'new-028fc2b3-ef7c-4f31-a180-e9ba99f4f019';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-daade953-2593-460e-aa6b-3c54e4ec9032';
  $handler->conf['display'] = $display;
  $export['page_availability_search__availability-search-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage-elegant';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Homepage Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage-elegant',
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
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
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
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3df221a1-b788-4bd3-ac2c-83d0d52ccb73';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__homepage-elegant';
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
  $pane->pid = 'new-3991b356-5bf2-4ab4-87a4-78f732a447c9';
  $pane->panel = 'bottom';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3991b356-5bf2-4ab4-87a4-78f732a447c9';
  $display->content['new-3991b356-5bf2-4ab4-87a4-78f732a447c9'] = $pane;
  $display->panels['bottom'][2] = 'new-3991b356-5bf2-4ab4-87a4-78f732a447c9';
  $pane = new stdClass();
  $pane->pid = 'new-858a61f1-cdbc-46a7-99e2-b804ead38007';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'blog_elegant-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'From our Blog',
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
  $pane->uuid = '858a61f1-cdbc-46a7-99e2-b804ead38007';
  $display->content['new-858a61f1-cdbc-46a7-99e2-b804ead38007'] = $pane;
  $display->panels['footer'][0] = 'new-858a61f1-cdbc-46a7-99e2-b804ead38007';
  $pane = new stdClass();
  $pane->pid = 'new-5441c5d8-1da8-405a-9dc0-1817931e0652';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_areas_elegant-panel_pane_2';
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
    ),
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
  $pane->uuid = '5441c5d8-1da8-405a-9dc0-1817931e0652';
  $display->content['new-5441c5d8-1da8-405a-9dc0-1817931e0652'] = $pane;
  $display->panels['footer'][1] = 'new-5441c5d8-1da8-405a-9dc0-1817931e0652';
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
  $export['node_view__homepage-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__things-to-do-elegant';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Things to do Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'things-to-do-elegant',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
          'not' => FALSE,
        ),
        1 => array(
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'af415ea7-94db-4ad7-8a09-f539e31d845e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__things-to-do-elegant';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e220c90d-9446-47c3-b7b3-75a65d249772';
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
  $pane->uuid = 'e220c90d-9446-47c3-b7b3-75a65d249772';
  $display->content['new-e220c90d-9446-47c3-b7b3-75a65d249772'] = $pane;
  $display->panels['left'][0] = 'new-e220c90d-9446-47c3-b7b3-75a65d249772';
  $pane = new stdClass();
  $pane->pid = 'new-ef4303f2-9172-4492-a61d-0ed0042803c9';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_activity_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ef4303f2-9172-4492-a61d-0ed0042803c9';
  $display->content['new-ef4303f2-9172-4492-a61d-0ed0042803c9'] = $pane;
  $display->panels['left'][1] = 'new-ef4303f2-9172-4492-a61d-0ed0042803c9';
  $pane = new stdClass();
  $pane->pid = 'new-2f4f9057-91b9-41dd-9e13-dc45a6568f8b';
  $pane->panel = 'left';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2f4f9057-91b9-41dd-9e13-dc45a6568f8b';
  $display->content['new-2f4f9057-91b9-41dd-9e13-dc45a6568f8b'] = $pane;
  $display->panels['left'][2] = 'new-2f4f9057-91b9-41dd-9e13-dc45a6568f8b';
  $pane = new stdClass();
  $pane->pid = 'new-8fb25d49-d943-4727-b247-fbd715f109d6';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8fb25d49-d943-4727-b247-fbd715f109d6';
  $display->content['new-8fb25d49-d943-4727-b247-fbd715f109d6'] = $pane;
  $display->panels['left'][3] = 'new-8fb25d49-d943-4727-b247-fbd715f109d6';
  $pane = new stdClass();
  $pane->pid = 'new-4523a43d-9f84-41bb-adc7-42223858535a';
  $pane->panel = 'right';
  $pane->type = 'roomify_customer_message';
  $pane->subtype = 'roomify_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Customer Message Enabled',
          'php' => '$customer_message = variable_get(\'roomify_customer_support_page\', array());
      if (isset($customer_message[\'things_to_do_node\']) && $customer_message[\'things_to_do_node\'] === \'things_to_do_node\') {
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4523a43d-9f84-41bb-adc7-42223858535a';
  $display->content['new-4523a43d-9f84-41bb-adc7-42223858535a'] = $pane;
  $display->panels['right'][0] = 'new-4523a43d-9f84-41bb-adc7-42223858535a';
  $pane = new stdClass();
  $pane->pid = 'new-4e7852f3-439c-4947-b06e-41ab1427b289';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4e7852f3-439c-4947-b06e-41ab1427b289';
  $display->content['new-4e7852f3-439c-4947-b06e-41ab1427b289'] = $pane;
  $display->panels['right'][1] = 'new-4e7852f3-439c-4947-b06e-41ab1427b289';
  $pane = new stdClass();
  $pane->pid = 'new-83a58552-d482-4cd4-873c-34ff3d40bded';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'activity-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'related activities',
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
  $pane->uuid = '83a58552-d482-4cd4-873c-34ff3d40bded';
  $display->content['new-83a58552-d482-4cd4-873c-34ff3d40bded'] = $pane;
  $display->panels['right'][2] = 'new-83a58552-d482-4cd4-873c-34ff3d40bded';
  $pane = new stdClass();
  $pane->pid = 'new-4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_properties-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'featured properties',
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
  $pane->uuid = '4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5';
  $display->content['new-4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5'] = $pane;
  $display->panels['right'][3] = 'new-4d55bfd2-c41a-4c8d-bc7f-4e344dc415a5';
  $pane = new stdClass();
  $pane->pid = 'new-9d88f2bd-7ad5-4325-9ec0-f017c51e70de';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9d88f2bd-7ad5-4325-9ec0-f017c51e70de';
  $display->content['new-9d88f2bd-7ad5-4325-9ec0-f017c51e70de'] = $pane;
  $display->panels['right'][4] = 'new-9d88f2bd-7ad5-4325-9ec0-f017c51e70de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ef4303f2-9172-4492-a61d-0ed0042803c9';
  $handler->conf['display'] = $display;
  $export['node_view__things-to-do-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_areas__all-areas-elegant';
  $handler->task = 'page';
  $handler->subtask = 'all_areas';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'All Areas Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'all-areas-elegant',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
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
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Areas';
  $display->uuid = '54fbbbd4-2026-4268-8238-9b028f95f8a0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_areas__all-areas-elegant';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c62d3dba-ffda-4ecf-a8f6-f531af989316';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'areas_elegant-all_areas_view';
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
  $pane->uuid = 'c62d3dba-ffda-4ecf-a8f6-f531af989316';
  $display->content['new-c62d3dba-ffda-4ecf-a8f6-f531af989316'] = $pane;
  $display->panels['middle'][0] = 'new-c62d3dba-ffda-4ecf-a8f6-f531af989316';
  $pane = new stdClass();
  $pane->pid = 'new-acec1aa5-b26c-4f58-9c0c-c83bb72d4509';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit terms in 6',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Add Area',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><a class="btn btn-primary btn-default" href="/admin/structure/taxonomy/location/add"><span class="glyphicon glyphicon-plus" style="color:rgb(255, 255, 255);"></span>  Add Area</a></p>',
    'format' => 'filtered_text',
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
  $pane->uuid = 'acec1aa5-b26c-4f58-9c0c-c83bb72d4509';
  $display->content['new-acec1aa5-b26c-4f58-9c0c-c83bb72d4509'] = $pane;
  $display->panels['top'][0] = 'new-acec1aa5-b26c-4f58-9c0c-c83bb72d4509';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_all_areas__all-areas-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__page-elegant';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Page Elegant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'page-elegant',
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
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
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
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c965fd25-a303-456c-8500-65a777c3a8a1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__page-elegant';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8334e4d5-4a19-43bc-b905-f3b31e0af799';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'addtoany-addtoany_button';
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
  $pane->uuid = '8334e4d5-4a19-43bc-b905-f3b31e0af799';
  $display->content['new-8334e4d5-4a19-43bc-b905-f3b31e0af799'] = $pane;
  $display->panels['bottom'][0] = 'new-8334e4d5-4a19-43bc-b905-f3b31e0af799';
  $pane = new stdClass();
  $pane->pid = 'new-8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $pane->panel = 'middle';
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
  $pane->uuid = '8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $display->content['new-8c2d1d6f-406b-43e4-9159-82203a8af3eb'] = $pane;
  $display->panels['middle'][0] = 'new-8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8c2d1d6f-406b-43e4-9159-82203a8af3eb';
  $handler->conf['display'] = $display;
  $export['node_view__page-elegant'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_407e6824-65df-4e07-80fb-e1a0323a8549';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
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
          'name' => 'theme',
          'settings' => array(
            'theme' => 'roomify_elegant',
          ),
          'not' => FALSE,
        ),
        1 => array(
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
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '298f3b53-8b9c-4b0c-b07d-85869cec272a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_407e6824-65df-4e07-80fb-e1a0323a8549';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51de0526-f796-45ab-8f13-ddae4b76a8f7';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_landing_page_rows';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'paragraphs_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'view_mode' => 'full',
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
  $pane->uuid = '51de0526-f796-45ab-8f13-ddae4b76a8f7';
  $display->content['new-51de0526-f796-45ab-8f13-ddae4b76a8f7'] = $pane;
  $display->panels['middle'][0] = 'new-51de0526-f796-45ab-8f13-ddae4b76a8f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-51de0526-f796-45ab-8f13-ddae4b76a8f7';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_407e6824-65df-4e07-80fb-e1a0323a8549'] = $handler;

  return $export;
}
