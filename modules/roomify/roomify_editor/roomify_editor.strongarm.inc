<?php

/**
 * @file
 * roomify_editor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function roomify_editor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'assets_default_wysiwyg_modes';
  $strongarm->value = array(
    'image' => 'medium',
  );
  $export['assets_default_wysiwyg_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'assets_wysiwyg_modes';
  $strongarm->value = array(
    'image' => array(
      'full' => 'full',
      'small' => 'small',
      'medium' => 'medium',
    ),
  );
  $export['assets_wysiwyg_modes'] = $strongarm;

  return $export;
}
