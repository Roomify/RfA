<?php

/**
 * @file
 * roomify_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'roomify_location_map_paragraph';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Roomify Location Map Paragraph';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'How to get here';
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
  $handler->display->display_options['style_options']['description_field'] = 'variable_1';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '800';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['icon']['iconUrl'] = file_create_url(drupal_get_path('module', 'roomify_mapping')) . '/images/marker[node:field_accommodation].png';
  $handler->display->display_options['style_options']['icon']['iconSize']['x'] = '26';
  $handler->display->display_options['style_options']['icon']['iconSize']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['x'] = '12';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['x'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['x'] = '1';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['y'] = '-34';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="messages messages--warning">1. To view your vacation rental on the map please add longitude and latitude info in the location page for the accommodation.<br>2. To help visitors find you, <a href="/node/add/location">create departure points from key locations</a>, such as the closest airport, train station, interstate highway, etc. They will also be able to see directions from those points to your place.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Get Directions from [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable']['id'] = 'variable';
  $handler->display->display_options['fields']['variable']['table'] = 'views';
  $handler->display->display_options['fields']['variable']['field'] = 'variable';
  $handler->display->display_options['fields']['variable']['label'] = '';
  $handler->display->display_options['fields']['variable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable']['alter']['text'] = '13';
  $handler->display->display_options['fields']['variable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['variable']['variable_name'] = 'roomify_mapping_location_accommodation';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title]
';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'getdirections/locations/[nid]/[variable]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Map Coordinates */
  $handler->display->display_options['fields']['field_map_coordinates']['id'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['table'] = 'field_data_field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['field'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_map_coordinates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[title_1]</strong><br />
[field_address]<br />
[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Accomodation */
  $handler->display->display_options['fields']['field_accommodation']['id'] = 'field_accommodation';
  $handler->display->display_options['fields']['field_accommodation']['table'] = 'field_data_field_accommodation';
  $handler->display->display_options['fields']['field_accommodation']['field'] = 'field_accommodation';
  $handler->display->display_options['fields']['field_accommodation']['label'] = '';
  $handler->display->display_options['fields']['field_accommodation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_accommodation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_accommodation']['alter']['text'] = '<strong>[title_1]</strong><br />
[field_address]';
  $handler->display->display_options['fields']['field_accommodation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accommodation']['empty'] = '[nothing]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'Get directions to [title_2]';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['path'] = 'getdirections/location/to/[nid_1]';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="activity-image">[field_activity_image]</div>
<div class="description-text">
<strong><a href="/node/[nid_1]">[title_1]</a></strong><br />
[field_address]<br />
[title_2]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable_1']['id'] = 'variable_1';
  $handler->display->display_options['fields']['variable_1']['table'] = 'views';
  $handler->display->display_options['fields']['variable_1']['field'] = 'variable';
  $handler->display->display_options['fields']['variable_1']['label'] = '';
  $handler->display->display_options['fields']['variable_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['alter']['text'] = '[field_accommodation]';
  $handler->display->display_options['fields']['variable_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable_1']['empty'] = '[nothing_1]';
  $handler->display->display_options['fields']['variable_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['variable_name'] = 'roomify_mapping_location_accommodation';
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
    'location' => 'location',
  );

  /* Display: Single Location Map */
  $handler = $view->new_display('panel_pane', 'Single Location Map', 'single_location_map');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_map_coordinates';
  $handler->display->display_options['style_options']['description_field'] = 'variable_1';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['icon']['iconUrl'] = file_create_url(drupal_get_path('module', 'roomify_mapping')) . '/images/marker[node:field_accommodation].png';
  $handler->display->display_options['style_options']['icon']['iconSize']['x'] = '26';
  $handler->display->display_options['style_options']['icon']['iconSize']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['x'] = '12';
  $handler->display->display_options['style_options']['icon']['iconAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['x'] = '41';
  $handler->display->display_options['style_options']['icon']['shadowAnchor']['y'] = '41';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['x'] = '1';
  $handler->display->display_options['style_options']['icon']['popupAnchor']['y'] = '-34';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Get Directions from [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable']['id'] = 'variable';
  $handler->display->display_options['fields']['variable']['table'] = 'views';
  $handler->display->display_options['fields']['variable']['field'] = 'variable';
  $handler->display->display_options['fields']['variable']['label'] = '';
  $handler->display->display_options['fields']['variable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['variable']['alter']['text'] = '13';
  $handler->display->display_options['fields']['variable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['variable']['variable_name'] = 'roomify_mapping_location_accommodation';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[title]
';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'getdirections/locations/[nid]/[variable]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Map Coordinates */
  $handler->display->display_options['fields']['field_map_coordinates']['id'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['table'] = 'field_data_field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['field'] = 'field_map_coordinates';
  $handler->display->display_options['fields']['field_map_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_map_coordinates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_map_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_map_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_map_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong>[title_1]</strong><br />
[field_address]<br />
[nid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'Get directions to [title_2]';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['path'] = 'getdirections/location/to/[nid_1]';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="description-text">
<strong><a href="/node/[nid_1]">[title_1]</a></strong><br />
[field_address]<br />
[title_2]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: System variable */
  $handler->display->display_options['fields']['variable_1']['id'] = 'variable_1';
  $handler->display->display_options['fields']['variable_1']['table'] = 'views';
  $handler->display->display_options['fields']['variable_1']['field'] = 'variable';
  $handler->display->display_options['fields']['variable_1']['label'] = '';
  $handler->display->display_options['fields']['variable_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['alter']['text'] = '[field_accommodation]';
  $handler->display->display_options['fields']['variable_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['variable_1']['empty'] = '[nothing_1]';
  $handler->display->display_options['fields']['variable_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['variable_1']['variable_name'] = 'roomify_mapping_location_accommodation';
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
    'activity' => 'activity',
    'location' => 'location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['roomify_location_map_paragraph'] = array(
    t('Master'),
    t('How to get here'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="messages messages--warning">1. To view your vacation rental on the map please add longitude and latitude info in the location page for the accommodation.<br>2. To help visitors find you, <a href="/node/add/location">create departure points from key locations</a>, such as the closest airport, train station, interstate highway, etc. They will also be able to see directions from those points to your place.</div>'),
    t('Get Directions from [title]'),
    t('13'),
    t('[title]
'),
    t('<strong>[title_1]</strong><br />
[field_address]<br />
[nid]'),
    t('<strong>[title_1]</strong><br />
[field_address]'),
    t('[nothing]'),
    t('Get directions to [title_2]'),
    t('<div class="activity-image">[field_activity_image]</div>
<div class="description-text">
<strong><a href="/node/[nid_1]">[title_1]</a></strong><br />
[field_address]<br />
[title_2]
</div>'),
    t('[field_accommodation]'),
    t('[nothing_1]'),
    t('Single Location Map'),
    t('<div class="description-text">
<strong><a href="/node/[nid_1]">[title_1]</a></strong><br />
[field_address]<br />
[title_2]
</div>'),
    t('All'),
    t('View panes'),
  );
  $export['roomify_location_map_paragraph'] = $view;

  $view = new view();
  $view->name = 'roomify_slideshow_paragraph';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'Roomify Slideshow Paragraph';
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
  $handler->display->display_options['style_options']['optionset'] = 'roomify_slideshow_paragraph_1200x720';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_cta_gallery' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Paragraphs item: Gallery */
  $handler->display->display_options['fields']['field_cta_gallery']['id'] = 'field_cta_gallery';
  $handler->display->display_options['fields']['field_cta_gallery']['table'] = 'field_data_field_cta_gallery';
  $handler->display->display_options['fields']['field_cta_gallery']['field'] = 'field_cta_gallery';
  $handler->display->display_options['fields']['field_cta_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_cta_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cta_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cta_gallery']['settings'] = array(
    'image_style' => 'roomify_slideshow_paragraph',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cta_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_cta_gallery']['delta_offset'] = '0';
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'slideshow' => 'slideshow',
  );

  /* Display: 1200x550 */
  $handler = $view->new_display('panel_pane', '1200x550', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['optionset'] = 'roomify_slideshow_paragraph';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_cta_gallery' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: 1200x720 */
  $handler = $view->new_display('panel_pane', '1200x720', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Paragraphs item: Gallery */
  $handler->display->display_options['fields']['field_cta_gallery']['id'] = 'field_cta_gallery';
  $handler->display->display_options['fields']['field_cta_gallery']['table'] = 'field_data_field_cta_gallery';
  $handler->display->display_options['fields']['field_cta_gallery']['field'] = 'field_cta_gallery';
  $handler->display->display_options['fields']['field_cta_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_cta_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cta_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cta_gallery']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cta_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_cta_gallery']['delta_offset'] = '0';
  $translatables['roomify_slideshow_paragraph'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('1200x550'),
    t('View panes'),
    t('1200x720'),
  );
  $export['roomify_slideshow_paragraph'] = $view;

  return $export;
}
