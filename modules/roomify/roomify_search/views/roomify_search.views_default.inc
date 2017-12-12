<?php

/**
 * @file
 * roomify_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'properties_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_properties_index';
  $view->human_name = 'Properties Index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Unfortunately no property is available for these dates, try others if possible.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Relationship: Indexed Roomify Property: Type */
  $handler->display->display_options['relationships']['property_bat_type_reference']['id'] = 'property_bat_type_reference';
  $handler->display->display_options['relationships']['property_bat_type_reference']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['relationships']['property_bat_type_reference']['field'] = 'property_bat_type_reference';
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Types List */
  $handler->display->display_options['fields']['property_types']['id'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_types']['field'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['label'] = '';
  $handler->display->display_options['fields']['property_types']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Filter criterion: Indexed Roomify Property: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Available Properties */
  $handler = $view->new_display('panel_pane', 'Available Properties', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['alter']['text'] = '<span class="glyphicon glyphicon-map-marker"></span>[field_sp_area]';
  $handler->display->display_options['fields']['field_sp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area']['bypass_access'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['text'] = '<span class="glyphicon glyphicon-list-alt"></span>[field_sp_short_description]';
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Types List */
  $handler->display->display_options['fields']['property_types']['id'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_types']['field'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['label'] = '';
  $handler->display->display_options['fields']['property_types']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
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
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Available Properties Map */
  $handler = $view->new_display('panel_pane', 'Available Properties Map', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Map View';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'roomify_property';
  $handler->display->display_options['style_options']['data_source'] = 'field_sp_location';
  $handler->display->display_options['style_options']['name_field'] = 'name';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['view_mode'] = 'token';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['path'] = 'listing/[property_id]';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Types List */
  $handler->display->display_options['fields']['property_types']['id'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_types']['field'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['label'] = '';
  $handler->display->display_options['fields']['property_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_types']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="roomify-property-short-description">[field_sp_short_description]</div>
      <div class="roomify-property-image">[field_sp_featured_image]</div>';
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
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Grid View */
  $handler = $view->new_display('panel_pane', 'Grid View', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Types List */
  $handler->display->display_options['fields']['property_types']['id'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_types']['field'] = 'property_types';
  $handler->display->display_options['fields']['property_types']['label'] = '';
  $handler->display->display_options['fields']['property_types']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_types']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '<div class="featured-image-with-description">
          [field_sp_featured_image] 
          <div class="property-info">
            <div class="description">[field_sp_short_description]</div>
            <div class="property-types-table">[property_types]</div>
          </div>
        </div>';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="property-info">
            <div class="description">[field_sp_short_description]</div>
            <div class="types">[property_types]</div>
          </div>';
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

  /* Display: Details View */
  $handler = $view->new_display('panel_pane', 'Details View', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Offers joined */
  $handler->display->display_options['fields']['participating_offer']['id'] = 'participating_offer';
  $handler->display->display_options['fields']['participating_offer']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['participating_offer']['field'] = 'participating_offer';
  $handler->display->display_options['fields']['participating_offer']['label'] = '';
  $handler->display->display_options['fields']['participating_offer']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['max_length'] = '110';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area']['bypass_access'] = 0;
  /* Field: Indexed Roomify Property: Property type */
  $handler->display->display_options['fields']['field_sp_property_type']['id'] = 'field_sp_property_type';
  $handler->display->display_options['fields']['field_sp_property_type']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_property_type']['field'] = 'field_sp_property_type';
  $handler->display->display_options['fields']['field_sp_property_type']['label'] = '';
  $handler->display->display_options['fields']['field_sp_property_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_property_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_property_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_property_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_property_type']['bypass_access'] = 0;
  /* Field: Indexed Roomify Property: Starging Room Price */
  $handler->display->display_options['fields']['starting_type_price']['id'] = 'starting_type_price';
  $handler->display->display_options['fields']['starting_type_price']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['starting_type_price']['field'] = 'starting_type_price';
  $handler->display->display_options['fields']['starting_type_price']['label'] = '';
  $handler->display->display_options['fields']['starting_type_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['starting_type_price']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: N. of single beds of the largest Room */
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['id'] = 'roomify_search_handler_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['field'] = 'roomify_search_handler_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: N. of Bathrooms of the largest Room */
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['id'] = 'roomify_search_handler_bathrooms_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['field'] = 'roomify_search_handler_bathrooms_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: N. of double beds of the largest Room */
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['id'] = 'roomify_search_handler_double_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['field'] = 'roomify_search_handler_double_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: The Property Capacity */
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['id'] = 'roomify_search_handler_property_capacity';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['field'] = 'roomify_search_handler_property_capacity';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Area Type */
  $handler->display->display_options['fields']['field_sp_area_type']['id'] = 'field_sp_area_type';
  $handler->display->display_options['fields']['field_sp_area_type']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_area_type']['field'] = 'field_sp_area_type';
  $handler->display->display_options['fields']['field_sp_area_type']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_area_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area_type']['bypass_access'] = 0;
  /* Field: Indexed Roomify Property: Average rating */
  $handler->display->display_options['fields']['average_rating']['id'] = 'average_rating';
  $handler->display->display_options['fields']['average_rating']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['average_rating']['field'] = 'average_rating';
  $handler->display->display_options['fields']['average_rating']['label'] = '';
  $handler->display->display_options['fields']['average_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['average_rating']['precision'] = '0';
  $handler->display->display_options['fields']['average_rating']['separator'] = '';
  $handler->display->display_options['fields']['average_rating']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Number of reviews */
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['id'] = 'roomify_search_handler_reviews_number';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['field'] = 'roomify_search_handler_reviews_number';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="name">[name]</div>
    <div class="short-description">[field_sp_short_description]</div>
    <table>
      <tbody>
        <tr>
          <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
          <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[roomify_search_handler_beds_largest_room]</td>
          <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[roomify_search_handler_double_beds_largest_room]</td>
          <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[roomify_search_handler_bathrooms_largest_room]</td>
        </tr>
        <tr>
          <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
          <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
          <td data-toggle="tooltip" data-html="true" title="Property Type" data-placement="top" class="property-type">[field_sp_property_type]</td>
         </tr>
       </tbody>
      </table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'property-details';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="reviews">[roomify_search_handler_reviews_number]</div>
  <div class="price">[starting_type_price]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'property-details-2';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Card View */
  $handler = $view->new_display('panel_pane', 'Card View', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-lg-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['preserve_tags'] = '<p> <span>';
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Number of reviews */
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['id'] = 'roomify_search_handler_reviews_number';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['field'] = 'roomify_search_handler_reviews_number';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_reviews_number']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Starging Room Price */
  $handler->display->display_options['fields']['starting_type_price']['id'] = 'starting_type_price';
  $handler->display->display_options['fields']['starting_type_price']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['starting_type_price']['field'] = 'starting_type_price';
  $handler->display->display_options['fields']['starting_type_price']['label'] = '';
  $handler->display->display_options['fields']['starting_type_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['starting_type_price']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: N. of Bathrooms of the largest Room */
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['id'] = 'roomify_search_handler_bathrooms_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['field'] = 'roomify_search_handler_bathrooms_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_bathrooms_largest_room']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: N. of double beds of the largest Room */
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['id'] = 'roomify_search_handler_double_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['field'] = 'roomify_search_handler_double_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_double_beds_largest_room']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: The Property Capacity */
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['id'] = 'roomify_search_handler_property_capacity';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['field'] = 'roomify_search_handler_property_capacity';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_property_capacity']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: N. of single beds of the largest Room */
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['id'] = 'roomify_search_handler_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['field'] = 'roomify_search_handler_beds_largest_room';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['label'] = '';
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['roomify_search_handler_beds_largest_room']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="property-info">
      <div class="content">
        <div class="title">[name]</div>
        <div class="description">[field_sp_short_description]</div>
    
     
        <div class="info">
  <table>
    <tbody>
      <tr>
        <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
        <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[roomify_search_handler_beds_largest_room]</td>
        <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[roomify_search_handler_double_beds_largest_room]</td>
        <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[roomify_search_handler_bathrooms_largest_room]</td>
      </tr>
    </tbody>
  </table>
       </div>
       </div>
       <div class="sidebar">
        <div class="reviews-number">[roomify_search_handler_reviews_number]</div>
        <div class="price">[starting_type_price]</div>
       </div>
    </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Roomify Property: Average rating */
  $handler->display->display_options['fields']['average_rating']['id'] = 'average_rating';
  $handler->display->display_options['fields']['average_rating']['table'] = 'search_api_index_properties_index';
  $handler->display->display_options['fields']['average_rating']['field'] = 'average_rating';
  $handler->display->display_options['fields']['average_rating']['label'] = '';
  $handler->display->display_options['fields']['average_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['average_rating']['precision'] = '0';
  $handler->display->display_options['fields']['average_rating']['link_to_entity'] = 0;
  $translatables['properties_index'] = array(
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
    t('Unfortunately no property is available for these dates, try others if possible.'),
    t('Type'),
    t('.'),
    t(','),
    t('Location'),
    t('Available Properties'),
    t('<span class="glyphicon glyphicon-map-marker"></span>[field_sp_area]'),
    t('<span class="glyphicon glyphicon-list-alt"></span>[field_sp_short_description]'),
    t('View panes'),
    t('Available Properties Map'),
    t('Map View'),
    t('<div class="roomify-property-short-description">[field_sp_short_description]</div>
        <div class="roomify-property-image">[field_sp_featured_image]</div>'),
    t('Grid View'),
    t('<div class="featured-image-with-description">
            [field_sp_featured_image] 
            <div class="property-info">
              <div class="description">[field_sp_short_description]</div>
              <div class="property-types-table">[property_types]</div>
            </div>
          </div>'),
    t('<div class="property-info">
              <div class="description">[field_sp_short_description]</div>
              <div class="types">[property_types]</div>
            </div>'),
    t('Details View'),
    t('<div class="name">[name]</div>
      <div class="short-description">[field_sp_short_description]</div>
      <table>
        <tbody>
          <tr>
            <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
            <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[roomify_search_handler_beds_largest_room]</td>
            <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[roomify_search_handler_double_beds_largest_room]</td>
            <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[roomify_search_handler_bathrooms_largest_room]</td>
          </tr>
          <tr>
            <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
            <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
            <td data-toggle="tooltip" data-html="true" title="Property Type" data-placement="top" class="property-type">[field_sp_property_type]</td>
           </tr>
         </tbody>
        </table>'),
    t('<div class="reviews">[roomify_search_handler_reviews_number]</div>
    <div class="price">[starting_type_price]</div>'),
    t('Card View'),
    t('Load more'),
    t('<div class="property-info">
      <div class="content">
        <div class="title">[name]</div>
        <div class="description">[field_sp_short_description]</div>
    
     
        <div class="info">
  <table>
    <tbody>
      <tr>
        <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
        <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[roomify_search_handler_beds_largest_room]</td>
        <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[roomify_search_handler_double_beds_largest_room]</td>
        <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[roomify_search_handler_bathrooms_largest_room]</td>
      </tr>
    </tbody>
  </table>
       </div>
       </div>
       <div class="sidebar">
        <div class="reviews-number">[roomify_search_handler_reviews_number]</div>
        <div class="price">[starting_type_price]</div>
       </div>
    </div>'),
  );

  $export['properties_index'] = $view;

  $view = new view();
  $view->name = 'activities_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_activities_index';
  $view->human_name = 'Activities Index';
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
  /* Field: Indexed Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'search_api_index_activities_index';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_activities_index';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_activities_index';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_activities_index';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['text'] = '<span class="glyphicon glyphicon-list-alt"></span>[field_sp_short_description]';
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );

  /* Display: List View */
  $handler = $view->new_display('panel_pane', 'List View', 'panel_pane_1');

  $export['activities_index'] = $view;

  return $export;
}
