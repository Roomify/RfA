<?php

/**
 * @file
 * roomify_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'availability_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Availability calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Availability calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view the availability global calendar';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'availability_calendar_plugin_one_row';
  $handler->display->display_options['style_options']['event_type'] = 'availability';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/bat/config/availability-calendar';
  $translatables['availability_calendar'] = array(
    t('Master'),
    t('Availability calendar'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Roomify property ID'),
    t('.'),
    t(','),
    t('Page'),
  );
  $export['availability_calendar'] = $view;

  $view = new view();
  $view->name = 'dashboard_bookings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bat_bookings';
  $view->human_name = 'Dashboard Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bookings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'label' => 'label',
    'booking_id' => 'booking_id',
    'property_id' => 'property_id',
    'name_1' => 'name_1',
    'name' => 'name',
    'booking_guest_name' => 'booking_guest_name',
    'booking_start_date' => 'booking_start_date',
    'booking_end_date' => 'booking_end_date',
    'nights' => 'nights',
    'booking_price' => 'booking_price',
    'field_bcom_total_price' => 'field_bcom_total_price',
    'booking_price_1' => 'booking_price_1',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_guest_name' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nights' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_total_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_price_1' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_unit' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_unit' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'name',
    'icon' => 'toggle-arrow-small',
    'icon_size' => '',
    'hide' => array(
      'uid' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'label' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_guest_name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_start_date' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'booking_end_date' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'nights' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'booking_price' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'field_bcom_total_price' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_price_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'edit_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'delete_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'type' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_unit']['text'] = 'Cancel';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Contextual filter: BAT Booking: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'bat_bookings';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['uid']['validate_options']['code'] = 'if (user_access(\'update any bat_booking entity\')) {
                      return FALSE;
                      }
                      else {
                      return TRUE;
                      }';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['group'] = 1;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator_id'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['label'] = 'State (event_state_reference)';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['identifier'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    163670334 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'update own bat_booking entities';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'booking_guest_name' => 'booking_guest_name',
    'label' => 'label',
    'booking_id' => 'booking_id',
    'property_id' => 'property_id',
    'name_1' => 'name_1',
    'name' => 'name',
    'booking_start_date' => 'booking_start_date',
    'booking_end_date' => 'booking_end_date',
    'nights' => 'nights',
    'booking_price' => 'booking_price',
    'field_bcom_total_price' => 'field_bcom_total_price',
    'booking_price_1' => 'booking_price_1',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
    'type' => 'type',
    'uid' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'booking_guest_name' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nights' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_total_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_price_1' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_unit' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_unit' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'name',
    'icon' => 'toggle-arrow-small',
    'icon_size' => '',
    'hide' => array(
      'booking_guest_name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'label' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_start_date' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'booking_end_date' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'nights' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'booking_price' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'field_bcom_total_price' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_price_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'edit_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'delete_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'type' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'uid' => array(
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
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: BAT Booking: Booking Guest name */
  $handler->display->display_options['fields']['booking_guest_name']['id'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_guest_name']['field'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['label'] = 'Guest';
  $handler->display->display_options['fields']['booking_guest_name']['link_to_entity'] = 0;
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking Price */
  $handler->display->display_options['fields']['booking_price_1']['id'] = 'booking_price_1';
  $handler->display->display_options['fields']['booking_price_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_price_1']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price_1']['label'] = 'Price';
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_unit']['text'] = 'Cancel';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: BAT Booking: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'bat_bookings';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: BAT Booking: Created */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'bat_bookings';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['group'] = 1;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator_id'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['label'] = 'State (event_state_reference)';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['identifier'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    163670334 => 0,
  );
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Property';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['booking_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['booking_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator_id'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['identifier'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['booking_start_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: BAT Booking: End Date (booking_end_date) */
  $handler->display->display_options['filters']['booking_end_date_value']['id'] = 'booking_end_date_value';
  $handler->display->display_options['filters']['booking_end_date_value']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['filters']['booking_end_date_value']['field'] = 'booking_end_date_value';
  $handler->display->display_options['filters']['booking_end_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['booking_end_date_value']['group'] = 1;
  $handler->display->display_options['filters']['booking_end_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['operator_id'] = 'booking_end_date_value_op';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['operator'] = 'booking_end_date_value_op';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['identifier'] = 'booking_end_date_value';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['booking_end_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'admin/bat/bookings';

  /* Display: Future Bookings */
  $handler = $view->new_display('panel_pane', 'Future Bookings', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all bookings';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'label' => 'label',
    'booking_id' => 'booking_id',
    'property_id' => 'property_id',
    'name_1' => 'name_1',
    'name' => 'name',
    'booking_guest_name' => 'booking_guest_name',
    'booking_start_date' => 'booking_start_date',
    'booking_end_date' => 'booking_end_date',
    'nights' => 'nights',
    'booking_price' => 'booking_price',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_guest_name' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nights' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_unit' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_unit' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'name',
    'icon' => 'toggle-arrow-small',
    'icon_size' => '',
    'hide' => array(
      'uid' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'label' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_guest_name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_start_date' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'booking_end_date' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'nights' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'booking_price' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'edit_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'delete_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'type' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Future bookings (sorted by most recently booked)</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Booking Guest name */
  $handler->display->display_options['fields']['booking_guest_name']['id'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_guest_name']['field'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['label'] = 'Guest';
  $handler->display->display_options['fields']['booking_guest_name']['link_to_entity'] = 0;
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking Price */
  $handler->display->display_options['fields']['booking_price_1']['id'] = 'booking_price_1';
  $handler->display->display_options['fields']['booking_price_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_price_1']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price_1']['label'] = 'Price';
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_unit']['text'] = 'Cancel';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: BAT Booking: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'bat_bookings';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator_id'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['label'] = 'State (event_state_reference)';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['identifier'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    163670334 => 0,
  );
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'BAT Booking: Uid',
    ),
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_line_item_reference_target_id']['id'] = 'booking_line_item_reference_target_id';
  $handler->display->display_options['relationships']['booking_line_item_reference_target_id']['table'] = 'field_data_booking_line_item_reference';
  $handler->display->display_options['relationships']['booking_line_item_reference_target_id']['field'] = 'booking_line_item_reference_target_id';
  /* Relationship: Commerce Line Item: Order ID */
  $handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
  $handler->display->display_options['relationships']['order_id']['relationship'] = 'booking_line_item_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking Price */
  $handler->display->display_options['fields']['booking_price_1']['id'] = 'booking_price_1';
  $handler->display->display_options['fields']['booking_price_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_price_1']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price_1']['label'] = 'Price';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: BAT Booking: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: BAT Booking: iCal type */
  $handler->display->display_options['fields']['field_ical_type']['id'] = 'field_ical_type';
  $handler->display->display_options['fields']['field_ical_type']['table'] = 'field_data_field_ical_type';
  $handler->display->display_options['fields']['field_ical_type']['field'] = 'field_ical_type';
  $handler->display->display_options['fields']['field_ical_type']['label'] = '';
  $handler->display->display_options['fields']['field_ical_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ical_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ical_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: User: First Name */
  $handler->display->display_options['fields']['user_first_name']['id'] = 'user_first_name';
  $handler->display->display_options['fields']['user_first_name']['table'] = 'field_data_user_first_name';
  $handler->display->display_options['fields']['user_first_name']['field'] = 'user_first_name';
  $handler->display->display_options['fields']['user_first_name']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_first_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['user_last_name']['id'] = 'user_last_name';
  $handler->display->display_options['fields']['user_last_name']['table'] = 'field_data_user_last_name';
  $handler->display->display_options['fields']['user_last_name']['field'] = 'user_last_name';
  $handler->display->display_options['fields']['user_last_name']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'booking_user_guest_target_id';
  /* Field: User: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['user_address_locality']['id'] = 'user_address_locality';
  $handler->display->display_options['fields']['user_address_locality']['table'] = 'field_data_user_address';
  $handler->display->display_options['fields']['user_address_locality']['field'] = 'user_address_locality';
  $handler->display->display_options['fields']['user_address_locality']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_address_locality']['label'] = 'Locality (i.e. City)';
  /* Field: User: Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['user_address_administrative_area']['id'] = 'user_address_administrative_area';
  $handler->display->display_options['fields']['user_address_administrative_area']['table'] = 'field_data_user_address';
  $handler->display->display_options['fields']['user_address_administrative_area']['field'] = 'user_address_administrative_area';
  $handler->display->display_options['fields']['user_address_administrative_area']['relationship'] = 'booking_user_guest_target_id';
  /* Field: User: Address - Country */
  $handler->display->display_options['fields']['user_address_country']['id'] = 'user_address_country';
  $handler->display->display_options['fields']['user_address_country']['table'] = 'field_data_user_address';
  $handler->display->display_options['fields']['user_address_country']['field'] = 'user_address_country';
  $handler->display->display_options['fields']['user_address_country']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['user_address_country']['display_name'] = 1;
  /* Field: User: Address - Postal code */
  $handler->display->display_options['fields']['user_address_postal_code']['id'] = 'user_address_postal_code';
  $handler->display->display_options['fields']['user_address_postal_code']['table'] = 'field_data_user_address';
  $handler->display->display_options['fields']['user_address_postal_code']['field'] = 'user_address_postal_code';
  $handler->display->display_options['fields']['user_address_postal_code']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_address_postal_code']['label'] = 'Postal code';
  /* Field: User: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['user_address_thoroughfare']['id'] = 'user_address_thoroughfare';
  $handler->display->display_options['fields']['user_address_thoroughfare']['table'] = 'field_data_user_address';
  $handler->display->display_options['fields']['user_address_thoroughfare']['field'] = 'user_address_thoroughfare';
  $handler->display->display_options['fields']['user_address_thoroughfare']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_address_thoroughfare']['label'] = 'Thoroughfare (i.e. Street address)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['group'] = 1;
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Label';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['booking_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator_id'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['label'] = 'Start Date (booking_start_date)';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['identifier'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['booking_start_date_value']['form_type'] = 'date_text';
  /* Filter criterion: BAT Booking: End Date (booking_end_date) */
  $handler->display->display_options['filters']['booking_end_date_value']['id'] = 'booking_end_date_value';
  $handler->display->display_options['filters']['booking_end_date_value']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['filters']['booking_end_date_value']['field'] = 'booking_end_date_value';
  $handler->display->display_options['filters']['booking_end_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['booking_end_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['operator_id'] = 'booking_end_date_value_op';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['label'] = 'End Date (booking_end_date)';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['operator'] = 'booking_end_date_value_op';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['identifier'] = 'booking_end_date_value';
  $handler->display->display_options['filters']['booking_end_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['booking_end_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['path'] = 'admin/bat/bookings/export_bookings.csv';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'panel_pane_1' => 0,
  );

  /* Display: Check-ins next 60 days */
  $handler = $view->new_display('panel_pane', 'Check-ins next 60 days', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Bookings';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all bookings';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Upcoming bookings - next 60 days. (Sorted by closest booking date)</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Booking Guest name */
  $handler->display->display_options['fields']['booking_guest_name']['id'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_guest_name']['field'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['label'] = 'Guest';
  $handler->display->display_options['fields']['booking_guest_name']['link_to_entity'] = 0;
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking Price */
  $handler->display->display_options['fields']['booking_price_1']['id'] = 'booking_price_1';
  $handler->display->display_options['fields']['booking_price_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_price_1']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price_1']['label'] = 'Price';
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_unit']['text'] = 'Cancel';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['sorts']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['sorts']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator_id'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['label'] = 'State (event_state_reference)';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['identifier'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    163670334 => 0,
  );
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator_id'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['label'] = 'Start Date (booking_start_date)';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['identifier'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['booking_start_date_value']['default_to_date'] = 'now +60 day';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'BAT Booking: Uid',
    ),
  );

  /* Display: Past Bookings */
  $handler = $view->new_display('panel_pane', 'Past Bookings', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Bookings';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all bookings';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Here you can find a list of past bookings</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Booking Guest name */
  $handler->display->display_options['fields']['booking_guest_name']['id'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_guest_name']['field'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['label'] = 'Guest';
  $handler->display->display_options['fields']['booking_guest_name']['link_to_entity'] = 0;
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking Price */
  $handler->display->display_options['fields']['booking_price_1']['id'] = 'booking_price_1';
  $handler->display->display_options['fields']['booking_price_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_price_1']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price_1']['label'] = 'Price';
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_unit']['text'] = 'Cancel';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['sorts']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['sorts']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator_id'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['label'] = 'State (event_state_reference)';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['identifier'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    163670334 => 0,
  );
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = '3 years ago';
  $handler->display->display_options['filters']['booking_start_date_value']['default_to_date'] = 'now';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'BAT Booking: Uid',
    ),
  );

  /* Display: Next Arrivals */
  $handler = $view->new_display('panel_pane', 'Next Arrivals', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Arrivals';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all bookings';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'label' => 'label',
    'booking_full_name' => 'booking_full_name',
    'booking_id' => 'booking_id',
    'property_id' => 'property_id',
    'name_1' => 'name_1',
    'name' => 'name',
    'booking_start_date' => 'booking_start_date',
    'booking_end_date' => 'booking_end_date',
    'nights' => 'nights',
    'booking_price' => 'booking_price',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_full_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'booking_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nights' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_price' => array(
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'booking_full_name',
    'icon' => 'toggle-arrow',
    'icon_size' => '',
    'hide' => array(
      'label' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'booking_full_name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name' => array(
        'all' => 'all',
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'booking_start_date' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_end_date' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'nights' => array(
        'all' => 'all',
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'booking_price' => array(
        'all' => 'all',
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'edit_unit' => array(
        'all' => 'all',
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'delete_unit' => array(
        'all' => 'all',
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'type' => array(
        'all' => 'all',
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>There are no bookings starting in the next 30 days</h2>';
  $handler->display->display_options['empty']['area']['format'] = 'rich_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['id'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['table'] = 'field_data_event_bat_unit_reference';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['field'] = 'event_bat_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_bat_unit_reference_target_id']['relationship'] = 'booking_event_reference_target_id';
  /* Relationship: Unit: Type */
  $handler->display->display_options['relationships']['type_id']['id'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['relationships']['type_id']['field'] = 'type_id';
  $handler->display->display_options['relationships']['type_id']['relationship'] = 'event_bat_unit_reference_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'type_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: BAT Booking: Booking Guest name */
  $handler->display->display_options['fields']['booking_guest_name']['id'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_guest_name']['field'] = 'booking_guest_name';
  $handler->display->display_options['fields']['booking_guest_name']['label'] = 'Guest';
  $handler->display->display_options['fields']['booking_guest_name']['link_to_entity'] = 0;
  /* Field: BAT Booking: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['label'] = '';
  $handler->display->display_options['fields']['booking_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name']['label'] = 'Property';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [name_1]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['label'] = 'Check-In';
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: End Date */
  $handler->display->display_options['fields']['booking_end_date']['id'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['table'] = 'field_data_booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['field'] = 'booking_end_date';
  $handler->display->display_options['fields']['booking_end_date']['label'] = 'Check-Out';
  $handler->display->display_options['fields']['booking_end_date']['settings'] = array(
    'format_type' => 'bat_daily',
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
  /* Field: BAT Booking: Nights */
  $handler->display->display_options['fields']['nights']['id'] = 'nights';
  $handler->display->display_options['fields']['nights']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['nights']['field'] = 'nights';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking Price */
  $handler->display->display_options['fields']['booking_price_1']['id'] = 'booking_price_1';
  $handler->display->display_options['fields']['booking_price_1']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_price_1']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price_1']['label'] = 'Price';
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = '';
  $handler->display->display_options['fields']['delete_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_unit']['text'] = 'Cancel';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['sorts']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['sorts']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value']['value'] = '4';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator_id'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['label'] = 'State (event_state_reference)';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['operator'] = 'event_state_reference_state_id_op';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['identifier'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    163670334 => 0,
  );
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator_id'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['label'] = 'Start Date (booking_start_date)';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['operator'] = 'booking_start_date_value_op';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['identifier'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['booking_start_date_value']['default_to_date'] = 'now +30 day';
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'BAT Booking: Uid',
    ),
  );
  $translatables['dashboard_bookings'] = array(
    t('Master'),
    t('Bookings'),
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
    t('Events entity referenced from booking_event_reference'),
    t('Unit entity referenced from event_bat_unit_reference'),
    t('Type'),
    t('Roomify Property referencing Type from property_bat_type_reference'),
    t('.'),
    t(','),
    t(' - [name_1]'),
    t('Property'),
    t('[name] [name_1]'),
    t('Check-In'),
    t('Check-Out'),
    t('Nights'),
    t('Price'),
    t('Edit'),
    t('Cancel'),
    t('All'),
    t('State (event_state_reference)'),
    t('Page'),
    t('User entity referenced from booking_user_guest'),
    t('Guest'),
    t('Total Price'),
    t('Uid'),
    t('Start Date'),
    t('End Date'),
    t('Future Bookings'),
    t('View all bookings'),
    t('<h2>Future bookings (sorted by most recently booked)</h2>'),
    t('View panes'),
    t('Data export'),
    t('Commerce Line item entity referenced from booking_line_item_reference'),
    t('Order'),
    t('Provider'),
    t('First Name'),
    t('Last Name'),
    t('E-mail'),
    t('Locality (i.e. City)'),
    t('Address - Administrative area (i.e. State / Province)'),
    t('Country'),
    t('Postal code'),
    t('Thoroughfare (i.e. Street address)'),
    t('Label'),
    t('Start Date (booking_start_date)'),
    t('End Date (booking_end_date)'),
    t('Check-ins next 60 days'),
    t('Upcoming Bookings'),
    t('<h2>Upcoming bookings - next 60 days. (Sorted by closest booking date)</h2>'),
    t('Past Bookings'),
    t('<h2>Here you can find a list of past bookings</h2>'),
    t('Next Arrivals'),
    t('Upcoming Arrivals'),
    t('<h2>There are no bookings starting in the next 30 days</h2>'),
  );

  $export['dashboard_bookings'] = $view;

  $view = new view();
  $view->name = 'dashboard_guest_stays';
  $view->description = 'Display a list of completed orders for a user.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_order';
  $view->human_name = 'My Stays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'My Stays';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own commerce_order entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_id' => 'order_id',
    'property_image' => 'property_image',
    'line_item_title' => 'line_item_title',
    'commerce_order_total' => 'commerce_order_total',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'order_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_image' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'line_item_title' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'line_item_title',
    'icon' => 'toggle-arrow-small',
    'icon_size' => '',
    'hide' => array(
      'order_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_image' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'line_item_title' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'commerce_order_total' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'nothing' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'You have not placed any orders with us yet.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Order: Roomify Property Image */
  $handler->display->display_options['fields']['property_image']['id'] = 'property_image';
  $handler->display->display_options['fields']['property_image']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['property_image']['field'] = 'property_image';
  $handler->display->display_options['fields']['property_image']['label'] = '';
  $handler->display->display_options['fields']['property_image']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['line_item_title']['label'] = 'Your Stay';
  $handler->display->display_options['fields']['line_item_title']['alter']['path'] = '[view_order]';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View Details';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'see booking details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/user/!1/orders/[order_id]';
  /* Contextual filter: Commerce Order: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['validate']['type'] = 'current_user_or_role';
  $handler->display->display_options['arguments']['uid_1']['validate_options']['restrict_roles'] = TRUE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  /* Filter criterion: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';

  /* Display: Dashboard My Stays */
  $handler = $view->new_display('panel_pane', 'Dashboard My Stays', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['link_url'] = '/user/!1/orders';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Here you can find a list of your stays!</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid_1' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Commerce Order: Uid',
    ),
  );

  /* Display: My Stays sidebar */
  $handler = $view->new_display('panel_pane', 'My Stays sidebar', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span class="glyphicon glyphicon-calendar"></span>Upcoming Bookings';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['id'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['field'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Title */
  $handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
  $handler->display->display_options['fields']['line_item_title']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['line_item_title']['label'] = '';
  $handler->display->display_options['fields']['line_item_title']['alter']['path'] = '[view_order]';
  $handler->display->display_options['fields']['line_item_title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'see booking details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/user/!1/orders/[order_id]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['relationship'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['fields']['booking_start_date']['label'] = '';
  $handler->display->display_options['fields']['booking_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_start_date']['settings'] = array(
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['sorts']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['sorts']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value']['relationship'] = 'reverse_booking_line_item_reference_bat_booking';
  /* Sort criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['sorts']['booking_start_date_value_1']['id'] = 'booking_start_date_value_1';
  $handler->display->display_options['sorts']['booking_start_date_value_1']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['sorts']['booking_start_date_value_1']['field'] = 'booking_start_date_value';
  $handler->display->display_options['sorts']['booking_start_date_value_1']['relationship'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );
  /* Filter criterion: Commerce Line Item: Line item is of a product line item type */
  $handler->display->display_options['filters']['product_line_item_type']['id'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['product_line_item_type']['field'] = 'product_line_item_type';
  $handler->display->display_options['filters']['product_line_item_type']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['product_line_item_type']['value'] = '1';
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['relationship'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['booking_start_date_value']['year_range'] = '-3:+0';
  $translatables['dashboard_guest_stays'] = array(
    t('Defaults'),
    t('My Stays'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('You have not placed any orders with us yet.'),
    t('Line items referenced by commerce_line_items'),
    t('Your Stay'),
    t('Total'),
    t('View Details'),
    t('see booking details'),
    t('All'),
    t('Dashboard My Stays'),
    t('View All'),
    t('<h2>Here you can find a list of your stays!</h2>'),
    t('View panes'),
    t('My Stays sidebar'),
    t('<span class="glyphicon glyphicon-calendar"></span>Upcoming Bookings'),
    t('BAT Booking referencing Commerce Line item from booking_line_item_reference'),
  );

  $export['dashboard_guest_stays'] = $view;

  $view = new view();
  $view->name = 'email_templates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'pets';
  $view->human_name = 'Email Templates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Email Templates';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer previewable email templates';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'title' => 'title',
    'language_1' => 'language_1',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 'bordered',
    'hover' => 'hover',
    'condensed' => 'condensed',
  );
  $handler->display->display_options['style_options']['responsive'] = 0;
  /* Field: Previewable Email Template: Internal, numeric previewable email template ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'pets';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Previewable Email Template: Label */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'pets';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Template Name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Previewable Email Template: Machine-readable name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'pets';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Edit Template';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/admin/structure/pets/manage/[name]';
  /* Filter criterion: Previewable Email Template: Language select list */
  $handler->display->display_options['filters']['language_select']['id'] = 'language_select';
  $handler->display->display_options['filters']['language_select']['table'] = 'pets';
  $handler->display->display_options['filters']['language_select']['field'] = 'language_select';
  $handler->display->display_options['filters']['language_select']['group'] = 1;
  $handler->display->display_options['filters']['language_select']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language_select']['expose']['operator_id'] = 'language_select_op';
  $handler->display->display_options['filters']['language_select']['expose']['label'] = 'Language select list';
  $handler->display->display_options['filters']['language_select']['expose']['operator'] = 'language_select_op';
  $handler->display->display_options['filters']['language_select']['expose']['identifier'] = 'language_select';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Previewable Email Template: Internal, numeric previewable email template ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'pets';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Previewable Email Template: Label */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'pets';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Template Name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Previewable Email Template: Language */
  $handler->display->display_options['fields']['language_1']['id'] = 'language_1';
  $handler->display->display_options['fields']['language_1']['table'] = 'pets';
  $handler->display->display_options['fields']['language_1']['field'] = 'language';
  /* Field: Previewable Email Template: Active */
  $handler->display->display_options['fields']['active']['id'] = 'active';
  $handler->display->display_options['fields']['active']['table'] = 'pets';
  $handler->display->display_options['fields']['active']['field'] = 'active';
  $handler->display->display_options['fields']['active']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['active']['alter']['text'] = 'Active';
  $handler->display->display_options['fields']['active']['empty'] = 'Disabled';
  $handler->display->display_options['fields']['active']['empty_zero'] = TRUE;
  /* Field: Previewable Email Template: Machine-readable name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'pets';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Previewable Email Template: Localized Edit link */
  $handler->display->display_options['fields']['localize_edit_link']['id'] = 'localize_edit_link';
  $handler->display->display_options['fields']['localize_edit_link']['table'] = 'pets';
  $handler->display->display_options['fields']['localize_edit_link']['field'] = 'localize_edit_link';
  $handler->display->display_options['fields']['localize_edit_link']['label'] = 'Edit Template';
  $handler->display->display_options['fields']['localize_edit_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/bat/config/email-templates';
  $translatables['email_templates'] = array(
    t('Master'),
    t('Email Templates'),
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
    t('Internal, numeric previewable email template ID'),
    t('.'),
    t(','),
    t('Template Name'),
    t('Edit Template'),
    t('Edit'),
    t('Language select list'),
    t('Page'),
    t('Language'),
    t('Active'),
    t('Disabled'),
  );

  $export['email_templates'] = $view;

  $view = new view();
  $view->name = 'favorite_properties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'My Favorites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Favorite Properties';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: favorites */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'roomify_properties';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'favorites';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['path'] = 'listing/[property_id]';
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
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/listing/[property_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;

  /* Display: Favorites */
  $handler = $view->new_display('panel_pane', 'Favorites', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'property_id' => 'property_id',
    'field_sp_featured_image' => 'field_sp_featured_image',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sp_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '/listing/[property_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h3';
  /* Field: Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['text'] = '<div class="property-name">[name]</div>
  <div class="property-description">[field_sp_short_description]</div>
  ';
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/listing/[property_id]" target="_blank" class="btn btn-success view-property">View Property</a>';
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

  /* Display: Sidebar Favorites */
  $handler = $view->new_display('panel_pane', 'Sidebar Favorites', 'sidebar_favorites');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span class="glyphicon glyphicon-heart"></span>Favorite Properties';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '9';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $translatables['favorite_properties'] = array(
    t('Master'),
    t('Favorite Properties'),
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
    t('flag'),
    t('Roomify property ID'),
    t('.'),
    t(','),
    t('Favorites'),
    t('<div class="property-name">[name]</div>
  <div class="property-description">[field_sp_short_description]</div>
  '),
    t('<a href="/listing/[property_id]" target="_blank" class="btn btn-success view-property">View Property</a>'),
    t('View panes'),
    t('Sidebar Favorites'),
    t('<span class="glyphicon glyphicon-heart"></span>Favorite Properties'),
    t('Load more'),
  );
  $export['favorite_properties'] = $view;

  $view = new view();
  $view->name = 'form_submissions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Form Submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Form Submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any entityform';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
    'created' => 'created',
    'field_contact_first_name' => 'field_contact_first_name',
    'field_contact_last_name' => 'field_contact_last_name',
    'field_contact_mail_address' => 'field_contact_mail_address',
    'field_contact_telephone' => 'field_contact_telephone',
    'field_contact_more_informations' => 'field_contact_more_informations',
    'edit_entityform' => 'edit_entityform',
    'delete_entityform' => 'delete_entityform',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_mail_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_telephone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_more_informations' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no contact form submissions.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'bat_daily';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  /* Field: Entityform Submission: First Name */
  $handler->display->display_options['fields']['field_contact_first_name']['id'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['table'] = 'field_data_field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['field'] = 'field_contact_first_name';
  $handler->display->display_options['fields']['field_contact_first_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Entityform Submission: Last Name */
  $handler->display->display_options['fields']['field_contact_last_name']['id'] = 'field_contact_last_name';
  $handler->display->display_options['fields']['field_contact_last_name']['table'] = 'field_data_field_contact_last_name';
  $handler->display->display_options['fields']['field_contact_last_name']['field'] = 'field_contact_last_name';
  $handler->display->display_options['fields']['field_contact_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Entityform Submission: E-Mail */
  $handler->display->display_options['fields']['field_contact_mail_address']['id'] = 'field_contact_mail_address';
  $handler->display->display_options['fields']['field_contact_mail_address']['table'] = 'field_data_field_contact_mail_address';
  $handler->display->display_options['fields']['field_contact_mail_address']['field'] = 'field_contact_mail_address';
  $handler->display->display_options['fields']['field_contact_mail_address']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Entityform Submission: Telephone */
  $handler->display->display_options['fields']['field_contact_telephone']['id'] = 'field_contact_telephone';
  $handler->display->display_options['fields']['field_contact_telephone']['table'] = 'field_data_field_contact_telephone';
  $handler->display->display_options['fields']['field_contact_telephone']['field'] = 'field_contact_telephone';
  $handler->display->display_options['fields']['field_contact_telephone']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Entityform Submission: More Information */
  $handler->display->display_options['fields']['field_contact_more_informations']['id'] = 'field_contact_more_informations';
  $handler->display->display_options['fields']['field_contact_more_informations']['table'] = 'field_data_field_contact_more_informations';
  $handler->display->display_options['fields']['field_contact_more_informations']['field'] = 'field_contact_more_informations';
  $handler->display->display_options['fields']['field_contact_more_informations']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Edit';
  /* Field: Entityform Submission: Delete Link */
  $handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['label'] = 'Delete ';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Form ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    163670334 => 0,
    85910806 => 0,
  );

  /* Display: Manager Form Submissions */
  $handler = $view->new_display('page', 'Manager Form Submissions', 'page');
  $handler->display->display_options['path'] = 'form-submissions';
  $translatables['form_submissions'] = array(
    t('Master'),
    t('Contact Form Submissions'),
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
    t('There are no contact form submissions.'),
    t('Entityform submission ID'),
    t('.'),
    t(','),
    t('Date submitted'),
    t('First Name'),
    t('Last Name'),
    t('E-Mail'),
    t('Telephone'),
    t('More Information'),
    t('Edit'),
    t('Delete '),
    t('Form '),
    t('Manager Form Submissions'),
  );
  $export['form_submissions'] = $view;

  $view = new view();
  $view->name = 'properties';
  $view->description = 'View of Properties shown on user dashboard';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Properties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Properties';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'update own roomify_property entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'status' => 'status',
    'property_id' => 'property_id',
    'type' => 'type',
    'field_sp_featured_image' => 'field_sp_featured_image',
    'name' => 'name',
    'edit_unit' => 'edit_unit',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sp_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'edit_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'name',
    'icon' => 'toggle-arrow-small',
    'icon_size' => '',
    'hide' => array(
      'status' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'type' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_sp_featured_image' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'edit_unit' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'nothing' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'nothing_1' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a class="button add-property-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/bat/config/property/wizard/nojs">add property</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>You don\'t have any properties yet! Please add a Property. </h2><div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/bat/config/property/wizard/nojs">+ Add Property</a></div>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Field: Roomify Property: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['separator'] = '';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Roomify Property: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Properties';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_unit']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: Availability */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/availability';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'availability-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Pricing */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'pricing-link';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Roomify Property: Label */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Roomify Property: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'roomify_properties';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['uid']['validate_options']['code'] = 'if (user_access(\'update any roomify_property entity\')) {
        return FALSE;
        }
        else {
        return TRUE;
        }';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';

  /* Display: Dashboard Properties */
  $handler = $view->new_display('panel_pane', 'Dashboard Properties', 'dashboard_properties');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'status' => 'status',
    'property_id' => 'property_id',
    'type' => 'type',
    'field_sp_featured_image' => 'field_sp_featured_image',
    'name' => 'name',
    'edit_unit' => 'edit_unit',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'property_types_edit_link' => 'property_types_edit_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sp_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'edit_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_types_edit_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'name',
    'icon' => 'toggle-arrow-small',
    'icon_size' => 'toggle-medium',
    'hide' => array(
      'status' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'property_id' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'type' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_sp_featured_image' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'edit_unit' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'nothing' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'nothing_1' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'property_types_edit_link' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['separator'] = '';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Roomify Property: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created on';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'bat';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  /* Field: Roomify Property: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'bat';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'bat_daily';
  /* Field: Roomify Property: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Properties';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="property-image">[field_sp_featured_image]</div>
    <div class="property-info">
        <div class="property-name">[name]</div>
        <div class="property-created"><span class="label">Created on: </span>[created]</div>
        <div class="property-changed"><span class="label">Updated on: </span>[changed]</div>
    </div>';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_unit']['element_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: Availability */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/availability';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'availability-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Pricing */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'pricing-link';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Types Link */
  $handler->display->display_options['fields']['property_types_edit_link']['id'] = 'property_types_edit_link';
  $handler->display->display_options['fields']['property_types_edit_link']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_types_edit_link']['field'] = 'property_types_edit_link';
  $handler->display->display_options['fields']['property_types_edit_link']['label'] = '';
  $handler->display->display_options['fields']['property_types_edit_link']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Roomify Property: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'roomify_properties';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Property Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name_1';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Properties View All */
  $handler = $view->new_display('page', 'Properties View All', 'properties_view_all');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['separator'] = '';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  /* Field: Roomify Property: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Properties';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = '';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: Availability */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/availability';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'availability-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Pricing */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'pricing-link';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Roomify Property: Label */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Property Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    6065076 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'admin/bat/properties/view-all';
  $translatables['properties'] = array(
    t('Master'),
    t('Your Properties'),
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
    t('<a class="button add-property-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/bat/config/property/wizard/nojs">add property</a>'),
    t('<h2>You don\'t have any properties yet! Please add a Property. </h2><div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/bat/config/property/wizard/nojs">+ Add Property</a></div>.'),
    t('.'),
    t('Properties'),
    t('Edit'),
    t('Availability'),
    t('Pricing'),
    t('All'),
    t('Dashboard Properties'),
    t('View All'),
    t('Created on'),
    t('Updated date'),
    t('<div class="property-image">[field_sp_featured_image]</div>
    <div class="property-info">
        <div class="property-name">[name]</div>
        <div class="property-created"><span class="label">Created on: </span>[created]</div>
        <div class="property-changed"><span class="label">Updated on: </span>[changed]</div>
    </div>'),
    t('Property Name'),
    t('View panes'),
    t('Properties View All'),
    t('Roomify property ID'),
    t(','),
  );

  $export['properties'] = $view;

  $view = new view();
  $view->name = 'roomify_user_orders';
  $view->description = 'Display a list of completed orders for a user.';
  $view->tag = 'commerce';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Roomify User orders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Your Orders';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own commerce_order entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 25;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'property_image' => 'property_image',
    'line_item_label' => 'line_item_label',
    'booking_id' => 'booking_id',
    'commerce_order_total' => 'commerce_order_total',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'property_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'line_item_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_order_total' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'text';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['content'] = 'You have not placed any orders with us yet.';
  $handler->display->display_options['empty']['text']['format'] = 'plain_text';
  /* Field: Commerce Order: Order number */
  $handler->display->display_options['fields']['order_number']['id'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_number']['field'] = 'order_number';
  $handler->display->display_options['fields']['order_number']['link_to_order'] = 'customer';
  /* Field: Commerce Order: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  /* Field: Commerce Order: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Order: Order status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Contextual filter: Commerce Order: Uid */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['validate']['type'] = 'current_user_or_role';
  $handler->display->display_options['arguments']['uid_1']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['uid_1']['validate_options']['roles'] = array(
    3 => '3',
  );
  /* Filter criterion: Commerce Order: Order state */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'cart' => 'cart',
    'checkout' => 'checkout',
  );

  /* Display: User Orders */
  $handler = $view->new_display('page', 'User Orders', 'order_page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['id'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['table'] = 'commerce_line_item';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['field'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['reverse_booking_line_item_reference_bat_booking']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Order: Roomify Property Image */
  $handler->display->display_options['fields']['property_image']['id'] = 'property_image';
  $handler->display->display_options['fields']['property_image']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['property_image']['field'] = 'property_image';
  $handler->display->display_options['fields']['property_image']['label'] = '';
  $handler->display->display_options['fields']['property_image']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['line_item_label']['label'] = '';
  $handler->display->display_options['fields']['line_item_label']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['relationship'] = 'reverse_booking_line_item_reference_bat_booking';
  $handler->display->display_options['fields']['booking_id']['label'] = 'Booking ID';
  /* Field: Commerce Order: Order total */
  $handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
  $handler->display->display_options['fields']['commerce_order_total']['label'] = 'Total';
  $handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'see booking details';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/user/!1/orders/[order_id]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'user/%/orders';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Orders';
  $handler->display->display_options['menu']['weight'] = '15';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Orders';
  $handler->display->display_options['tab_options']['description'] = 'User orders in the store.';
  $handler->display->display_options['tab_options']['weight'] = '';
  $handler->display->display_options['tab_options']['name'] = 'user-menu';
  $translatables['roomify_user_orders'] = array(
    t('Defaults'),
    t('Your Orders'),
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
    t('You have not placed any orders with us yet.'),
    t('Order number'),
    t('Created'),
    t('Updated date'),
    t('Total'),
    t('Order status'),
    t('All'),
    t('User Orders'),
    t('Line items referenced by commerce_line_items'),
    t('BAT Booking referencing Commerce Line item from booking_line_item_reference'),
    t('Booking ID'),
    t('.'),
    t(','),
    t('see booking details'),
  );
  $export['roomify_user_orders'] = $view;

  return $export;
}
