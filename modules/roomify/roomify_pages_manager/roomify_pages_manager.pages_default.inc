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

  return $pages;

}
