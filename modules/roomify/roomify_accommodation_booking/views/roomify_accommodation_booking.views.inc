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
  /* Field: BAT Booking: Full Name */
  $handler->display->display_options['fields']['booking_full_name']['id'] = 'booking_full_name';
  $handler->display->display_options['fields']['booking_full_name']['table'] = 'field_data_booking_full_name';
  $handler->display->display_options['fields']['booking_full_name']['field'] = 'booking_full_name';
  $handler->display->display_options['fields']['booking_full_name']['label'] = 'Guest Name';
  $handler->display->display_options['fields']['booking_full_name']['empty'] = '[label]';
  $handler->display->display_options['fields']['booking_full_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
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
  /* Field: Type: Name */
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

  $views['upcoming_bookings'] = $view;

  return $views;
}

/**
 * Implements hook_views_data_alter().
 */
function roomify_accommodation_booking_views_data_alter(&$data) {
  foreach (search_api_index_load_multiple(FALSE) as $index) {
    if ($index->item_type == 'bat_type') {
      $data['search_api_index_' . $index->machine_name]['book_this'] = array(
        'field' => array(
          'title' => t('Book this'),
          'help' => t('Display links to create a new booking.'),
          'handler' => 'roomify_accommodation_booking_book_this_field',
        ),
      );
    }
  }
}
