<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_offers_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'special_offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_rates';
  $view->human_name = 'Special Offers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'offer_start_date' => 'offer_start_date',
    'offer_end_date' => 'offer_end_date',
    'offer_property_reference' => 'offer_property_reference',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
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
    'offer_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'offer_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'offer_property_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Roomify Rate: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Offer';
  /* Field: Roomify Rate: Offer Start Date */
  $handler->display->display_options['fields']['offer_start_date']['id'] = 'offer_start_date';
  $handler->display->display_options['fields']['offer_start_date']['table'] = 'field_data_offer_start_date';
  $handler->display->display_options['fields']['offer_start_date']['field'] = 'offer_start_date';
  $handler->display->display_options['fields']['offer_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Rate: Offer End Date */
  $handler->display->display_options['fields']['offer_end_date']['id'] = 'offer_end_date';
  $handler->display->display_options['fields']['offer_end_date']['table'] = 'field_data_offer_end_date';
  $handler->display->display_options['fields']['offer_end_date']['field'] = 'offer_end_date';
  $handler->display->display_options['fields']['offer_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: COUNT(DISTINCT Roomify Rate: Property) */
  $handler->display->display_options['fields']['offer_property_reference']['id'] = 'offer_property_reference';
  $handler->display->display_options['fields']['offer_property_reference']['table'] = 'field_data_offer_property_reference';
  $handler->display->display_options['fields']['offer_property_reference']['field'] = 'offer_property_reference';
  $handler->display->display_options['fields']['offer_property_reference']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['offer_property_reference']['label'] = 'Property number';
  $handler->display->display_options['fields']['offer_property_reference']['separator'] = '';
  /* Field: Roomify Rate: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  /* Field: Roomify Rate: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  /* Filter criterion: Roomify Rate: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'roomify_rates';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'special_offer_percentage' => 'special_offer_percentage',
    'special_offer' => 'special_offer',
  );

  /* Display: Admin */
  $handler = $view->new_display('block', 'Admin', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Rate: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Offer';
  /* Field: Roomify Rate: Offer Start Date */
  $handler->display->display_options['fields']['offer_start_date']['id'] = 'offer_start_date';
  $handler->display->display_options['fields']['offer_start_date']['table'] = 'field_data_offer_start_date';
  $handler->display->display_options['fields']['offer_start_date']['field'] = 'offer_start_date';
  $handler->display->display_options['fields']['offer_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Rate: Offer End Date */
  $handler->display->display_options['fields']['offer_end_date']['id'] = 'offer_end_date';
  $handler->display->display_options['fields']['offer_end_date']['table'] = 'field_data_offer_end_date';
  $handler->display->display_options['fields']['offer_end_date']['field'] = 'offer_end_date';
  $handler->display->display_options['fields']['offer_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: COUNT(DISTINCT Roomify Rate: Property) */
  $handler->display->display_options['fields']['offer_property_reference']['id'] = 'offer_property_reference';
  $handler->display->display_options['fields']['offer_property_reference']['table'] = 'field_data_offer_property_reference';
  $handler->display->display_options['fields']['offer_property_reference']['field'] = 'offer_property_reference';
  $handler->display->display_options['fields']['offer_property_reference']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['offer_property_reference']['label'] = 'Property number';
  $handler->display->display_options['fields']['offer_property_reference']['separator'] = '';
  /* Field: Roomify Rate: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  /* Field: Roomify Rate: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  /* Field: Roomify Rate: Offer Page */
  $handler->display->display_options['fields']['offer_node_reference']['id'] = 'offer_node_reference';
  $handler->display->display_options['fields']['offer_node_reference']['table'] = 'field_data_offer_node_reference';
  $handler->display->display_options['fields']['offer_node_reference']['field'] = 'offer_node_reference';
  $handler->display->display_options['fields']['offer_node_reference']['label'] = '';
  $handler->display->display_options['fields']['offer_node_reference']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['offer_node_reference']['alter']['text'] = 'view page';
  $handler->display->display_options['fields']['offer_node_reference']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['offer_node_reference']['alter']['path'] = 'node/[offer_node_reference-target_id]';
  $handler->display->display_options['fields']['offer_node_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['offer_node_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['offer_node_reference']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );

  /* Display: User */
  $handler = $view->new_display('block', 'User', 'block_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no offers available to participate in at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Rate: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Offer';
  /* Field: Roomify Rate: Join offer Link */
  $handler->display->display_options['fields']['join_link']['id'] = 'join_link';
  $handler->display->display_options['fields']['join_link']['table'] = 'roomify_rates';
  $handler->display->display_options['fields']['join_link']['field'] = 'join_link';
  $handler->display->display_options['fields']['join_link']['label'] = '';
  $handler->display->display_options['fields']['join_link']['element_label_colon'] = FALSE;
  $translatables['special_offers'] = array(
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
    t('Offer'),
    t('Offer Start Date'),
    t('Offer End Date'),
    t('Property number'),
    t('Admin'),
    t('view page'),
    t('User'),
    t('There are no offers available to participate in at this time.'),
  );

  $views['special_offers'] = $view;

  $view = new view();
  $view->name = 'offer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offer';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_properties_participating']['id'] = 'field_properties_participating';
  $handler->display->display_options['fields']['field_properties_participating']['table'] = 'field_data_field_properties_participating';
  $handler->display->display_options['fields']['field_properties_participating']['field'] = 'field_properties_participating';
  $handler->display->display_options['fields']['field_properties_participating']['label'] = '';
  $handler->display->display_options['fields']['field_properties_participating']['element_label_colon'] = FALSE;
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
    'offer' => 'offer',
  );

  /* Display: Participating properties */
  $handler = $view->new_display('panel_pane', 'Participating properties', 'panel_pane_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Load more properties';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '6';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'property-col';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['id'] = 'field_offer_reference_target_id';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['table'] = 'field_data_field_offer_reference';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['field'] = 'field_offer_reference_target_id';
  $handler->display->display_options['relationships']['field_offer_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['offer_property_reference_target_id']['id'] = 'offer_property_reference_target_id';
  $handler->display->display_options['relationships']['offer_property_reference_target_id']['table'] = 'field_data_offer_property_reference';
  $handler->display->display_options['relationships']['offer_property_reference_target_id']['field'] = 'offer_property_reference_target_id';
  $handler->display->display_options['relationships']['offer_property_reference_target_id']['relationship'] = 'field_offer_reference_target_id';
  $handler->display->display_options['relationships']['offer_property_reference_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['relationship'] = 'offer_property_reference_target_id';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'field_data_field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['relationship'] = 'offer_property_reference_target_id';
  $handler->display->display_options['fields']['field_sp_area']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sp_area']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_area']['delta_offset'] = '0';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'offer_property_reference_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<table>
           <tbody>
            <tr>
              <td class="property-name">[name]<div class="location">[field_sp_area]</div></td>
            </tr>
          </tbody>
          </table>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'offer' => 'offer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Roomify Property: Area (field_sp_area) */
  $handler->display->display_options['filters']['field_sp_area_tid']['id'] = 'field_sp_area_tid';
  $handler->display->display_options['filters']['field_sp_area_tid']['table'] = 'field_data_field_sp_area';
  $handler->display->display_options['filters']['field_sp_area_tid']['field'] = 'field_sp_area_tid';
  $handler->display->display_options['filters']['field_sp_area_tid']['relationship'] = 'offer_property_reference_target_id';
  $handler->display->display_options['filters']['field_sp_area_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sp_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sp_area_tid']['expose']['operator_id'] = 'field_sp_area_tid_op';
  $handler->display->display_options['filters']['field_sp_area_tid']['expose']['label'] = 'Area';
  $handler->display->display_options['filters']['field_sp_area_tid']['expose']['operator'] = 'field_sp_area_tid_op';
  $handler->display->display_options['filters']['field_sp_area_tid']['expose']['identifier'] = 'field_sp_area_tid';
  $handler->display->display_options['filters']['field_sp_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['field_sp_area_tid']['group_info']['label'] = 'Area (field_sp_area)';
  $handler->display->display_options['filters']['field_sp_area_tid']['group_info']['identifier'] = 'field_sp_area_tid';
  $handler->display->display_options['filters']['field_sp_area_tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_sp_area_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  $handler->display->display_options['filters']['field_sp_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sp_area_tid']['vocabulary'] = 'location';
  /* Filter criterion: Roomify Property: Area Type (field_sp_area_type) */
  $handler->display->display_options['filters']['field_sp_area_type_tid']['id'] = 'field_sp_area_type_tid';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['table'] = 'field_data_field_sp_area_type';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['field'] = 'field_sp_area_type_tid';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['relationship'] = 'offer_property_reference_target_id';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sp_area_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sp_area_type_tid']['expose']['operator_id'] = 'field_sp_area_type_tid_op';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['expose']['label'] = 'Area Type';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['expose']['operator'] = 'field_sp_area_type_tid_op';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['expose']['identifier'] = 'field_sp_area_type_tid';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['field_sp_area_type_tid']['group_info']['label'] = 'Area Type (field_sp_area_type)';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['group_info']['identifier'] = 'field_sp_area_type_tid';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  $handler->display->display_options['filters']['field_sp_area_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['vocabulary'] = 'area_type';
  $handler->display->display_options['filters']['field_sp_area_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['offer'] = array(
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
    t('Participating properties'),
    t('Load more properties'),
    t('Roomify Rate entity referenced from field_offer_reference'),
    t('Roomify Property entity referenced from offer_property_reference'),
    t('<table>
           <tbody>
            <tr>
              <td class="property-name">[name]<div class="location">[field_sp_area]</div></td>
            </tr>
          </tbody>
          </table>'),
    t('Area'),
    t('Area (field_sp_area)'),
    t('Area Type'),
    t('Area Type (field_sp_area_type)'),
    t('View panes'),
  );

  $views['offer'] = $view;

  return $views;
}
