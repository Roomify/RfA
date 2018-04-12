<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_travel_theme_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'property_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Property Slideshow';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_thumbnail'] = 'field_sp_gallery_2';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 1;
  $handler->display->display_options['style_options']['id'] = 'slick-asnavfor';
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'property_slideshow';
  $handler->display->display_options['style_options']['optionset_thumbnail'] = 'property_slideshow_nav';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['skin_thumbnail'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_sp_gallery' => 0,
    'field_sp_gallery_1' => 0,
    'field_sp_gallery_2' => 0,
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
  /* Field: Roomify Property: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery_2']['id'] = 'field_sp_gallery_2';
  $handler->display->display_options['fields']['field_sp_gallery_2']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_2']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_2']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery_2']['settings'] = array(
    'image_style' => 'slideshow_thumbnail',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_2']['delta_offset'] = '0';
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

  /* Display: Property Slideshow (single) */
  $handler = $view->new_display('panel_pane', 'Property Slideshow (single)', 'panel_pane_1');

  /* Display: Property Slideshow */
  $handler = $view->new_display('panel_pane', 'Property Slideshow', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    t('Property Slideshow (single)'),
    t('View panes'),
    t('Property Slideshow'),
  );
  $views['property_slideshow'] = $view;

  $view = new view();
  $view->name = 'blog_travel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_blogposts_index';
  $view->human_name = 'Blog Travel';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'roomify_blog_image',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Title */
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
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'D, d M, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-default btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Sort criterion: Indexed Content: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Blogposts */
  $handler = $view->new_display('panel_pane', 'Blogposts', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Add to Any buttons */
  $handler->display->display_options['fields']['addtoany']['id'] = 'addtoany';
  $handler->display->display_options['fields']['addtoany']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['addtoany']['field'] = 'addtoany';
  $handler->display->display_options['fields']['addtoany']['label'] = '';
  $handler->display->display_options['fields']['addtoany']['exclude'] = TRUE;
  $handler->display->display_options['fields']['addtoany']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['text'] = '<div class="blogpost-image">
     [addtoany]
     [field_featured_image] 
    </div>';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'roomify_blog_image',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Title */
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
  /* Field: Indexed Content: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'D, d M, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <span> <br>';
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
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-default btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Homepage */
  $handler = $view->new_display('panel_pane', 'Homepage', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'blog-col';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a class="view-more-blog btn btn-default btn-primary" href="/blog">view more</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Featured Blogpost */
  $handler->display->display_options['filters']['field_featured_blogpost']['id'] = 'field_featured_blogpost';
  $handler->display->display_options['filters']['field_featured_blogpost']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['filters']['field_featured_blogpost']['field'] = 'field_featured_blogpost';
  $handler->display->display_options['filters']['field_featured_blogpost']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Related posts (category) */
  $handler = $view->new_display('panel_pane', 'Related posts (category)', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Content: Categories */
  $handler->display->display_options['relationships']['field_blog_categories']['id'] = 'field_blog_categories';
  $handler->display->display_options['relationships']['field_blog_categories']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['relationships']['field_blog_categories']['field'] = 'field_blog_categories';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '',
    'title_link' => 'content',
    'title_class' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<span><a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="title">[title_field]</div>
  [body]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Content: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 1;
  /* Contextual filter: Indexed Content: Categories */
  $handler->display->display_options['arguments']['field_blog_categories']['id'] = 'field_blog_categories';
  $handler->display->display_options['arguments']['field_blog_categories']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['arguments']['field_blog_categories']['field'] = 'field_blog_categories';
  $handler->display->display_options['arguments']['field_blog_categories']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_blog_categories']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_blog_categories']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_blog_categories']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_blog_categories']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_blog_categories']['default_argument_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['field_blog_categories']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_blog_categories']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_blog_categories']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Featured Blogpost */
  $handler->display->display_options['filters']['field_featured_blogpost']['id'] = 'field_featured_blogpost';
  $handler->display->display_options['filters']['field_featured_blogpost']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['filters']['field_featured_blogpost']['field'] = 'field_featured_blogpost';
  $handler->display->display_options['filters']['field_featured_blogpost']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_featured_blogpost']['value'] = array();
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['blog_travel'] = array(
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
    t('Date created'),
    t('Read More'),
    t('Blogposts'),
    t('.'),
    t(','),
    t('<div class="blogpost-image">
     [addtoany]
     [field_featured_image] 
    </div>'),
    t('View panes'),
    t('Homepage'),
    t('<a class="view-more-blog btn btn-default btn-primary" href="/blog">view more</a>'),
    t('Related posts (category)'),
    t('Categories'),
    t('<div class="title">[title_field]</div>
  [body]'),
    t('All'),
  );

  $views['blog_travel'] = $view;

  $view = new view();
  $view->name = 'things_to_do_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_things_to_do_index';
  $view->human_name = 'Things to do Index';
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
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_activity_image']['id'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['field_activity_image']['field'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['label'] = '';
  $handler->display->display_options['fields']['field_activity_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_activity_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_activity_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_activity_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '220';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
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
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-default btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';

  /* Display: Things to do List */
  $handler = $view->new_display('panel_pane', 'Things to do List', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_activity_image']['id'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['field_activity_image']['field'] = 'field_activity_image';
  $handler->display->display_options['fields']['field_activity_image']['label'] = '';
  $handler->display->display_options['fields']['field_activity_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_activity_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_activity_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_activity_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Node: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '220';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <span> <br>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Node: Add to Any buttons */
  $handler->display->display_options['fields']['addtoany']['id'] = 'addtoany';
  $handler->display->display_options['fields']['addtoany']['table'] = 'search_api_index_things_to_do_index';
  $handler->display->display_options['fields']['addtoany']['field'] = 'addtoany';
  $handler->display->display_options['fields']['addtoany']['label'] = '';
  $handler->display->display_options['fields']['addtoany']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-default btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['things_to_do_index'] = array(
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
    t('.'),
    t(','),
    t('Read More'),
    t('Things to do List'),
    t('View panes'),
  );

  $views['things_to_do_index'] = $view;

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
  $translatables['homepage_travel'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Slideshow'),
    t('View panes'),
  );

  $views['homepage_travel'] = $view;

  $view = new view();
  $view->name = 'areas_travel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Areas Travel';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'location' => 'location',
  );

  /* Display: All Areas */
  $handler = $view->new_display('panel_pane', 'All Areas', 'all_areas_view');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Featured Image */
  $handler->display->display_options['fields']['field_area_featured_image']['id'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['table'] = 'field_data_field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['field'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_area_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_area_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Short Description */
  $handler->display->display_options['fields']['field_area_short_description']['id'] = 'field_area_short_description';
  $handler->display->display_options['fields']['field_area_short_description']['table'] = 'field_data_field_area_short_description';
  $handler->display->display_options['fields']['field_area_short_description']['field'] = 'field_area_short_description';
  $handler->display->display_options['fields']['field_area_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_area_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Area blogposts */
  $handler->display->display_options['fields']['roomify_area_blogposts']['id'] = 'roomify_area_blogposts';
  $handler->display->display_options['fields']['roomify_area_blogposts']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['roomify_area_blogposts']['field'] = 'roomify_area_blogposts';
  $handler->display->display_options['fields']['roomify_area_blogposts']['label'] = '';
  $handler->display->display_options['fields']['roomify_area_blogposts']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_area_blogposts']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<h2>[name]</h2>
  <div class="area-short-description">[field_area_short_description]</div>
  <div class="area-blog-posts">[roomify_area_blogposts]</div>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Area Properties */
  $handler->display->display_options['fields']['area_properties']['id'] = 'area_properties';
  $handler->display->display_options['fields']['area_properties']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['area_properties']['field'] = 'area_properties';
  $handler->display->display_options['fields']['area_properties']['label'] = '';
  $handler->display->display_options['fields']['area_properties']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a  href="/taxonomy/term/[tid]" class="btn btn-default btn-primary">View Area</a>';
  $handler->display->display_options['fields']['nothing']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['areas_travel'] = array(
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
    t('All Areas'),
    t('Show more'),
    t('.'),
    t('<h2>[name]</h2>
  <div class="area-short-description">[field_area_short_description]</div>
  <div class="area-blog-posts">[roomify_area_blogposts]</div>'),
    t('<a  href="/taxonomy/term/[tid]" class="btn btn-default btn-primary">View Area</a>'),
    t('View panes'),
  );

  $views['areas_travel'] = $view;

  $view = new view();
  $view->name = 'property_travel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Property Travel';
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
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'type_id' => 'type_id',
    'type_calendar_reference' => 'type_calendar_reference',
    'name' => 'field_st_gallery',
    'field_st_gallery' => 'field_st_gallery',
    'field_st_description' => 'field_st_description',
    'field_st_amenities' => 'field_st_amenities',
    'field_st_max_capacity' => 'field_st_max_capacity',
    'beds' => 'beds',
    'booking_cost' => 'booking_cost',
    'book_this' => 'book_this',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type_calendar_reference' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_gallery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_amenities' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_st_max_capacity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'beds' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_cost' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'book_this' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'name',
    'icon' => 'toggle-arrow',
    'icon_size' => '',
    'hide' => array(
      'type_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'type_calendar_reference' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_st_gallery' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_st_description' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'field_st_amenities' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'field_st_max_capacity' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'beds' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'booking_cost' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'book_this' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
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
  $handler->display->display_options['fields']['field_st_amenities']['element_wrapper_class'] = 'room-type-amenities';
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
  /* Field: Roomify Property: Type Calendar reference */
  $handler->display->display_options['fields']['type_calendar_reference']['id'] = 'type_calendar_reference';
  $handler->display->display_options['fields']['type_calendar_reference']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['type_calendar_reference']['field'] = 'type_calendar_reference';
  $handler->display->display_options['fields']['type_calendar_reference']['label'] = '';
  $handler->display->display_options['fields']['type_calendar_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_calendar_reference']['element_label_colon'] = FALSE;
  /* Field: Type: Book This Link */
  $handler->display->display_options['fields']['book_this']['id'] = 'book_this';
  $handler->display->display_options['fields']['book_this']['table'] = 'bat_types';
  $handler->display->display_options['fields']['book_this']['field'] = 'book_this';
  $handler->display->display_options['fields']['book_this']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['book_this']['label'] = '';
  $handler->display->display_options['fields']['book_this']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['book_this']['alter']['text'] = '[type_calendar_reference] 
  [book_this]';
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

  /* Display: Property Types List */
  $handler = $view->new_display('panel_pane', 'Property Types List', 'panel_pane_1');
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
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Type: Bathrooms */
  $handler->display->display_options['fields']['field_st_bathrooms']['id'] = 'field_st_bathrooms';
  $handler->display->display_options['fields']['field_st_bathrooms']['table'] = 'field_data_field_st_bathrooms';
  $handler->display->display_options['fields']['field_st_bathrooms']['field'] = 'field_st_bathrooms';
  $handler->display->display_options['fields']['field_st_bathrooms']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_bathrooms']['label'] = '';
  $handler->display->display_options['fields']['field_st_bathrooms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_st_bathrooms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_bathrooms']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type: Max Capacity */
  $handler->display->display_options['fields']['field_st_max_capacity']['id'] = 'field_st_max_capacity';
  $handler->display->display_options['fields']['field_st_max_capacity']['table'] = 'field_data_field_st_max_capacity';
  $handler->display->display_options['fields']['field_st_max_capacity']['field'] = 'field_st_max_capacity';
  $handler->display->display_options['fields']['field_st_max_capacity']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_max_capacity']['label'] = '';
  $handler->display->display_options['fields']['field_st_max_capacity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_st_max_capacity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_max_capacity']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type: Double beds */
  $handler->display->display_options['fields']['field_st_double_bed']['id'] = 'field_st_double_bed';
  $handler->display->display_options['fields']['field_st_double_bed']['table'] = 'field_data_field_st_double_bed';
  $handler->display->display_options['fields']['field_st_double_bed']['field'] = 'field_st_double_bed';
  $handler->display->display_options['fields']['field_st_double_bed']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_double_bed']['label'] = '';
  $handler->display->display_options['fields']['field_st_double_bed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_st_double_bed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_double_bed']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Type: Single Beds */
  $handler->display->display_options['fields']['field_st_single_bed']['id'] = 'field_st_single_bed';
  $handler->display->display_options['fields']['field_st_single_bed']['table'] = 'field_data_field_st_single_bed';
  $handler->display->display_options['fields']['field_st_single_bed']['field'] = 'field_st_single_bed';
  $handler->display->display_options['fields']['field_st_single_bed']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_single_bed']['label'] = '';
  $handler->display->display_options['fields']['field_st_single_bed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_st_single_bed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_single_bed']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
        <tbody>
          <tr>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="capacity" data-original-title="Max Capacity">[field_st_max_capacity]</td>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="single-beds" data-original-title="Single Beds">[field_st_single_bed]</td>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="double-beds" data-original-title="Double Beds">[field_st_double_bed]</td>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="bathrooms" data-original-title="Bathrooms">[field_st_bathrooms]</td>
          </tr>
         </tbody>
        </table>';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'property-details';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_st_amenities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_st_amenities']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_st_amenities']['delta_offset'] = '0';
  /* Field: Type: Type Gallery */
  $handler->display->display_options['fields']['field_st_gallery_1']['id'] = 'field_st_gallery_1';
  $handler->display->display_options['fields']['field_st_gallery_1']['table'] = 'field_data_field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery_1']['field'] = 'field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery_1']['relationship'] = 'property_bat_type_reference_target_id';
  $handler->display->display_options['fields']['field_st_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_st_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_st_gallery_1']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_st_gallery_1']['settings'] = array(
    'colorbox_node_style' => 'roomify_thumbnail_squared',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_st_gallery_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_st_gallery_1']['separator'] = '';
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
  $translatables['property_travel'] = array(
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
    t('[type_calendar_reference] 
    [book_this]'),
    t('View panes'),
    t('Property Types List'),
    t('<table>
        <tbody>
          <tr>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="capacity" data-original-title="Max Capacity">[field_st_max_capacity]</td>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="single-beds" data-original-title="Single Beds">[field_st_single_bed]</td>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="double-beds" data-original-title="Double Beds">[field_st_double_bed]</td>
            <td data-toggle="tooltip" data-html="true" title="" data-placement="top" class="bathrooms" data-original-title="Bathrooms">[field_st_bathrooms]</td>
          </tr>
         </tbody>
        </table>'),
  );
  $views['property_travel'] = $view;

  $view = new view();
  $view->name = 'area_travel_blogposts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Area travel blogposts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'posts about area';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Featured Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'roomify_blog_image',
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
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
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
    'blog' => 'blog',
  );

  /* Display: Area Latest Blogposts. */
  $handler = $view->new_display('panel_pane', 'Area Latest Blogposts.', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['area_travel_blogposts'] = array(
    t('Master'),
    t('posts about area'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Area Latest Blogposts.'),
    t('Nid'),
    t('All'),
    t('View panes'),
  );
  $views['area_travel_blogposts'] = $view;

  $view = new view();
  $view->name = 'blog_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_blogposts_index';
  $view->human_name = 'Blog Categories';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: CER » Context */
  $handler->display->display_options['fields']['cer_lineage']['id'] = 'cer_lineage';
  $handler->display->display_options['fields']['cer_lineage']['table'] = 'search_api_index_blogposts_index';
  $handler->display->display_options['fields']['cer_lineage']['field'] = 'cer_lineage';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_blog_categories';
  $translatables['blog_categories'] = array(
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
    t('CER » Context'),
    t('Facets block'),
  );
  $views['blog_categories'] = $view;

  $view = new view();
  $view->name = 'single_property_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Single Property gallery';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
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

  /* Display: Gallery */
  $handler = $view->new_display('panel_pane', 'Gallery', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span id="property-gallery-tab"></span>Images Gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'gallery-item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery']['id'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_sp_gallery']['settings'] = array(
    'colorbox_node_style' => 'homepage_features',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sp_gallery']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Roomify Property: Image Gallery (field_sp_gallery:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  );
  $translatables['single_property_gallery'] = array(
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
    t('Roomify property ID'),
    t('.'),
    t(','),
    t('All'),
    t('Gallery'),
    t('<span id="property-gallery-tab"></span>Images Gallery'),
    t('View panes'),
  );
  $views['single_property_gallery'] = $view;

  return $views;
}
