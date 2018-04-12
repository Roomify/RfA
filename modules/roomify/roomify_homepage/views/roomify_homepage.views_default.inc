<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_travel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Travel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'roomify_slideshow_paragraph_1200x720';
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_homepage_slideshow' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_homepage_slideshow']['id'] = 'field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['table'] = 'field_data_field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['field'] = 'field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_slideshow']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_slideshow']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_homepage_slideshow']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_slideshow']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage' => 'homepage',
  );

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'panel_pane_1');

  $export['homepage_travel'] = $view;

  $view = new view();
  $view->name = 'homepage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'roomify_slideshow_paragraph_1200x720';
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_homepage_slideshow' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_homepage_properties_lists_target_id']['id'] = 'field_homepage_properties_lists_target_id';
  $handler->display->display_options['relationships']['field_homepage_properties_lists_target_id']['table'] = 'field_data_field_homepage_properties_lists';
  $handler->display->display_options['relationships']['field_homepage_properties_lists_target_id']['field'] = 'field_homepage_properties_lists_target_id';
  $handler->display->display_options['relationships']['field_homepage_properties_lists_target_id']['required'] = TRUE;
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_homepage_slideshow']['id'] = 'field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['table'] = 'field_data_field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['field'] = 'field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_slideshow']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_slideshow']['settings'] = array(
    'image_style' => '1600x580',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_homepage_slideshow']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_slideshow']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage' => 'homepage',
  );

  /* Display: Tight Slideshow */
  $handler = $view->new_display('panel_pane', 'Tight Slideshow', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Properties Lists */
  $handler = $view->new_display('panel_pane', 'Properties Lists', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_homepage_properties_lists_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_homepage_properties_lists_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_homepage_properties_lists_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_pl_featured_image']['id'] = 'field_pl_featured_image';
  $handler->display->display_options['fields']['field_pl_featured_image']['table'] = 'field_data_field_pl_featured_image';
  $handler->display->display_options['fields']['field_pl_featured_image']['field'] = 'field_pl_featured_image';
  $handler->display->display_options['fields']['field_pl_featured_image']['relationship'] = 'field_homepage_properties_lists_target_id';
  $handler->display->display_options['fields']['field_pl_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_pl_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pl_featured_image']['alter']['text'] = '<a href="[path]">
      [field_pl_featured_image]
      <div class="overlay">
      <div class="content">[title]</div>
      </div>
      </a>';
  $handler->display->display_options['fields']['field_pl_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pl_featured_image']['element_wrapper_class'] = 'hovereffect';
  $handler->display->display_options['fields']['field_pl_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pl_featured_image']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $translatables['homepage'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_homepage_properties_lists'),
    t('All'),
    t('Tight Slideshow'),
    t('View panes'),
    t('Properties Lists'),
    t('<a href="/node/[nid]">
    [field_pl_featured_image]
    <div class="overlay">
    <div class="content">[title]</div>
    </div>
    </a>'),
  );
  $export['homepage'] = $view;

  $view = new view();
  $view->name = 'homepage_offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Offers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'roomify_slideshow_paragraph_1200x720';
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'autoplay' => 'autoplay',
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_homepage_slideshow' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_homepage_slideshow']['id'] = 'field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['table'] = 'field_data_field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['field'] = 'field_homepage_slideshow';
  $handler->display->display_options['fields']['field_homepage_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_slideshow']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_slideshow']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_homepage_slideshow']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_slideshow']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage' => 'homepage',
  );

  /* Display: Offers */
  $handler = $view->new_display('panel_pane', 'Offers', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_homepage_offers_target_id']['id'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['relationships']['field_homepage_offers_target_id']['table'] = 'field_data_field_homepage_offers';
  $handler->display->display_options['relationships']['field_homepage_offers_target_id']['field'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['relationships']['field_homepage_offers_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['id'] = 'field_offer_reference_target_id';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['table'] = 'field_data_field_offer_reference';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['field'] = 'field_offer_reference_target_id';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['relationship'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_offer_image']['id'] = 'field_offer_image';
  $handler->display->display_options['fields']['field_offer_image']['table'] = 'field_data_field_offer_image';
  $handler->display->display_options['fields']['field_offer_image']['field'] = 'field_offer_image';
  $handler->display->display_options['fields']['field_offer_image']['relationship'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['fields']['field_offer_image']['label'] = '';
  $handler->display->display_options['fields']['field_offer_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_offer_image']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_offer_description']['id'] = 'field_offer_description';
  $handler->display->display_options['fields']['field_offer_description']['table'] = 'field_data_field_offer_description';
  $handler->display->display_options['fields']['field_offer_description']['field'] = 'field_offer_description';
  $handler->display->display_options['fields']['field_offer_description']['relationship'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['fields']['field_offer_description']['label'] = '';
  $handler->display->display_options['fields']['field_offer_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_offer_description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_offer_description']['alter']['more_link_text'] = 'read more';
  $handler->display->display_options['fields']['field_offer_description']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_offer_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_offer_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_offer_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offer_description']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_offer_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'homepage' => 'homepage',
  );
  /* Filter criterion: Content: Image (field_offer_image:fid) */
  $handler->display->display_options['filters']['field_offer_image_fid']['id'] = 'field_offer_image_fid';
  $handler->display->display_options['filters']['field_offer_image_fid']['table'] = 'field_data_field_offer_image';
  $handler->display->display_options['filters']['field_offer_image_fid']['field'] = 'field_offer_image_fid';
  $handler->display->display_options['filters']['field_offer_image_fid']['relationship'] = 'field_homepage_offers_target_id';
  $handler->display->display_options['filters']['field_offer_image_fid']['operator'] = 'not empty';
  $translatables['homepage_offers'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Offers'),
    t('Content entity referenced from field_homepage_offers'),
    t('Roomify Rate entity referenced from field_offer_reference'),
    t('read more'),
    t('View panes'),
  );
  $export['homepage_offers'] = $view;

  return $export;
}
