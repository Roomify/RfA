<?php

/**
 * @file
 * roomify_search.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function roomify_search_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'properties';
  $item->label = 'Properties';
  $item->settings = array(
    'items' => array(
      'properties' => array(
        'id' => 'active',
        'label' => 'Properties',
        'pattern' => '<strong>[facetapi_active:facet-title]</strong>:  [facetapi_active:active-value]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '2',
    ),
  );
  $export['properties'] = $item;

  return $export;
}
