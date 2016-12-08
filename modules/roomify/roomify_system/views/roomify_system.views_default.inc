<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_system_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'property_owner_name' => 'property_owner_name',
    'guest_name' => 'property_owner_name',
    'guest_image' => 'guest_image',
    'property_owner_image' => 'guest_image',
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
    'property_owner_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'guest_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'guest_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'property_owner_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['guest_image']['id'] = 'guest_image';
  $handler->display->display_options['fields']['guest_image']['table'] = 'field_data_guest_image';
  $handler->display->display_options['fields']['guest_image']['field'] = 'guest_image';
  $handler->display->display_options['fields']['guest_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['guest_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['property_owner_image']['id'] = 'property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['table'] = 'field_data_property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['field'] = 'property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['label'] = '';
  $handler->display->display_options['fields']['property_owner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_owner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['property_owner_image']['settings'] = array(
    'image_style' => 'square',
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
  $handler->display->display_options['fields']['property_owner_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['guest_name']['id'] = 'guest_name';
  $handler->display->display_options['fields']['guest_name']['table'] = 'field_data_guest_name';
  $handler->display->display_options['fields']['guest_name']['field'] = 'guest_name';
  $handler->display->display_options['fields']['guest_name']['label'] = '';
  $handler->display->display_options['fields']['guest_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['guest_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'profile';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Profile Type';
  /* Field: Profile: Edit Profile */
  $handler->display->display_options['fields']['edit_profile']['id'] = 'edit_profile';
  $handler->display->display_options['fields']['edit_profile']['table'] = 'profile';
  $handler->display->display_options['fields']['edit_profile']['field'] = 'edit_profile';
  $handler->display->display_options['fields']['edit_profile']['text'] = 'edit profile';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Profile Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
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
    163670334 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/people/profiles';

  $views['profiles'] = $view;

  return $views;
}
