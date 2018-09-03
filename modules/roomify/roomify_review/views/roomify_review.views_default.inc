<?php

/**
 * @file
 * roomify_review.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_review_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'property_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Property Reviews';
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
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'More';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_review_property_reviewed_node']['id'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['relationships']['reverse_field_review_property_reviewed_node']['table'] = 'roomify_properties';
  $handler->display->display_options['relationships']['reverse_field_review_property_reviewed_node']['field'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['relationships']['reverse_field_review_property_reviewed_node']['required'] = TRUE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'guest' => 'guest',
  );
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['property_owner_name']['id'] = 'property_owner_name';
  $handler->display->display_options['fields']['property_owner_name']['table'] = 'field_data_property_owner_name';
  $handler->display->display_options['fields']['property_owner_name']['field'] = 'property_owner_name';
  $handler->display->display_options['fields']['property_owner_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['property_owner_name']['label'] = '';
  $handler->display->display_options['fields']['property_owner_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_owner_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_owner_name']['settings'] = array(
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
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['guest_image']['id'] = 'guest_image';
  $handler->display->display_options['fields']['guest_image']['table'] = 'field_data_guest_image';
  $handler->display->display_options['fields']['guest_image']['field'] = 'guest_image';
  $handler->display->display_options['fields']['guest_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['guest_image']['label'] = '';
  $handler->display->display_options['fields']['guest_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['guest_image']['element_label_colon'] = FALSE;
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
  /* Field: Content: User/Guest image */
  $handler->display->display_options['fields']['user_guest_image']['id'] = 'user_guest_image';
  $handler->display->display_options['fields']['user_guest_image']['table'] = 'node';
  $handler->display->display_options['fields']['user_guest_image']['field'] = 'user_guest_image';
  $handler->display->display_options['fields']['user_guest_image']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['fields']['user_guest_image']['label'] = '';
  $handler->display->display_options['fields']['user_guest_image']['element_label_colon'] = FALSE;
  /* Field: Content: User/Guest name */
  $handler->display->display_options['fields']['user_guest_name']['id'] = 'user_guest_name';
  $handler->display->display_options['fields']['user_guest_name']['table'] = 'node';
  $handler->display->display_options['fields']['user_guest_name']['field'] = 'user_guest_name';
  $handler->display->display_options['fields']['user_guest_name']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['fields']['user_guest_name']['label'] = '';
  $handler->display->display_options['fields']['user_guest_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_guest_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'profiles/roomify/modules/contrib/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 1,
    'style' => 'user',
    'text' => 'none',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel panel-default review-wrapper">
      <div class="panel-heading">
        <div class="name">[user_guest_name]</div>
        <div class="created">[created]</div>
      </div>
      <div class="panel-body review-content">
        <div class="title">[title]</div>
        <div class="rating">[field_review_rating]</div>
        <div class="comment">[body]</div>
      </div>
    </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_review_property_reviewed_node';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Reviews */
  $handler = $view->new_display('panel_pane', 'Reviews', 'panel_pane_1');
  $translatables['property_reviews'] = array(
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
    t('More'),
    t('Content referencing Roomify Property from field_review_property_reviewed'),
    t('author'),
    t('Profile'),
    t('<div class="panel panel-default review-wrapper">
      <div class="panel-heading">
        <div class="name">[user_guest_name]</div>
        <div class="created">[created]</div>
      </div>
      <div class="panel-body review-content">
        <div class="title">[title]</div>
        <div class="rating">[field_review_rating]</div>
        <div class="comment">[body]</div>
      </div>
    </div>'),
    t('All'),
    t('Reviews'),
    t('View panes'),
  );
  $export['property_reviews'] = $view;

  $view = new view();
  $view->name = 'reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer property reviews';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'guest_name' => 'guest_name',
    'name' => 'name',
    'title' => 'title',
    'status' => 'status',
    'name_1' => 'name_1',
    'body' => 'body',
    'user_guest_name' => 'user_guest_name',
    'field_review_rating' => 'field_review_rating',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'guest_name' => array(
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'user_guest_name' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'title',
    'icon' => 'toggle-arrow',
    'icon_size' => '',
    'hide' => array(
      'guest_name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'title' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'status' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name_1' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'body' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'user_guest_name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'field_review_rating' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'edit_node' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'delete_node' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'guest' => 'guest',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_review_property_reviewed_target_id']['id'] = 'field_review_property_reviewed_target_id';
  $handler->display->display_options['relationships']['field_review_property_reviewed_target_id']['table'] = 'field_data_field_review_property_reviewed';
  $handler->display->display_options['relationships']['field_review_property_reviewed_target_id']['field'] = 'field_review_property_reviewed_target_id';
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['guest_name']['id'] = 'guest_name';
  $handler->display->display_options['fields']['guest_name']['table'] = 'field_data_guest_name';
  $handler->display->display_options['fields']['guest_name']['field'] = 'guest_name';
  $handler->display->display_options['fields']['guest_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['guest_name']['label'] = '';
  $handler->display->display_options['fields']['guest_name']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_review_property_reviewed_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Property';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Comment';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: User/Guest name */
  $handler->display->display_options['fields']['user_guest_name']['id'] = 'user_guest_name';
  $handler->display->display_options['fields']['user_guest_name']['table'] = 'node';
  $handler->display->display_options['fields']['user_guest_name']['field'] = 'user_guest_name';
  $handler->display->display_options['fields']['user_guest_name']['label'] = 'Author';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_review_property_reviewed_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer property reviews';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['row_class'] = 'content-published-[status]';
  $handler->display->display_options['style_options']['columns'] = array(
    'guest_name' => 'guest_name',
    'name' => 'name',
    'title' => 'title',
    'status' => 'status',
    'name_1' => 'name_1',
    'body' => 'body',
    'user_guest_name' => 'user_guest_name',
    'field_review_rating' => 'field_review_rating',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'guest_name' => array(
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'user_guest_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_review_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'title',
    'icon' => 'toggle-arrow',
    'icon_size' => '',
    'hide' => array(
      'guest_name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'title' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'status' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'name_1' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'body' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'user_guest_name' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'field_review_rating' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'edit_node' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
      'delete_node' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
        'all' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/reviews';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Reviews';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: My Reviews */
  $handler = $view->new_display('panel_pane', 'My Reviews', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Reviews';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own review content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['guest_name']['id'] = 'guest_name';
  $handler->display->display_options['fields']['guest_name']['table'] = 'field_data_guest_name';
  $handler->display->display_options['fields']['guest_name']['field'] = 'guest_name';
  $handler->display->display_options['fields']['guest_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['guest_name']['label'] = '';
  $handler->display->display_options['fields']['guest_name']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_review_property_reviewed_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Property';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Comment';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '80',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Owner Reviews */
  $handler = $view->new_display('panel_pane', 'Owner Reviews', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proprety\'s Reviews';
  $handler->display->display_options['display_description'] = 'A list of reviews of my property';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'guest' => 'guest',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_review_property_reviewed_target_id']['id'] = 'field_review_property_reviewed_target_id';
  $handler->display->display_options['relationships']['field_review_property_reviewed_target_id']['table'] = 'field_data_field_review_property_reviewed';
  $handler->display->display_options['relationships']['field_review_property_reviewed_target_id']['field'] = 'field_review_property_reviewed_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['id'] = 'field_sp_owner_target_id';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['table'] = 'field_data_field_sp_owner';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['field'] = 'field_sp_owner_target_id';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['relationship'] = 'field_review_property_reviewed_target_id';
  $handler->display->display_options['relationships']['field_sp_owner_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_sp_owner_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['reviews'] = array(
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
    t('author'),
    t('Profile'),
    t('Roomify Property entity referenced from field_review_property_reviewed'),
    t('Title'),
    t('Published'),
    t('Property'),
    t('Comment'),
    t('Author'),
    t('Rating'),
    t('Edit link'),
    t('Delete'),
    t('Page'),
    t('My Reviews'),
    t('All'),
    t('View panes'),
    t('Owner Reviews'),
    t('Proprety\'s Reviews'),
    t('A list of reviews of my property'),
    t('User entity referenced from field_sp_owner'),
  );

  $export['reviews'] = $view;

  return $export;
}
