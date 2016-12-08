<?php

/**
 * @file
 * roomify_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'property';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Property';
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
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'property_slider';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_sp_gallery' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
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

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'property_id' => array(
      'type' => 'none',
      'context' => 'entity:roomify_property.property-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Roomify Property: Roomify property ID',
    ),
  );

  /* Display: User details */
  $handler = $view->new_display('panel_pane', 'User details', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['id'] = 'field_sp_owner_target_id';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['table'] = 'field_data_field_sp_owner';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['field'] = 'field_sp_owner_target_id';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'field_sp_owner_target_id';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'property_owner' => 'property_owner',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['property_owner_image']['id'] = 'property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['table'] = 'field_data_property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['field'] = 'property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['property_owner_image']['label'] = '';
  $handler->display->display_options['fields']['property_owner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_owner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['property_owner_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['property_owner_name']['id'] = 'property_owner_name';
  $handler->display->display_options['fields']['property_owner_name']['table'] = 'field_data_property_owner_name';
  $handler->display->display_options['fields']['property_owner_name']['field'] = 'property_owner_name';
  $handler->display->display_options['fields']['property_owner_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['property_owner_name']['label'] = '';
  $handler->display->display_options['fields']['property_owner_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_owner_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );

  /* Display: Property Types */
  $handler = $view->new_display('panel_pane', 'Property Types', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'field_st_gallery',
    'field_st_gallery' => 'field_st_gallery',
    'field_st_description' => 'field_st_description',
    'field_st_amenities' => 'field_st_description',
    'field_st_max_capacity' => 'field_st_max_capacity',
    'beds' => 'beds',
    'booking_cost' => 'booking_cost',
    'book_this' => 'book_this',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
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
    'icon_size' => 'toggle-medium',
    'hide' => array(
      'name' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_st_gallery' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_st_description' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_st_amenities' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_st_max_capacity' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'beds' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'booking_cost' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'book_this' => array(
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
  /* Field: Type: Name */
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

  /* Display: Property Map */
  $handler = $view->new_display('panel_pane', 'Property Map', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'roomify_property';
  $handler->display->display_options['style_options']['data_source'] = 'field_sp_location';
  $handler->display->display_options['style_options']['name_field'] = 'name';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['view_mode'] = 'token';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '11';
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
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Roomify Property: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'field_data_field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['label'] = '';
  $handler->display->display_options['fields']['field_sp_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Location */
  $handler->display->display_options['fields']['field_sp_location_1']['id'] = 'field_sp_location_1';
  $handler->display->display_options['fields']['field_sp_location_1']['table'] = 'field_data_field_sp_location';
  $handler->display->display_options['fields']['field_sp_location_1']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location_1']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_sp_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Address */
  $handler->display->display_options['fields']['field_sp_address']['id'] = 'field_sp_address';
  $handler->display->display_options['fields']['field_sp_address']['table'] = 'field_data_field_sp_address';
  $handler->display->display_options['fields']['field_sp_address']['field'] = 'field_sp_address';
  $handler->display->display_options['fields']['field_sp_address']['label'] = '';
  $handler->display->display_options['fields']['field_sp_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_address']['settings'] = array(
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="address">[field_sp_address]</div>
  <div class="point">[field_sp_location_1]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  $translatables['property'] = array(
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
    t('Slideshow'),
    t('View panes'),
    t('User details'),
    t('User entity referenced from field_sp_owner'),
    t('Profile'),
    t('Property Types'),
    t('Type entity referenced from property_bat_type_reference'),
    t('<div class="type-description">[field_st_description]</div>'),
    t('Max Capacity'),
    t('Beds'),
    t('Cost'),
    t('Property Map'),
    t('.'),
    t(','),
    t('Label'),
  );

  $export['property'] = $view;

  $view = new view();
  $view->name = 'types';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bat_types';
  $view->human_name = 'Types';
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
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['asnavfor_auto'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'property_slider';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_st_gallery' => 0,
    'field_st_gallery_1' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Type: Type Gallery */
  $handler->display->display_options['fields']['field_st_gallery']['id'] = 'field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery']['table'] = 'field_data_field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery']['field'] = 'field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_st_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_st_gallery']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_st_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_st_gallery']['delta_offset'] = '0';
  /* Field: Type: Type Gallery */
  $handler->display->display_options['fields']['field_st_gallery_1']['id'] = 'field_st_gallery_1';
  $handler->display->display_options['fields']['field_st_gallery_1']['table'] = 'field_data_field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery_1']['field'] = 'field_st_gallery';
  $handler->display->display_options['fields']['field_st_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_st_gallery_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_st_gallery_1']['alter']['text'] = '<div class="title">[field_st_gallery_1-title]</div>
              <div class="alt">[field_st_gallery_1-alt]</div>';
  $handler->display->display_options['fields']['field_st_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_st_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_st_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_st_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_st_gallery_1']['delta_offset'] = '0';
  /* Contextual filter: Type: Type ID */
  $handler->display->display_options['arguments']['type_id']['id'] = 'type_id';
  $handler->display->display_options['arguments']['type_id']['table'] = 'bat_types';
  $handler->display->display_options['arguments']['type_id']['field'] = 'type_id';
  $handler->display->display_options['arguments']['type_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['type_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['type_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type_id']['summary_options']['items_per_page'] = '25';

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Other Rooms */
  $handler = $view->new_display('panel_pane', 'Other Rooms', 'panel_pane_2');

  $export['types'] = $view;

  return $export;
}
