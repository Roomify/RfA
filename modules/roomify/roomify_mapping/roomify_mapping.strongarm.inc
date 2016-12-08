<?php

/**
 * @file
 * roomify_mapping.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function roomify_mapping_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_location';
  $strongarm->value = 0;
  $export['comment_anonymous_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_location';
  $strongarm->value = 1;
  $export['comment_default_mode_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_location';
  $strongarm->value = '50';
  $export['comment_default_per_page_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_location';
  $strongarm->value = 1;
  $export['comment_form_location_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_location';
  $strongarm->value = '2';
  $export['comment_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_location';
  $strongarm->value = '1';
  $export['comment_preview_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_location';
  $strongarm->value = 1;
  $export['comment_subject_field_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__location';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 1,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__location';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'rooms_list' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'language' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_api3_key';
  $strongarm->value = '';
  $export['getdirections_api3_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_api_key';
  $strongarm->value = '';
  $export['getdirections_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_default';
  $strongarm->value = array(
    'width' => '500px',
    'height' => '300px',
    'latlong' => '40,0',
    'zoom' => '3',
    'controltype' => 'small',
    'pancontrol' => 1,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 1,
      'OpenStreetMap' => 0,
    ),
    'unitsystem' => 'metric',
    'scale' => 0,
    'overview' => 1,
    'overview_opened' => 0,
    'scrollwheel' => 0,
    'draggable' => 1,
    'nokeyboard' => 0,
    'nodoubleclickzoom' => 0,
    'streetview_show' => 0,
    'travelmode_show' => 0,
    'transit_dates' => 0,
    'transit_date_format' => 'int',
    'travelextras_show' => 0,
    'map_backgroundcolor' => '',
    'from_width' => '20',
    'to_width' => '20',
    'use_country_dropdown' => 0,
    'use_advanced' => 0,
    'waypoints' => '0',
    'advanced_autocomplete_via' => 0,
    'advanced_autocomplete_via_width' => '20',
    'waypoints_optimise' => 0,
    'waypoint_color' => 'white',
    'advanced_alternate' => 0,
    'advanced_autocomplete' => 0,
    'advanced_autocomplete_bias' => 0,
    'region_bias' => '',
    'use_https' => 0,
  );
  $export['getdirections_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_misc';
  $strongarm->value = array(
    'getdirections_misc' => array(
      'keep_title' => 0,
    ),
    'show_distance' => 0,
    'show_duration' => 0,
    'geolocation_enable' => 0,
    'geolocation_mobile_check' => 1,
    'geolocation_option' => '1',
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'panoramio_use' => 0,
    'panoramio_show' => 0,
    'panoramio_state' => 0,
    'weather_use' => 0,
    'weather_show' => 0,
    'weather_state' => 0,
    'weather_temp' => '1',
    'weather_speed' => '1',
    'weather_label' => '0',
    'weather_clickable' => 1,
    'weather_info' => 1,
    'weather_cloud' => 1,
    'weather_cloud_state' => 0,
    'switchfromto' => 1,
  );
  $export['getdirections_misc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_paths';
  $strongarm->value = array(
    'getdirections_v3_path' => drupal_get_path('module', 'getdirections') . '/js/getdirections_v3.js',
    'getdirections_v3a_path' => drupal_get_path('module', 'getdirections') . '/js/getdirections_v3a.js',
    'getdirections_v3b_path' => drupal_get_path('module', 'getdirections') . '/js/getdirections_v3b.js',
    'getdirections_preview_path' => drupal_get_path('module', 'getdirections') . '/js/getdirections_preview.js',
  );
  $export['getdirections_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_returnlink';
  $strongarm->value = array(
    'node_enable' => 0,
    'node_link' => 'Return to page',
  );
  $export['getdirections_returnlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_ua';
  $strongarm->value = array(
    'ua_string' => 'iphone|ipad|android|blackberry|blazer|bolt|symbian|mobile safari|fennec|gobrowser|iemobile|maemo browser|profile midp|minimo|kindle|opera mini|opera mobi|skyfire|teashark|uzardweb',
  );
  $export['getdirections_ua'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_use_v3';
  $strongarm->value = 1;
  $export['getdirections_use_v3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_location';
  $strongarm->value = '4';
  $export['language_content_type_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_location';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_location';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_location';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_location';
  $strongarm->value = '0';
  $export['node_preview_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_location';
  $strongarm->value = 0;
  $export['node_submitted_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_location_pattern';
  $strongarm->value = 'location/[node:title]';
  $export['pathauto_node_location_pattern'] = $strongarm;

  return $export;
}
