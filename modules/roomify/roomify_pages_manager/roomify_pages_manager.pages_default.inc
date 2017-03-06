<?php

/**
 * @file
 * roomify_pages_manager.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function roomify_pages_manager_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location';
  $page->task = 'page';
  $page->admin_title = 'Location';
  $page->admin_description = '';
  $page->path = 'location';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['location'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'activity_page';
  $page->task = 'page';
  $page->admin_title = 'Activities page';
  $page->admin_description = '';
  $page->path = 'things-to-do';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['activity_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'listings';
  $page->task = 'page';
  $page->admin_title = 'Listings';
  $page->admin_description = '';
  $page->path = 'listing/%type_id';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => '$property = $contexts[\'argument_entity_id:roomify_property_1\']->data;

    if ($property->type == \'casa_property\' || $property->type == \'locanda_property\') {
      return roomify_property_access(\'view\', $property);
    }
    else {
      return FALSE;
    }',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'type_id' => array(
      'id' => 1,
      'identifier' => 'Roomify Property: ID',
      'name' => 'entity_id:roomify_property',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['listings'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'type';
  $page->task = 'page';
  $page->admin_title = 'Type';
  $page->admin_description = '';
  $page->path = 'room-type/%type_id';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'type_id' => array(
      'id' => 1,
      'identifier' => 'Type: ID',
      'name' => 'entity_id:bat_type',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['type'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'availability_search';
  $page->task = 'page';
  $page->admin_title = 'Availability Search';
  $page->admin_description = '';
  $page->path = 'availability-search';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['availability_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'activities_search';
  $page->task = 'page';
  $page->admin_title = 'Activities Search';
  $page->admin_description = '';
  $page->path = 'activities-search';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['activities_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_areas';
  $page->task = 'page';
  $page->admin_title = 'All Areas';
  $page->admin_description = '';
  $page->path = 'areas';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['all_areas'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'area_blog';
  $page->task = 'page';
  $page->admin_title = 'Area Blog';
  $page->admin_description = '';
  $page->path = 'blog/%area';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'area' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vocabularies' => array(
          'location' => 'location',
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['area_blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'order_view';
  $page->task = 'page';
  $page->admin_title = 'Order View';
  $page->admin_description = '';
  $page->path = 'admin/bat/orders/%commerce_order/view';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view any commerce order',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view own commerce_order entities',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array();
  $page->arguments = array(
    'commerce_order' => array(
      'id' => 1,
      'identifier' => 'Commerce Order: ID',
      'name' => 'entity_id:commerce_order',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_order_view__panel';
  $handler->task = 'page';
  $handler->subtask = 'order_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Order Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Order %commerce_order:order-id';
  $display->uuid = '63594286-3c6a-4aa2-b255-cc221316f2b2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_order_view__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-93bc9f95-3b15-4300-b10c-70f28b80ba17';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'roomify_order-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'order_id' => '%commerce_order:order-id',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '93bc9f95-3b15-4300-b10c-70f28b80ba17';
  $display->content['new-93bc9f95-3b15-4300-b10c-70f28b80ba17'] = $pane;
  $display->panels['left'][0] = 'new-93bc9f95-3b15-4300-b10c-70f28b80ba17';
  $pane = new stdClass();
  $pane->pid = 'new-fe39f36b-5070-4749-8af2-7fc6f13147fe';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'roomify_order-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'order_id' => '%commerce_order:order-id',
    ),
    'override_title' => 1,
    'override_title_text' => 'Booking Details',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fe39f36b-5070-4749-8af2-7fc6f13147fe';
  $display->content['new-fe39f36b-5070-4749-8af2-7fc6f13147fe'] = $pane;
  $display->panels['left'][1] = 'new-fe39f36b-5070-4749-8af2-7fc6f13147fe';
  $pane = new stdClass();
  $pane->pid = 'new-fa1929ed-a2a5-4144-addf-bb7dec054c2c';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'roomify_order-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'order_id' => '%commerce_order:order-id',
    ),
    'override_title' => 1,
    'override_title_text' => 'Booking Options',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fa1929ed-a2a5-4144-addf-bb7dec054c2c';
  $display->content['new-fa1929ed-a2a5-4144-addf-bb7dec054c2c'] = $pane;
  $display->panels['left'][2] = 'new-fa1929ed-a2a5-4144-addf-bb7dec054c2c';
  $pane = new stdClass();
  $pane->pid = 'new-46982bb7-3d89-473e-8285-192a31a9e021';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'commerce_order:commerce_order_total';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'commerce_price_raw_amount',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'calculation' => FALSE,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:commerce_order_1',
    'override_title' => 1,
    'override_title_text' => 'Total Cost',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '46982bb7-3d89-473e-8285-192a31a9e021';
  $display->content['new-46982bb7-3d89-473e-8285-192a31a9e021'] = $pane;
  $display->panels['left'][3] = 'new-46982bb7-3d89-473e-8285-192a31a9e021';
  $pane = new stdClass();
  $pane->pid = 'new-966c17e8-4fa3-4b16-a165-ccbd13a0a01a';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Order Status',
    'title' => 'Order Status:',
    'title_heading' => 'h2',
    'body' => '<h2>%commerce_order:status</h2>',
    'format' => 'rich_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'order-status',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '966c17e8-4fa3-4b16-a165-ccbd13a0a01a';
  $display->content['new-966c17e8-4fa3-4b16-a165-ccbd13a0a01a'] = $pane;
  $display->panels['right'][0] = 'new-966c17e8-4fa3-4b16-a165-ccbd13a0a01a';
  $pane = new stdClass();
  $pane->pid = 'new-e7b98b3e-5b95-43c3-a1a2-f9ec863ac4db';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'commerce_order:commerce_customer_billing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'commerce_customer_profile_reference_display',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:commerce_order_1',
    'override_title' => 1,
    'override_title_text' => 'Customer Details',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e7b98b3e-5b95-43c3-a1a2-f9ec863ac4db';
  $display->content['new-e7b98b3e-5b95-43c3-a1a2-f9ec863ac4db'] = $pane;
  $display->panels['right'][1] = 'new-e7b98b3e-5b95-43c3-a1a2-f9ec863ac4db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['order_view'] = $page;

  return $pages;

}
