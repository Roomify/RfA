<?php

/**
 * @file
 * roomify_properties_list.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function roomify_properties_list_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|properties_list|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'properties_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_description|node|properties_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlights|node|properties_list|form';
  $field_group->group_name = 'group_highlights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'properties_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Highlights Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_sp_highlight_image1',
      1 => 'field_sp_highlight_image1_cap',
      2 => 'field_sp_highlight_image2',
      3 => 'field_sp_highlight_image2_cap',
      4 => 'field_sp_highlight_image3',
      5 => 'field_sp_highlight_image3_cap',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Highlights Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-highlights field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_highlights|node|properties_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_properties|node|properties_list|form';
  $field_group->group_name = 'group_properties';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'properties_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Properties',
    'weight' => '4',
    'children' => array(
      0 => 'field_properties_list_properties',
      1 => 'field_pl_area_facet',
      2 => 'field_pl_area_type_filter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-properties field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_properties|node|properties_list|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Highlights Images');
  t('Properties');

  return $field_groups;
}
