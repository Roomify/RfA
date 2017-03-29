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

  return $export;
}
