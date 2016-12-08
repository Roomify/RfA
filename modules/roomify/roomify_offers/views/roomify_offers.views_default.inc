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

  $views['special_offers'] = $view;

  return $views;
}
