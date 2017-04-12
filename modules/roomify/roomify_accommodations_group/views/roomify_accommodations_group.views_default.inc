<?php

/**
 * @file
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_accommodations_group_views_default_views() {
  $views = array();

  // Group Content View.
  $view = new view();
  $view->name = 'group_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Group Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Group Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
    'created' => 'created',
    'title' => 'title',
    'title_1' => 'title_1',
    'type' => 'type',
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
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
  $handler->display->display_options['empty']['area']['content'] = 'There is no content assigned to this group!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Relationship: Content: Parent group */
  $handler->display->display_options['relationships']['parent_group']['id'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['table'] = 'node';
  $handler->display->display_options['relationships']['parent_group']['field'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['required'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'bat_daily';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'bat_daily';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Group: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'groups';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'parent_group';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Find content by Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'group/%/content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Content';
  $handler->display->display_options['menu']['weight'] = '-6';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  $views['group_content'] = $view;

  // Group Properties View.
  $view = new view();
  $view->name = 'group_properties';
  $view->description = 'View of Properties shown on user dashboard';
  $view->tag = 'default';
  $view->base_table = 'roomify_properties';
  $view->human_name = 'Group Properties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'eshtesrh';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'property_id' => 'property_id',
    'name' => 'name',
    'edit_unit' => 'edit_unit',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You don\'t have any properties yet! Please <a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/bat/config/property/wizard/nojs">click here to add a new property</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Relationship: Roomify Property: Parent group */
  $handler->display->display_options['relationships']['parent_group']['id'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['table'] = 'roomify_properties';
  $handler->display->display_options['relationships']['parent_group']['field'] = 'parent_group';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Property Name';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
  /* Field: Roomify Property: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = 'Edit Property';
  $handler->display->display_options['fields']['edit_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_unit']['text'] = 'Edit';
  /* Field: Availability */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['label'] = 'Manage Availability';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Availability';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/availability';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Pricing */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Manage Pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Pricing';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'admin/bat/config/property/manage/[property_id]/calendar/pricing';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Group: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'parent_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Roomify Property: Label */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Find property by name';
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
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;

  /* Display: Group Properties */
  $handler = $view->new_display('page', 'Group Properties', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Properties';
  $handler->display->display_options['path'] = 'group/%/property';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Properties';
  $handler->display->display_options['menu']['weight'] = '-8';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Dashboard */
  $handler = $view->new_display('panel_pane', 'Dashboard', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'property_id' => 'property_id',
    'name' => 'name',
    'edit_unit' => 'edit_unit',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'title' => 'title',
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'property_id',
    'icon' => '',
    'icon_size' => '',
    'hide' => array(
      'property_id' => array(
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
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'nothing' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'nothing_1' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'title' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
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
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['property_id']['separator'] = '';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Property Name';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'listing/[property_id]';
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
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  $views['group_properties'] = $view;

  // Group Profile2 Profiles View.
  $view = new view();
  $view->name = 'group_profiles_profile2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Group Profiles (Profile2)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Owner Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'guest_image' => 'guest_image',
    'label' => 'label',
    'guest_name' => 'guest_name',
  );
  $handler->display->display_options['style_options']['default'] = 'guest_name';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
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
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'guest_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['empty']['area']['content'] = 'There is no profile content for this group.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Profile: Parent group */
  $handler->display->display_options['relationships']['parent_group']['id'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['table'] = 'profile';
  $handler->display->display_options['relationships']['parent_group']['field'] = 'parent_group';
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['property_owner_image']['id'] = 'property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['table'] = 'field_data_property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['field'] = 'property_owner_image';
  $handler->display->display_options['fields']['property_owner_image']['label'] = 'Profile Image';
  $handler->display->display_options['fields']['property_owner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['property_owner_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
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
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['property_owner_bio']['id'] = 'property_owner_bio';
  $handler->display->display_options['fields']['property_owner_bio']['table'] = 'field_data_property_owner_bio';
  $handler->display->display_options['fields']['property_owner_bio']['field'] = 'property_owner_bio';
  $handler->display->display_options['fields']['property_owner_bio']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['property_owner_bio']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['property_owner_bio']['settings'] = array(
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
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile-property_owner/[user]/edit';
  /* Field: Group: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'parent_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'group/%/owner-profiles';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Owner Profiles';
  $handler->display->display_options['menu']['weight'] = '-7';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  $views['group_profiles_profile2'] = $view;

  // Sidebar 'My Groups' View.
  $view = new view();
  $view->name = 'my_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'My Groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Group(s)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Group membership */
  $handler->display->display_options['relationships']['group_membership_1']['id'] = 'group_membership_1';
  $handler->display->display_options['relationships']['group_membership_1']['table'] = 'users';
  $handler->display->display_options['relationships']['group_membership_1']['field'] = 'group_membership';
  $handler->display->display_options['relationships']['group_membership_1']['required'] = TRUE;
  /* Relationship: Group membership: Group gid */
  $handler->display->display_options['relationships']['group']['id'] = 'group';
  $handler->display->display_options['relationships']['group']['table'] = 'group_membership';
  $handler->display->display_options['relationships']['group']['field'] = 'group';
  $handler->display->display_options['relationships']['group']['relationship'] = 'group_membership_1';
  $handler->display->display_options['relationships']['group']['bundle_types'] = array(
    'roomify_group' => 'roomify_group',
  );
  /* Field: Group: Group ID */
  $handler->display->display_options['fields']['gid']['id'] = 'gid';
  $handler->display->display_options['fields']['gid']['table'] = 'groups';
  $handler->display->display_options['fields']['gid']['field'] = 'gid';
  $handler->display->display_options['fields']['gid']['relationship'] = 'group';
  $handler->display->display_options['fields']['gid']['exclude'] = TRUE;
  /* Field: Group: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'group/[gid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Group: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'groups';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'group';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';

  /* Display: My Groups */
  $handler = $view->new_display('panel_pane', 'My Groups', 'sidebar_groups');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'token.current-user:uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  $views['my_groups'] = $view;

  // Group Bookings View.
  $view = new view();
  $view->name = 'group_bookings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bat_bookings';
  $view->human_name = 'Group Bookings';
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
    235454842 => '235454842',
  );
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
    'booking_id' => 'booking_id',
    'property_id' => 'property_id',
    'name_1' => 'name_1',
    'name' => 'name',
    'booking_start_date' => 'booking_start_date',
    'booking_end_date' => 'booking_end_date',
    'edit_unit' => 'edit_unit',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'booking_start_date';
  $handler->display->display_options['style_options']['info'] = array(
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
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'booking_end_date' => array(
      'sortable' => 1,
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  /* Relationship: BAT Booking: Parent group */
  $handler->display->display_options['relationships']['parent_group']['id'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['table'] = 'bat_bookings';
  $handler->display->display_options['relationships']['parent_group']['field'] = 'parent_group';
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
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
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
  $handler->display->display_options['path'] = 'group/%/bookings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bookings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: All Bookings */
  $handler = $view->new_display('panel_pane', 'All Bookings', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Bookings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Upcoming Arrivals */
  $handler = $view->new_display('panel_pane', 'Upcoming Arrivals', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Arrivals';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'expand' => 'label',
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'type_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['booking_start_date_value']['default_to_date'] = 'now +30 day';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Upcoming Bookings */
  $handler = $view->new_display('panel_pane', 'Upcoming Bookings', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Bookings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['filters']['booking_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['booking_start_date_value']['default_to_date'] = 'now +60 day';

  /* Display: Past Bookings */
  $handler = $view->new_display('panel_pane', 'Past Bookings', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Bookings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
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

  $views['group_bookings'] = $view;

  $view = new view();
  $view->name = 'group_conversations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_conversations';
  $view->human_name = 'Group Conversations';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'conversation_id' => 'conversation_id',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'conversation_id' => array(
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
  /* Relationship: Roomify Conversation: Parent group */
  $handler->display->display_options['relationships']['parent_group']['id'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['table'] = 'roomify_conversations';
  $handler->display->display_options['relationships']['parent_group']['field'] = 'parent_group';
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['alter']['text'] = '<a href="/conversation/[conversation_id]">Link</a>';
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Roomify Conversation: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'roomify_conversations';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'standard' => 'standard',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'group/%/conversations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Conversations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Dashboard */
  $handler = $view->new_display('panel_pane', 'Dashboard', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Conversations';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Roomify Conversation: Parent group */
  $handler->display->display_options['relationships']['parent_group']['id'] = 'parent_group';
  $handler->display->display_options['relationships']['parent_group']['table'] = 'roomify_conversations';
  $handler->display->display_options['relationships']['parent_group']['field'] = 'parent_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['conversation_unit_type_ref_target_id']['id'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['relationships']['conversation_unit_type_ref_target_id']['table'] = 'field_data_conversation_unit_type_ref';
  $handler->display->display_options['relationships']['conversation_unit_type_ref_target_id']['field'] = 'conversation_unit_type_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['conversation_owner_user_ref_target_id']['id'] = 'conversation_owner_user_ref_target_id';
  $handler->display->display_options['relationships']['conversation_owner_user_ref_target_id']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['relationships']['conversation_owner_user_ref_target_id']['field'] = 'conversation_owner_user_ref_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'conversation_unit_type_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['conversation_booking_ref_target_id']['id'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['relationships']['conversation_booking_ref_target_id']['table'] = 'field_data_conversation_booking_ref';
  $handler->display->display_options['relationships']['conversation_booking_ref_target_id']['field'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['conversation_id']['separator'] = '';
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Owner */
  $handler->display->display_options['fields']['conversation_owner_user_ref']['id'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['field'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_owner_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Guest */
  $handler->display->display_options['fields']['conversation_guest_user_ref']['id'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['field'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_guest_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Start Date */
  $handler->display->display_options['fields']['conversation_book_start_date']['id'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['table'] = 'field_data_conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['field'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
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
  /* Field: Roomify Conversation: End Date */
  $handler->display->display_options['fields']['conversation_book_end_date']['id'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['table'] = 'field_data_conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['field'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_end_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j, Y',
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
  /* Field: Roomify Conversation: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_roomify_conversation';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Roomify Conversation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[changed] ago with [conversation_guest_user_ref]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'bat_daily';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '([conversation_book_start_date] - [conversation_book_end_date])';
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message']['id'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['exclude'] = TRUE;
  /* Field: Roomify Conversation: Most recent message author */
  $handler->display->display_options['fields']['most_recent_message_user']['id'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_user']['field'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_user']['empty'] = '[conversation_guest_user_ref]';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['relationship'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['fields']['booking_price']['label'] = '';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name_1']['label'] = 'Property';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['name_2']['label'] = '';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="conversation-info">
          <div><a class="conversation-info-link" href="[url]">
            <div class="conversation-header">[name_1] [nothing_1]</div>
            <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
          </a></div>
        </div>
        <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Group: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'groups';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'parent_group';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['group_conversations'] = array(
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
    t('Roomify Conversation group'),
    t('<a href="/conversation/[conversation_id]">Link</a>'),
    t('.'),
    t(','),
    t('All'),
    t('Page'),
    t('Dashboard'),
    t('Conversations'),
    t('Type entity referenced from conversation_unit_type_ref'),
    t('User entity referenced from conversation_owner_user_ref'),
    t('Roomify Property referencing Type from property_bat_type_reference'),
    t('BAT Booking entity referenced from conversation_booking_ref'),
    t('Owner'),
    t('Guest'),
    t('Start Date'),
    t('End Date'),
    t('[changed] ago with [conversation_guest_user_ref]'),
    t('Requested Dates'),
    t('([conversation_book_start_date] - [conversation_book_end_date])'),
    t('Most recent message'),
    t('Most recent message author'),
    t('[conversation_guest_user_ref]'),
    t('Property'),
    t('<div class="conversation-info">
          <div><a class="conversation-info-link" href="[url]">
            <div class="conversation-header">[name_1] [nothing_1]</div>
            <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
          </a></div>
        </div>
        <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>'),
    t('View panes'),
  );

  $views['group_conversations'] = $view;

  $view = new view();
  $view->name = 'roomify_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'groups';
  $view->human_name = 'Roomify Groups';
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a class="button add-group-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/bat/config/group/add">add group</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Click on \'add group\' to create a new group';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Field: Group: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'groups';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Group name';
  /* Field: Group: Count Roomify Property entities */
  $handler->display->display_options['fields']['group_entity_roomify_property_count']['id'] = 'group_entity_roomify_property_count';
  $handler->display->display_options['fields']['group_entity_roomify_property_count']['table'] = 'groups';
  $handler->display->display_options['fields']['group_entity_roomify_property_count']['field'] = 'group_entity_roomify_property_count';
  $handler->display->display_options['fields']['group_entity_roomify_property_count']['label'] = 'Properties count';
  /* Field: Group: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_group';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[url]">manage</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  $views['roomify_groups'] = $view;

  return $views;
}
