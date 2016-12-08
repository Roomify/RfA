<?php

/**
 * @file
 * File roomify_system.entityqueue_default.inc.
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function roomify_system_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_properties';
  $queue->label = 'Featured Properties';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'roomify_property';
  $queue->settings = array(
    'target_bundles' => array(
      'casa_property' => 'casa_property',
      'locanda_property' => 'locanda_property',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['featured_properties'] = $queue;

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_areas';
  $queue->label = 'Featured Areas';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'taxonomy_term';
  $queue->settings = array(
    'target_bundles' => array(
      'location' => 'location',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['featured_areas'] = $queue;

  return $export;
}
