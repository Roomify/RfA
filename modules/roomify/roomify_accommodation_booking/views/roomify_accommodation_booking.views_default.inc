<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_accommodation_booking_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'upcoming_bookings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bat_bookings';
  $view->human_name = 'Upcoming Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bookings';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'none';
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
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_end_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
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
    'expand' => 'name',
    'icon' => 'toggle-arrow-small',
    'icon_size' => '',
    'hide' => array(
      'label' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'booking_full_name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
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
        'all' => 0,
        'tablet' => 0,
      ),
      'delete_unit' => array(
        'phone' => 'phone',
        'all' => 0,
        'tablet' => 0,
      ),
      'type' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You do not have any bookings yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
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
  /* Filter criterion: Events: State (event_state_reference) */
  $handler->display->display_options['filters']['event_state_reference_state_id']['id'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['table'] = 'field_data_event_state_reference';
  $handler->display->display_options['filters']['event_state_reference_state_id']['field'] = 'event_state_reference_state_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['relationship'] = 'booking_event_reference_target_id';
  $handler->display->display_options['filters']['event_state_reference_state_id']['value'] = array(
    'value' => '4',
  );
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
  /* Filter criterion: Roomify Property: Roomify property ID */
  $handler->display->display_options['filters']['property_id']['id'] = 'property_id';
  $handler->display->display_options['filters']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['property_id']['field'] = 'property_id';
  $handler->display->display_options['filters']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  /* Filter criterion: BAT Booking: Start Date (booking_start_date) */
  $handler->display->display_options['filters']['booking_start_date_value']['id'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['filters']['booking_start_date_value']['field'] = 'booking_start_date_value';
  $handler->display->display_options['filters']['booking_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Events: Start Date */
  $handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['table'] = 'bat_events';
  $handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
  $handler->display->display_options['sorts']['start_date']['relationship'] = 'booking_event_reference_target_id';
  $translatables['upcoming_bookings'] = array(
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
    t('You do not have any bookings yet.'),
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
    t('Block'),
  );

  $views['upcoming_bookings'] = $view;

  $view = new view();
  $view->name = 'customer_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_customer_profile';
  $view->human_name = 'Customer profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search for existing guest';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Commerce Customer profile: Address - Full name */
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['fields']['commerce_customer_address_name_line']['label'] = 'Full name';
  /* Field: Commerce Customer profile: Telephone */
  $handler->display->display_options['fields']['booking_telephone']['id'] = 'booking_telephone';
  $handler->display->display_options['fields']['booking_telephone']['table'] = 'field_data_booking_telephone';
  $handler->display->display_options['fields']['booking_telephone']['field'] = 'booking_telephone';
  /* Filter criterion: Commerce Customer Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_customer_profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'billing' => 'billing',
  );
  /* Filter criterion: Commerce Customer profile: Address - Full name */
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['id'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['table'] = 'field_data_commerce_customer_address';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['operator'] = 'contains';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['exposed'] = TRUE;
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['operator_id'] = 'commerce_customer_address_name_line_op';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['label'] = 'Full name';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['operator'] = 'commerce_customer_address_name_line_op';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['identifier'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['autocomplete_field'] = 'commerce_customer_address_name_line';
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['commerce_customer_address_name_line']['expose']['autocomplete_dependent'] = 0;

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search for existing guest';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'bat_booking:booking_guest:roomify_accommodation_booking',
    1 => 'bat_booking:booking_guest:conversation_booking',
    2 => 'bat_booking:booking_guest:booking_com',
    3 => 'bat_booking:booking_guest:ical',
  );

  $views['customer_profiles'] = $view;

  $view = new view();
  $view->name = 'roomify_order';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_order';
  $view->human_name = 'Roomify Order';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'line_item_label' => 'line_item_label',
    'quantity' => 'quantity',
    'commerce_unit_price' => 'commerce_unit_price',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'line_item_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_unit_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['line_item_label']['label'] = '';
  $handler->display->display_options['fields']['line_item_label']['element_label_colon'] = FALSE;
  /* Field: Commerce Line Item: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'commerce_line_items_line_item_id';
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['relationship'] = 'field_st_property_reference_target_id';
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
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['relationship'] = 'commerce_booking_reference_target_id';
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
  $handler->display->display_options['fields']['booking_end_date']['relationship'] = 'commerce_booking_reference_target_id';
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
  $handler->display->display_options['fields']['nights']['relationship'] = 'commerce_booking_reference_target_id';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Contextual filter: Commerce Order: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'roomify_accommodation_option' => 'roomify_accommodation_option',
  );

  /* Display: Line Items (Booking) */
  $handler = $view->new_display('panel_pane', 'Line Items (Booking)', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['id'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['table'] = 'field_data_commerce_booking_reference';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['field'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['relationship'] = 'commerce_booking_reference_target_id';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['id'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['table'] = 'field_data_field_st_property_reference';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['field'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['relationship'] = 'type_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['relationship'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['fields']['booking_id']['label'] = 'Booking ID';
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['relationship'] = 'commerce_booking_reference_target_id';
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
  $handler->display->display_options['fields']['booking_end_date']['relationship'] = 'commerce_booking_reference_target_id';
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
  $handler->display->display_options['fields']['nights']['relationship'] = 'commerce_booking_reference_target_id';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Booking Price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Commerce Line Item: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'roomify_accommodation_booking' => 'roomify_accommodation_booking',
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
  $handler->display->display_options['argument_input'] = array(
    'order_id' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking-accommodation-ref',
      'context_optional' => 0,
      'panel' => '4',
      'fixed' => '',
      'label' => 'Commerce Order: Order ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Line Items (Options) */
  $handler = $view->new_display('panel_pane', 'Line Items (Options)', 'panel_pane_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Line Item: Label */
  $handler->display->display_options['fields']['line_item_label']['id'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['line_item_label']['field'] = 'line_item_label';
  $handler->display->display_options['fields']['line_item_label']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['line_item_label']['label'] = 'Option';
  /* Field: Commerce Line Item: Quantity */
  $handler->display->display_options['fields']['quantity']['id'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['quantity']['field'] = 'quantity';
  $handler->display->display_options['fields']['quantity']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['quantity']['precision'] = '0';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Option Price';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Commerce Line Item: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'roomify_accommodation_option' => 'roomify_accommodation_option',
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
  $handler->display->display_options['argument_input'] = array(
    'order_id' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking-accommodation-ref',
      'context_optional' => 0,
      'panel' => '4',
      'fixed' => '',
      'label' => 'Commerce Order: Order ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Property Details */
  $handler = $view->new_display('panel_pane', 'Property Details', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['id'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['table'] = 'field_data_commerce_booking_reference';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['field'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['relationship'] = 'commerce_booking_reference_target_id';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['id'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['table'] = 'field_data_field_st_property_reference';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['field'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['relationship'] = 'type_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['relationship'] = 'field_st_property_reference_target_id';
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
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'h2';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Room Type';
  $handler->display->display_options['fields']['name_1']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Commerce Line Item: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['order_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'roomify_accommodation_booking' => 'roomify_accommodation_booking',
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
  $handler->display->display_options['argument_input'] = array(
    'order_id' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking-accommodation-ref',
      'context_optional' => 0,
      'panel' => '4',
      'fixed' => '',
      'label' => 'Commerce Order: Order ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Summary */
  $handler = $view->new_display('panel_pane', 'Summary', 'panel_pane_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
    'booking_start_date' => 'booking_start_date',
    'booking_end_date' => 'booking_end_date',
    'nights' => 'nights',
    'commerce_unit_price' => 'commerce_unit_price',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Commerce Order: Referenced line items */
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['id'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['table'] = 'field_data_commerce_booking_reference';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['field'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['relationships']['commerce_booking_reference_target_id']['relationship'] = 'commerce_line_items_line_item_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['id'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['table'] = 'field_data_booking_event_reference';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['field'] = 'booking_event_reference_target_id';
  $handler->display->display_options['relationships']['booking_event_reference_target_id']['relationship'] = 'commerce_booking_reference_target_id';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['id'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['table'] = 'field_data_field_st_property_reference';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['field'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['relationships']['field_st_property_reference_target_id']['relationship'] = 'type_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'strong';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'clearfix';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Room Type';
  $handler->display->display_options['fields']['name_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['name_1']['element_wrapper_class'] = 'clearfix';
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['relationship'] = 'field_st_property_reference_target_id';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Commerce Order: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = '';
  $handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
  /* Field: BAT Booking: Start Date */
  $handler->display->display_options['fields']['booking_start_date']['id'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['table'] = 'field_data_booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['field'] = 'booking_start_date';
  $handler->display->display_options['fields']['booking_start_date']['relationship'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['fields']['booking_start_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['booking_start_date']['element_wrapper_class'] = 'clearfix';
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
  $handler->display->display_options['fields']['booking_end_date']['relationship'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['fields']['booking_end_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['booking_end_date']['element_wrapper_class'] = 'clearfix';
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
  $handler->display->display_options['fields']['nights']['relationship'] = 'commerce_booking_reference_target_id';
  $handler->display->display_options['fields']['nights']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['nights']['element_wrapper_class'] = 'clearfix';
  /* Field: Commerce Line item: Unit price */
  $handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
  $handler->display->display_options['fields']['commerce_unit_price']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['fields']['commerce_unit_price']['label'] = 'Booking Price';
  $handler->display->display_options['fields']['commerce_unit_price']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['commerce_unit_price']['element_wrapper_class'] = 'clearfix';
  $handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Commerce Line Item: Order ID */
  $handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
  $handler->display->display_options['arguments']['order_id']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Commerce Order: Order type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_order';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_order' => 'commerce_order',
  );
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'commerce_line_items_line_item_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'roomify_accommodation_booking' => 'roomify_accommodation_booking',
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
  $handler->display->display_options['argument_input'] = array(
    'order_id' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking-accommodation-ref',
      'context_optional' => 0,
      'panel' => '4',
      'fixed' => '',
      'label' => 'Commerce Order: Order ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $translatables['roomify_order'] = array(
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
    t('Line items referenced by commerce_line_items'),
    t('Type'),
    t('Start Date'),
    t('End Date'),
    t('Nights'),
    t('Price'),
    t('All'),
    t('Line Items (Booking)'),
    t('BAT Booking entity referenced from commerce_booking_reference'),
    t('Events entity referenced from booking_event_reference'),
    t('Unit entity referenced from event_bat_unit_reference'),
    t('Roomify Property entity referenced from field_st_property_reference'),
    t('Booking ID'),
    t('.'),
    t(','),
    t('Booking Price'),
    t('View panes'),
    t('Line Items (Options)'),
    t('Option'),
    t('Quantity'),
    t('Option Price'),
    t('Property Details'),
    t('Room Type'),
    t('Summary'),
  );

  $views['roomify_order'] = $view;

  $view = new view();
  $view->name = 'users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['user_first_name']['id'] = 'user_first_name';
  $handler->display->display_options['fields']['user_first_name']['table'] = 'field_data_user_first_name';
  $handler->display->display_options['fields']['user_first_name']['field'] = 'user_first_name';
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
  $handler->display->display_options['fields']['user_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '0';
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
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

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'bat_booking:booking_user_guest:standard',
    1 => 'bat_booking:booking_user_guest:roomify_accommodation_booking',
    2 => 'bat_booking:booking_user_guest:conversation_booking',
    3 => 'bat_booking:booking_user_guest:booking_com',
  );

  $views['users'] = $view;

  $view = new view();
  $view->name = 'booking_guest';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bat_bookings';
  $view->human_name = 'Booking Guest';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['id'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['table'] = 'field_data_booking_user_guest';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['field'] = 'booking_user_guest_target_id';
  $handler->display->display_options['relationships']['booking_user_guest_target_id']['required'] = TRUE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['user_first_name']['id'] = 'user_first_name';
  $handler->display->display_options['fields']['user_first_name']['table'] = 'field_data_user_first_name';
  $handler->display->display_options['fields']['user_first_name']['field'] = 'user_first_name';
  $handler->display->display_options['fields']['user_first_name']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_first_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['user_first_name']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['user_last_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['user_last_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: User: Telephone */
  $handler->display->display_options['fields']['user_telephone']['id'] = 'user_telephone';
  $handler->display->display_options['fields']['user_telephone']['table'] = 'field_data_user_telephone';
  $handler->display->display_options['fields']['user_telephone']['field'] = 'user_telephone';
  $handler->display->display_options['fields']['user_telephone']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_telephone']['element_type'] = 'span';
  $handler->display->display_options['fields']['user_telephone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_telephone']['settings'] = array(
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
  $handler->display->display_options['fields']['mail']['element_type'] = 'span';
  $handler->display->display_options['fields']['mail']['hide_empty'] = TRUE;
  /* Field: User: Address */
  $handler->display->display_options['fields']['user_address']['id'] = 'user_address';
  $handler->display->display_options['fields']['user_address']['table'] = 'field_data_user_address';
  $handler->display->display_options['fields']['user_address']['field'] = 'user_address';
  $handler->display->display_options['fields']['user_address']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['user_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['user_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['user_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'booking_user_guest_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Guest';
  /* Contextual filter: BAT Booking: Bat booking ID */
  $handler->display->display_options['arguments']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['arguments']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['arguments']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['arguments']['booking_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['booking_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['booking_id']['default_argument_options']['index'] = '5';
  $handler->display->display_options['arguments']['booking_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['booking_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['booking_id']['summary_options']['items_per_page'] = '25';

  /* Display: Booking Guest */
  $handler = $view->new_display('panel_pane', 'Booking Guest', 'panel_pane_1');
  $translatables['booking_guest'] = array(
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
    t('User entity referenced from booking_user_guest'),
    t('First Name'),
    t('Last Name'),
    t('Telephone'),
    t('E-mail'),
    t('Address'),
    t('Edit Guest'),
    t('All'),
    t('Booking Guest'),
    t('View panes'),
  );

  $views['booking_guest'] = $view;

  return $views;
}
