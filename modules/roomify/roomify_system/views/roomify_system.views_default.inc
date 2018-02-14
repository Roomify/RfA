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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'user';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Profile: Type */
  $handler->display->display_options['fields']['type_2']['id'] = 'type_2';
  $handler->display->display_options['fields']['type_2']['table'] = 'profile';
  $handler->display->display_options['fields']['type_2']['field'] = 'type';
  $handler->display->display_options['fields']['type_2']['label'] = '';
  $handler->display->display_options['fields']['type_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_2']['machine_name'] = TRUE;
  /* Field: Profile: Edit Profile */
  $handler->display->display_options['fields']['edit_profile']['id'] = 'edit_profile';
  $handler->display->display_options['fields']['edit_profile']['table'] = 'profile';
  $handler->display->display_options['fields']['edit_profile']['field'] = 'edit_profile';
  $handler->display->display_options['fields']['edit_profile']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_profile']['alter']['text'] = 'Edit Profile';
  $handler->display->display_options['fields']['edit_profile']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_profile']['alter']['path'] = 'profile-[type_2]/[uid]/edit';
  $handler->display->display_options['fields']['edit_profile']['text'] = 'edit profile';
  $handler->display->display_options['path'] = 'admin/people/profiles';
  $translatables['profiles'] = array(
    t('Master'),
    t('Profiles'),
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
    t('User'),
    t('Profile ID'),
    t('.'),
    t(','),
    t('Image'),
    t('Name'),
    t('Username'),
    t('Profile Type'),
    t('Edit Profile'),
    t('edit profile'),
    t('Page'),
  );

  $views['profiles'] = $view;

  $view = new view();
  $view->name = 'featured_properties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Featured properties';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'autoplay' => 'autoplay',
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'property_id' => 0,
    'name' => 0,
    'field_sp_featured_image' => 0,
    'field_sp_short_description' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityqueue: Roomify Property Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'roomify_properties';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 0;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'featured_properties' => 0,
  );
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  /* Sort criterion: Entityqueue: Roomify Property Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'roomify_properties';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Roomify Property: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value']['value'] = '1';

  /* Display: Featured Properties */
  $handler = $view->new_display('panel_pane', 'Featured Properties', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
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
    'image_style' => 'homepage_features',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
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

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
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
    'image_style' => 'homepage_features',
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
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Property Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
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

  /* Display: Homepage Featured Properties */
  $handler = $view->new_display('panel_pane', 'Homepage Featured Properties', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'properties_carousel';
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'property_id' => 0,
    'name' => 0,
    'field_sp_featured_image' => 0,
    'field_sp_short_description' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Subqueue: Starting Price */
  $handler->display->display_options['fields']['starting_price']['id'] = 'starting_price';
  $handler->display->display_options['fields']['starting_price']['table'] = 'entityqueue_subqueue';
  $handler->display->display_options['fields']['starting_price']['field'] = 'starting_price';
  $handler->display->display_options['fields']['starting_price']['relationship'] = 'entityqueue_relationship';
  $handler->display->display_options['fields']['starting_price']['label'] = '';
  $handler->display->display_options['fields']['starting_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['starting_price']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'field_data_field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sp_area']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_area']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
       <tbody>
        <tr>
          <td class="property-name"><div class="location">[field_sp_area]</div></td>
          <td class="starting-price">[starting_price] </td>
        </tr>
      </tbody>
      </table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '[field_sp_featured_image]
  <div class="overlay">
  <div class="content">[name]</div>
  </div>
  <div class=property-info>[nothing]</div>';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['element_wrapper_class'] = 'hovereffect';
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_350x470',
    'image_link' => 'content',
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

  /* Display: Vertical Grid List */
  $handler = $view->new_display('panel_pane', 'Vertical Grid List', 'panel_pane_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '0';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'property-col';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Subqueue: Starting Price */
  $handler->display->display_options['fields']['starting_price']['id'] = 'starting_price';
  $handler->display->display_options['fields']['starting_price']['table'] = 'entityqueue_subqueue';
  $handler->display->display_options['fields']['starting_price']['field'] = 'starting_price';
  $handler->display->display_options['fields']['starting_price']['relationship'] = 'entityqueue_relationship';
  $handler->display->display_options['fields']['starting_price']['label'] = '';
  $handler->display->display_options['fields']['starting_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['starting_price']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'field_data_field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
       <tbody>
        <tr>
          <td class="property-name"><div class="location">[field_sp_area]</div></td>
          <td class="starting-price">[starting_price] </td>
        </tr>
      </tbody>
      </table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '[field_sp_featured_image]
  <div class="overlay">
  <div class="content">[name]</div>
  </div>
  <div class=property-info>[nothing]</div>';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['element_wrapper_class'] = 'hovereffect';
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_350x470',
    'image_link' => 'content',
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

  /* Display: Horizontal Grid List */
  $handler = $view->new_display('panel_pane', 'Horizontal Grid List', 'panel_pane_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '0';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'property-col';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Subqueue: Starting Price */
  $handler->display->display_options['fields']['starting_price']['id'] = 'starting_price';
  $handler->display->display_options['fields']['starting_price']['table'] = 'entityqueue_subqueue';
  $handler->display->display_options['fields']['starting_price']['field'] = 'starting_price';
  $handler->display->display_options['fields']['starting_price']['relationship'] = 'entityqueue_relationship';
  $handler->display->display_options['fields']['starting_price']['label'] = '';
  $handler->display->display_options['fields']['starting_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['starting_price']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'field_data_field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table>
         <tbody>
          <tr>
            <td class="property-name"><div class="location">[field_sp_area]</div></td>
            <td class="starting-price">[starting_price] </td>
          </tr>
        </tbody>
        </table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Roomify Property: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '[field_sp_featured_image]
    <div class="overlay">
    <div class="content">[name]</div>
    </div>
    <div class=property-info>[nothing]</div>';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['element_wrapper_class'] = 'hovereffect';
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['featured_properties'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Roomify Property Queue'),
    t('Roomify property ID'),
    t('.'),
    t(','),
    t('Featured Properties'),
    t('View panes'),
    t('List'),
    t('Homepage Featured Properties'),
    t('<table>
         <tbody>
          <tr>
            <td class="property-name"><div class="location">[field_sp_area]</div></td>
            <td class="starting-price">[starting_price] </td>
          </tr>
        </tbody>
        </table>'),
    t('[field_sp_featured_image]
    <div class="overlay">
    <div class="content">[name]</div>
    </div>
    <div class=property-info>[nothing]</div>'),
    t('Vertical Grid List'),
    t('Horizontal Grid List'),
    t('[field_sp_featured_image]
    <div class="overlay">
    <div class="content">[name]</div>
    </div>
    <div class=property-info>[nothing]</div>'),
  );

  $views['featured_properties'] = $view;

  $view = new view();
  $view->name = 'featured_areas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Featured Areas';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '0';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['style_options']['column_class'] = 'area-col';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityqueue: Taxonomy term Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 0;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'featured_areas' => 0,
  );
  /* Field: Taxonomy term: Featured Image */
  $handler->display->display_options['fields']['field_area_featured_image']['id'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['table'] = 'field_data_field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['field'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_area_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_area_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'location' => 'location',
  );

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Featured Image */
  $handler->display->display_options['fields']['field_area_featured_image']['id'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['table'] = 'field_data_field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['field'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_area_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_featured_image']['alter']['text'] = '[field_area_featured_image]
  <div class="overlay">
    <div class="content">[name]</div>
  </div>';
  $handler->display->display_options['fields']['field_area_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_featured_image']['element_wrapper_class'] = 'hovereffect';
  $handler->display->display_options['fields']['field_area_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_area_featured_image']['settings'] = array(
    'image_style' => 'roomify_350x470',
    'image_link' => 'content',
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

  /* Display: Horizontal List */
  $handler = $view->new_display('panel_pane', 'Horizontal List', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Featured Image */
  $handler->display->display_options['fields']['field_area_featured_image']['id'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['table'] = 'field_data_field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['field'] = 'field_area_featured_image';
  $handler->display->display_options['fields']['field_area_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_area_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_featured_image']['alter']['text'] = '[field_area_featured_image]
    <div class="overlay">
      <div class="content">[name]</div>
    </div>';
  $handler->display->display_options['fields']['field_area_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_area_featured_image']['element_wrapper_class'] = 'hovereffect';
  $handler->display->display_options['fields']['field_area_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_area_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => 'content',
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
  $translatables['featured_areas'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Taxonomy term Queue'),
    t('List'),
    t('[field_area_featured_image]
    <div class="overlay">
      <div class="content">[name]</div>
    </div>'),
    t('View panes'),
    t('Horizontal List'),
    t('[field_area_featured_image]
    <div class="overlay">
      <div class="content">[name]</div>
    </div>'),
  );

  $views['featured_areas'] = $view;

  return $views;
}
