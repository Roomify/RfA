<?php

/**
 * @file
 * roomify_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function roomify_landing_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_4_columns_content|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_4_columns_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'group_4_row_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_4_columns_content|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_4_row_settings|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_4_row_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_4_columns_content';
  $field_group->data = array(
    'label' => 'Row Settings',
    'weight' => '1',
    'children' => array(
      0 => 'group_cta_background',
      1 => 'group_cta_row_title',
      2 => 'group_edge_to_edge',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_4_row_settings|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_background|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_cta_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_4_row_settings';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cta_background|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_row_title|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_cta_row_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_4_row_settings';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cta_row_title|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eb_color|field_collection_item|eb_background|form';
  $field_group->group_name = 'group_eb_color';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'eb_background';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Color',
    'weight' => 0,
    'children' => array(
      0 => 'field_eb_color',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_eb_color|field_collection_item|eb_background|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eb_image|field_collection_item|eb_background|form';
  $field_group->group_name = 'group_eb_image';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'eb_background';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => 0,
    'children' => array(
      0 => 'field_eb_image',
      1 => 'field_eb_image_style',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_eb_image|field_collection_item|eb_background|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edge_to_edge|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_edge_to_edge';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_4_row_settings';
  $field_group->data = array(
    'label' => 'Edge to Edge settings',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_edge_to_edge|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_element|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_first_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'First Element',
    'weight' => '9',
    'children' => array(
      0 => 'field_first_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-first-element field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_first_element|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_element|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_first_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'First Element',
    'weight' => '19',
    'children' => array(
      0 => 'field_first_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_first_element|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_element|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_first_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'First Element',
    'weight' => '12',
    'children' => array(
      0 => 'field_first_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_first_element|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_element|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_first_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'First Element',
    'weight' => '18',
    'children' => array(
      0 => 'field_first_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_first_element|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fourth_element|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_fourth_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'Fourth Element',
    'weight' => '24',
    'children' => array(
      0 => 'field_fourth_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_fourth_element|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landing_page_settings|node|landing_page|form';
  $field_group->group_name = 'group_landing_page_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '1',
    'children' => array(
      0 => 'group_landing_page_view',
      1 => 'group_landing_page_style',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-landing-page-settings field-group-htabs',
      ),
    ),
  );
  $field_groups['group_landing_page_settings|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landing_page_style|node|landing_page|form';
  $field_group->group_name = 'group_landing_page_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_landing_page_settings';
  $field_group->data = array(
    'label' => 'Style',
    'weight' => '3',
    'children' => array(
      0 => 'field_landing_page_css_class',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-landing-page-style field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_landing_page_style|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landing_page_view|node|landing_page|form';
  $field_group->group_name = 'group_landing_page_view';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_landing_page_settings';
  $field_group->data = array(
    'label' => 'View',
    'weight' => '2',
    'children' => array(
      0 => 'field_landing_page_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-landing-page-view field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_landing_page_view|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_background|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Background',
    'weight' => '4',
    'children' => array(
      0 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_background|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_background|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Background',
    'weight' => '13',
    'children' => array(
      0 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_background|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_background|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Background',
    'weight' => '16',
    'children' => array(
      0 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_background|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_background|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Background',
    'weight' => '19',
    'children' => array(
      0 => 'eb_background',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_background|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_content|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Content',
    'weight' => '5',
    'children' => array(
      0 => 'group_first_element',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_content|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_content|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Content',
    'weight' => '3',
    'children' => array(
      0 => 'group_first_element',
      1 => 'group_second_element',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_content|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_content|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Content',
    'weight' => '13',
    'children' => array(
      0 => 'group_first_element',
      1 => 'group_second_element',
      2 => 'group_third_element',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_content|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_content|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Content',
    'weight' => '12',
    'children' => array(
      0 => 'group_first_element',
      1 => 'group_fourth_element',
      2 => 'group_second_element',
      3 => 'group_third_element',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_content|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_css_class|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row_css_class';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Css Class',
    'weight' => '5',
    'children' => array(
      0 => 'field_row_css_class',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-row-css-class field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_css_class|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_css_class|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row_css_class';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Css Class',
    'weight' => '14',
    'children' => array(
      0 => 'field_row_css_class',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-row-css-class field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_css_class|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_css_class|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row_css_class';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Css Class',
    'weight' => '17',
    'children' => array(
      0 => 'field_row_css_class',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-row-css-class field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_css_class|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_css_class|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row_css_class';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Css Class',
    'weight' => '20',
    'children' => array(
      0 => 'field_row_css_class',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-row-css-class field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_css_class|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_settings|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Settings',
    'weight' => '3',
    'children' => array(
      0 => 'group_row_background',
      1 => 'group_row_css_class',
      2 => 'group_row_title',
      3 => 'group_row_view',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_settings|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_settings|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Settings',
    'weight' => '2',
    'children' => array(
      0 => 'group_row_background',
      1 => 'group_row_css_class',
      2 => 'group_row_title',
      3 => 'group_row_view',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_settings|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_settings|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Settings',
    'weight' => '12',
    'children' => array(
      0 => 'group_row_background',
      1 => 'group_row_css_class',
      2 => 'group_row_title',
      3 => 'group_row_view',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_settings|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_settings|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Row Settings',
    'weight' => '10',
    'children' => array(
      0 => 'group_row_background',
      1 => 'group_row_css_class',
      2 => 'group_row_title',
      3 => 'group_row_view',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_row_settings|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_title|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Title',
    'weight' => '2',
    'children' => array(
      0 => 'field_cta_row_title',
      1 => 'field_row_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_title|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_title|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Title',
    'weight' => '11',
    'children' => array(
      0 => 'field_cta_row_title',
      1 => 'field_row_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_title|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_title|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Title',
    'weight' => '14',
    'children' => array(
      0 => 'field_cta_row_title',
      1 => 'field_row_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Row Title',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row_title|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_title|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row_title';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row Title',
    'weight' => '17',
    'children' => array(
      0 => 'field_cta_row_title',
      1 => 'field_row_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_title|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_view|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row_view';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row view',
    'weight' => '3',
    'children' => array(
      0 => 'field_cta_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_view|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_view|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row_view';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row view',
    'weight' => '12',
    'children' => array(
      0 => 'field_cta_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_view|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_view|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row_view';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row view',
    'weight' => '15',
    'children' => array(
      0 => 'field_cta_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_view|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row_view|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row_view';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_settings';
  $field_group->data = array(
    'label' => 'Row view',
    'weight' => '18',
    'children' => array(
      0 => 'field_cta_edge_to_edge',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_row_view|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|paragraphs_item|1_column_row|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1_column_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit 1-Column Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_row_content',
      1 => 'group_row_settings',
    ),
    'format_type' => 'popup',
    'format_settings' => array(
      'label' => 'Edit 1-Column Row',
      'instance_settings' => array(
        'popup_title' => '',
        'popup_close_text' => 'Save & close',
        'link_title' => '',
        'link_classes' => 'button',
        'close_button_title' => '',
        'close_button_classes' => 'button',
        'extra_css' => array(),
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_row|paragraphs_item|1_column_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit 2-Column Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_row_content',
      1 => 'group_row_settings',
    ),
    'format_type' => 'popup',
    'format_settings' => array(
      'label' => 'Edit 2-Column Row',
      'instance_settings' => array(
        'popup_title' => '',
        'popup_close_text' => 'Save & close',
        'link_title' => '',
        'link_classes' => 'button',
        'close_button_title' => '',
        'close_button_classes' => 'button',
        'extra_css' => array(),
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_row|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit 3-Column Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_row_content',
      1 => 'group_row_settings',
    ),
    'format_type' => 'popup',
    'format_settings' => array(
      'label' => 'Edit 3-Column Row',
      'instance_settings' => array(
        'popup_title' => '',
        'popup_close_text' => 'Save & close',
        'link_title' => '',
        'link_classes' => 'button',
        'close_button_title' => '',
        'close_button_classes' => 'button',
        'extra_css' => array(),
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_row|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit 4-Column Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_row_content',
      1 => 'group_row_settings',
    ),
    'format_type' => 'popup',
    'format_settings' => array(
      'label' => 'Edit 4-Column Row',
      'instance_settings' => array(
        'popup_title' => '',
        'popup_close_text' => 'Save & close',
        'link_title' => '',
        'link_classes' => 'button',
        'close_button_title' => '',
        'close_button_classes' => 'button',
        'extra_css' => array(),
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_row|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_element|paragraphs_item|2_columns_row|form';
  $field_group->group_name = 'group_second_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'Second Element',
    'weight' => '21',
    'children' => array(
      0 => 'field_second_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_second_element|paragraphs_item|2_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_element|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_second_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'Second Element',
    'weight' => '13',
    'children' => array(
      0 => 'field_second_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_second_element|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_element|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_second_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'Second Element',
    'weight' => '20',
    'children' => array(
      0 => 'field_second_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_second_element|paragraphs_item|4_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_element|paragraphs_item|3_columns_row|form';
  $field_group->group_name = 'group_third_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '3_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'Third Element',
    'weight' => '14',
    'children' => array(
      0 => 'field_third_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_third_element|paragraphs_item|3_columns_row|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_element|paragraphs_item|4_columns_row|form';
  $field_group->group_name = 'group_third_element';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '4_columns_row';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_row_content';
  $field_group->data = array(
    'label' => 'Third Element',
    'weight' => '22',
    'children' => array(
      0 => 'field_third_column',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_third_element|paragraphs_item|4_columns_row|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Color');
  t('Content');
  t('Edge to Edge settings');
  t('Edit 1-Column Row');
  t('Edit 2-Column Row');
  t('Edit 3-Column Row');
  t('Edit 4-Column Row');
  t('First Element');
  t('Fourth Element');
  t('Image');
  t('Row Background');
  t('Row Content');
  t('Row Css Class');
  t('Row Settings');
  t('Row Title');
  t('Row view');
  t('Second Element');
  t('Settings');
  t('Style');
  t('Third Element');
  t('Title');
  t('View');

  return $field_groups;
}
