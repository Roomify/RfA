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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'More Reviews';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
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
  $handler->display->display_options['fields']['user_guest_image']['label'] = '';
  $handler->display->display_options['fields']['user_guest_image']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: User/Guest name */
  $handler->display->display_options['fields']['user_guest_name']['id'] = 'user_guest_name';
  $handler->display->display_options['fields']['user_guest_name']['table'] = 'node';
  $handler->display->display_options['fields']['user_guest_name']['field'] = 'user_guest_name';
  $handler->display->display_options['fields']['user_guest_name']['label'] = '';
  $handler->display->display_options['fields']['user_guest_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_guest_name']['element_label_colon'] = FALSE;
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
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
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
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
    'review' => 'review',
  );

  /* Display: Property Reviews */
  $handler = $view->new_display('panel_pane', 'Property Reviews', 'panel_pane_1');
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
    t('More Reviews'),
    t('author'),
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
    t('Property Reviews'),
    t('Profile'),
    t('View panes'),
  );
  $export['reviews'] = $view;

  return $export;
}
