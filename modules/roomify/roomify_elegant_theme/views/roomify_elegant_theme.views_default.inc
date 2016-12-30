<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_elegant_theme_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'blog_elegant';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_blogposts_index';
  $view->human_name = 'Blog Elegant';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Node: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Node: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'blog_post_image',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p><div><span><strong><br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'continue-reading';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Continue →';

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_1');
  $translatables['blog_elegant'] = array(
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
    t('Continue →'),
    t('List'),
    t('View panes'),
  );
  $views['blog_elegant'] = $view;

  $view = new view();
  $view->name = 'activities_elegant';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_things_to_do_index';
  $view->human_name = 'Activities Elegant';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_activity_image']['id'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['field_activity_image']['field'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['label'] = '';
  $handler->display->display_options['fields']['field_activity_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_activity_image']['settings'] = array(
    'image_style' => 'roomify_wide_normal',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_activity_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_activity_image']['delta_offset'] = '0';
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p><div><span><strong><br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'continue-reading';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Continue →';

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_1');
  $translatables['activities_elegant'] = array(
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
    t('Continue →'),
    t('List'),
    t('View panes'),
  );
  $views['activities_elegant'] = $view;

  $view = new view();
  $view->name = 'activities_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activities Map';
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
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_map_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title_field';
  $handler->display->display_options['style_options']['description_field'] = 'field_activity_image';
  $handler->display->display_options['style_options']['map'] = 'google-high-res';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Field: Content: Map Coordinates */
  $handler->display->display_options['fields']['field_map_coordinates']['id'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['table'] = 'field_data_field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['field'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_map_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map_coordinates']['settings'] = array(
    'data' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_activity_image']['id'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['table'] = 'field_data_field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['field'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['label'] = '';
  $handler->display->display_options['fields']['field_activity_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_activity_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_activity_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_activity_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'activity' => 'activity',
  );

  /* Display: Map */
  $handler = $view->new_display('panel_pane', 'Map', 'panel_pane_1');
  $translatables['activities_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Map'),
    t('View panes'),
  );
  $views['activities_map'] = $view;

  $view = new view();
  $view->name = 'property_slideshow_elegant';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Property Slideshow Elegant';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 1;
  $handler->display->display_options['style_options']['id'] = 'slick-asnavfor';
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'property_slideshow';
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'dots' => 'dots',
    'autoplay' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['skin_thumbnail'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_sp_gallery' => 0,
    'field_sp_gallery_1' => 0,
  );
  $handler->display->display_options['style_options']['slide_image'] = 'field_sp_gallery';
  $handler->display->display_options['style_options']['slide_overlay'] = 'field_sp_gallery_1';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Roomify Property: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery']['id'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['delta_offset'] = '0';
  /* Field: Roomify Property: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery_1']['id'] = 'field_sp_gallery_1';
  $handler->display->display_options['fields']['field_sp_gallery_1']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_1']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['alter']['text'] = '<div class="title">[field_sp_gallery_1-title]</div>
    <div class="description">[field_sp_gallery_1-alt]</div>';
  $handler->display->display_options['fields']['field_sp_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['delta_offset'] = '0';
  /* Contextual filter: Roomify Property: Roomify property ID */
  $handler->display->display_options['arguments']['property_id']['id'] = 'property_id';
  $handler->display->display_options['arguments']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['arguments']['property_id']['field'] = 'property_id';
  $handler->display->display_options['arguments']['property_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['property_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['property_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['property_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['property_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['property_id']['summary_options']['items_per_page'] = '25';
  $translatables['property_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="title">[field_sp_gallery_1-title]</div>
    <div class="description">[field_sp_gallery_1-alt]</div>'),
    t('All'),
  );
  $views['property_slideshow_elegant'] = $view;

  $view = new view();
  $view->name = 'property_elegant';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'property_elegant';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['optionset'] = 'property_slider';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_sp_gallery' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Roomify Property: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery']['id'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery']['settings'] = array(
    'image_style' => 'property_slider',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['delta_offset'] = '0';
  /* Field: Roomify Property: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery_1']['id'] = 'field_sp_gallery_1';
  $handler->display->display_options['fields']['field_sp_gallery_1']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_1']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['alter']['text'] = '<div class="title">[field_sp_gallery_1-title]</div>
                <div class="alt">[field_sp_gallery_1-alt]</div>';
  $handler->display->display_options['fields']['field_sp_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['delta_offset'] = '0';
  /* Contextual filter: Roomify Property: Roomify property ID */
  $handler->display->display_options['arguments']['property_id']['id'] = 'property_id';
  $handler->display->display_options['arguments']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['arguments']['property_id']['field'] = 'property_id';
  $handler->display->display_options['arguments']['property_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['property_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['property_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['property_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['property_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['property_id']['summary_options']['items_per_page'] = '25';

  /* Display: Property Types */
  $handler = $view->new_display('panel_pane', 'Property Types', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['property_bat_type_reference_target_id']['id'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['relationships']['property_bat_type_reference_target_id']['table'] = 'field_data_property_bat_type_reference';
  $handler->display->display_options['relationships']['property_bat_type_reference_target_id']['field'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['relationships']['property_bat_type_reference_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Type: Type ID */
  $handler->display->display_options['fields']['type_id']['id'] = 'type_id';
  $handler->display->display_options['fields']['type_id']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type_id']['field'] = 'type_id';
  $handler->display->display_options['fields']['type_id']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['type_id']['label'] = '';
  $handler->display->display_options['fields']['type_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_id']['element_label_colon'] = FALSE;
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'room-type/[type_id]';
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Type: Type Gallery */
  $handler->display->display_options['fields']['field_st_gallery']['id'] = 'field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery']['table'] = 'field_data_field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery']['field'] = 'field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_st_gallery']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_st_gallery']['alter']['path'] = 'room-type/[type_id]';
  $handler->display->display_options['fields']['field_st_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_st_gallery']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_st_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_st_gallery']['delta_offset'] = '0';
  /* Field: Type: Description */
  $handler->display->display_options['fields']['field_st_description']['id'] = 'field_st_description';
  $handler->display->display_options['fields']['field_st_description']['table'] = 'field_data_field_st_description';
  $handler->display->display_options['fields']['field_st_description']['field'] = 'field_st_description';
  $handler->display->display_options['fields']['field_st_description']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_description']['label'] = '';
  $handler->display->display_options['fields']['field_st_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_st_description']['alter']['text'] = '<div class="type-description">[field_st_description]</div>';
  $handler->display->display_options['fields']['field_st_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type: Type Amenities */
  $handler->display->display_options['fields']['field_st_amenities']['id'] = 'field_st_amenities';
  $handler->display->display_options['fields']['field_st_amenities']['table'] = 'field_data_field_st_amenities';
  $handler->display->display_options['fields']['field_st_amenities']['field'] = 'field_st_amenities';
  $handler->display->display_options['fields']['field_st_amenities']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_amenities']['label'] = '';
  $handler->display->display_options['fields']['field_st_amenities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_amenities']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_st_amenities']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_st_amenities']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_st_amenities']['separator'] = ' - ';
  /* Field: Type: Max Capacity */
  $handler->display->display_options['fields']['field_st_max_capacity']['id'] = 'field_st_max_capacity';
  $handler->display->display_options['fields']['field_st_max_capacity']['table'] = 'field_data_field_st_max_capacity';
  $handler->display->display_options['fields']['field_st_max_capacity']['field'] = 'field_st_max_capacity';
  $handler->display->display_options['fields']['field_st_max_capacity']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_max_capacity']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type: Beds */
  $handler->display->display_options['fields']['beds']['id'] = 'beds';
  $handler->display->display_options['fields']['beds']['table'] = 'bat_types';
  $handler->display->display_options['fields']['beds']['field'] = 'beds';
  $handler->display->display_options['fields']['beds']['relationship'] = 'property_bat_type_reference_target_id';
  /* Field: Type: Booking cost */
  $handler->display->display_options['fields']['booking_cost']['id'] = 'booking_cost';
  $handler->display->display_options['fields']['booking_cost']['table'] = 'bat_types';
  $handler->display->display_options['fields']['booking_cost']['field'] = 'booking_cost';
  $handler->display->display_options['fields']['booking_cost']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['booking_cost']['label'] = 'Cost';
  /* Field: Type: Book This Link */
  $handler->display->display_options['fields']['book_this']['id'] = 'book_this';
  $handler->display->display_options['fields']['book_this']['table'] = 'bat_types';
  $handler->display->display_options['fields']['book_this']['field'] = 'book_this';
  $handler->display->display_options['fields']['book_this']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['book_this']['label'] = '';
  $handler->display->display_options['fields']['book_this']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Roomify Property: Roomify property ID */
  $handler->display->display_options['arguments']['property_id']['id'] = 'property_id';
  $handler->display->display_options['arguments']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['arguments']['property_id']['field'] = 'property_id';
  $handler->display->display_options['arguments']['property_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['property_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['property_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['property_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['property_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['property_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Type: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'bat_types';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['filters']['status']['value']['value'] = '1';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['property_elegant'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="title">[field_sp_gallery_1-title]</div>
                <div class="alt">[field_sp_gallery_1-alt]</div>'),
    t('All'),
    t('Property Types'),
    t('Type entity referenced from property_bat_type_reference'),
    t('.'),
    t(','),
    t('<div class="type-description">[field_st_description]</div>'),
    t('Max Capacity'),
    t('Beds'),
    t('Cost'),
    t('View panes'),
  );
  $views['property_elegant'] = $view;

  return $views;
}
