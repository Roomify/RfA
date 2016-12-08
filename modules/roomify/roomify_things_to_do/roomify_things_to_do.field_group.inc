<?php

/**
 * @file
 * roomify_things_to_do.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function roomify_things_to_do_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activity_description|node|activity|form';
  $field_group->group_name = 'group_activity_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_activity_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-activity-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_activity_description|node|activity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activity_location|node|activity|form';
  $field_group->group_name = 'group_activity_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_address',
      1 => 'field_map_coordinates',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-activity-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_activity_location|node|activity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activity_slideshow|node|activity|form';
  $field_group->group_name = 'group_activity_slideshow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slideshow',
    'weight' => '3',
    'children' => array(
      0 => 'field_activity_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-activity-slideshow field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_activity_slideshow|node|activity|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Location');
  t('Slideshow');

  return $field_groups;
}
