<?php

/**
 * @file
 * roomify_mapping.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function roomify_mapping_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_description|node|location|form';
  $field_group->group_name = 'group_location_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_location_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_description|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_how_to_get_here|node|location|form';
  $field_group->group_name = 'group_location_how_to_get_here';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'How to find the place',
    'weight' => '5',
    'children' => array(
      0 => 'field_location_how_to_get_here',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-how-to-get-here field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_how_to_get_here|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_location|node|location|form';
  $field_group->group_name = 'group_location_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
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
        'classes' => 'group-location-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location_location|node|location|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('How to find the place');
  t('Location');

  return $field_groups;
}
