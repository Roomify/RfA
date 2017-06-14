<?php

/**
 * @file
 * roomify_landing_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function roomify_landing_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-eb_background-eb_selection'.
  $field_instances['field_collection_item-eb_background-eb_selection'] = array(
    'bundle' => 'eb_background',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'eb_selection',
    'label' => 'Selection',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => -50,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_color'.
  $field_instances['field_collection_item-eb_background-field_eb_color'] = array(
    'bundle' => 'eb_background',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_color',
    'label' => 'Color',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'jquery_colorpicker',
      'settings' => array(),
      'type' => 'jquery_colorpicker',
      'weight' => -47,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_image'.
  $field_instances['field_collection_item-eb_background-field_eb_image'] = array(
    'bundle' => 'eb_background',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'manualcrop_crop_info' => TRUE,
        'manualcrop_default_crop_area' => TRUE,
        'manualcrop_enable' => FALSE,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => TRUE,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => FALSE,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -49,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-eb_background-field_eb_image_style'.
  $field_instances['field_collection_item-eb_background-field_eb_image_style'] = array(
    'bundle' => 'eb_background',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_eb_image_style',
    'label' => 'Style',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => -48,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_landing_page_css_class'.
  $field_instances['node-landing_page-field_landing_page_css_class'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add A Css class to this landing page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'landing_page_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_landing_page_css_class',
    'label' => 'Css Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-landing_page-field_landing_page_edge_to_edge'.
  $field_instances['node-landing_page-field_landing_page_edge_to_edge'] = array(
    'bundle' => 'landing_page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this if you want this content edge to edge',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'landing_page_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_landing_page_edge_to_edge',
    'label' => 'Is Edge to Edge',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-landing_page-field_landing_page_rows'.
  $field_instances['node-landing_page-field_landing_page_rows'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => '',
            ),
          ),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'landing_page_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_landing_page_rows',
    'label' => 'Rows',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        '1_column_row' => '1_column_row',
        '2_columns_row' => '2_columns_row',
        '3_columns_row' => '3_columns_row',
        '4_columns_row' => '4_columns_row',
        'activity' => -1,
        'area' => -1,
        'block' => -1,
        'blogpost' => -1,
        'image' => -1,
        'image_and_text' => -1,
        'latest_blog_posts' => 'latest_blog_posts',
        'linked_image' => -1,
        'linked_image_and_text' => -1,
        'location_map' => -1,
        'property' => -1,
        'slideshow' => -1,
        'text' => -1,
      ),
      'bundle_weights' => array(
        '1_column_row' => -23,
        '2_columns_row' => -22,
        '3_columns_row' => -21,
        '4_columns_row' => -20,
        'activity' => 6,
        'area' => 7,
        'block' => 8,
        'blogpost' => 9,
        'image' => -18,
        'image_and_text' => -17,
        'latest_blog_posts' => 12,
        'linked_image' => -16,
        'linked_image_and_text' => -15,
        'location_map' => 15,
        'property' => 16,
        'slideshow' => 17,
        'text' => -24,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Row',
      'title_multiple' => 'Rows',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-landing_page-title_field'.
  $field_instances['node-landing_page-title_field'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'landing_page_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_column_row-eb_background'.
  $field_instances['paragraphs_item-1_column_row-eb_background'] = array(
    'bundle' => '1_column_row',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_column_row-field_cta_class'.
  $field_instances['paragraphs_item-1_column_row-field_cta_class'] = array(
    'bundle' => '1_column_row',
    'default_value' => array(
      0 => array(
        'value' => 'agency_1_column_row',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_class',
    'label' => 'Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_column_row-field_cta_edge_to_edge'.
  $field_instances['paragraphs_item-1_column_row-field_cta_edge_to_edge'] = array(
    'bundle' => '1_column_row',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_edge_to_edge',
    'label' => 'Edge to Edge',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_column_row-field_cta_row_title'.
  $field_instances['paragraphs_item-1_column_row-field_cta_row_title'] = array(
    'bundle' => '1_column_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_row_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1_column_row-field_first_column'.
  $field_instances['paragraphs_item-1_column_row-field_first_column'] = array(
    'bundle' => '1_column_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_first_column',
    'label' => 'First Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 2,
        '2_columns_row' => 3,
        '3_columns_row' => 4,
        '4_columns_row' => 5,
        'activity' => -26,
        'area' => 30,
        'block' => 16,
        'blogpost' => 23,
        'image' => 6,
        'image_and_text' => 7,
        'latest_blog_posts' => -36,
        'linked_image' => 8,
        'linked_image_and_text' => 9,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_column_row-field_row_admin_title'.
  $field_instances['paragraphs_item-1_column_row-field_row_admin_title'] = array(
    'bundle' => '1_column_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This title will be used administratively to identify this row. It will not be shown to the user.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_admin_title',
    'label' => 'Administrative Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1_column_row-field_row_css_class'.
  $field_instances['paragraphs_item-1_column_row-field_row_css_class'] = array(
    'bundle' => '1_column_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a CSS Class to this row.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_css_class',
    'label' => 'CSS Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_columns_row-eb_background'.
  $field_instances['paragraphs_item-2_columns_row-eb_background'] = array(
    'bundle' => '2_columns_row',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2_columns_row-field_cta_class'.
  $field_instances['paragraphs_item-2_columns_row-field_cta_class'] = array(
    'bundle' => '2_columns_row',
    'default_value' => array(
      0 => array(
        'value' => 'agency_2_columns_row',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_class',
    'label' => 'Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_columns_row-field_cta_edge_to_edge'.
  $field_instances['paragraphs_item-2_columns_row-field_cta_edge_to_edge'] = array(
    'bundle' => '2_columns_row',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Mark this checkbox if you want content edge to edge',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_edge_to_edge',
    'label' => 'Edge to Edge',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_columns_row-field_cta_row_title'.
  $field_instances['paragraphs_item-2_columns_row-field_cta_row_title'] = array(
    'bundle' => '2_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_row_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_columns_row-field_first_column'.
  $field_instances['paragraphs_item-2_columns_row-field_first_column'] = array(
    'bundle' => '2_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_first_column',
    'label' => 'First Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 16,
        '2_columns_row' => 2,
        '3_columns_row' => 12,
        '4_columns_row' => -18,
        'activity' => -26,
        'area' => 30,
        'block' => 23,
        'blogpost' => -24,
        'image' => 14,
        'image_and_text' => -14,
        'latest_blog_posts' => -36,
        'linked_image' => 8,
        'linked_image_and_text' => 9,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_columns_row-field_row_admin_title'.
  $field_instances['paragraphs_item-2_columns_row-field_row_admin_title'] = array(
    'bundle' => '2_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This title will be used administratively to identify this row. It will not be shown to the user.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_admin_title',
    'label' => 'Administrative Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_columns_row-field_row_css_class'.
  $field_instances['paragraphs_item-2_columns_row-field_row_css_class'] = array(
    'bundle' => '2_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a CSS Class to this row.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_css_class',
    'label' => 'CSS Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2_columns_row-field_second_column'.
  $field_instances['paragraphs_item-2_columns_row-field_second_column'] = array(
    'bundle' => '2_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_second_column',
    'label' => 'Second Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 16,
        '2_columns_row' => 2,
        '3_columns_row' => 12,
        '4_columns_row' => -18,
        'activity' => -26,
        'area' => 30,
        'block' => 23,
        'blogpost' => -24,
        'image' => 14,
        'image_and_text' => -14,
        'latest_blog_posts' => -36,
        'linked_image' => 8,
        'linked_image_and_text' => 9,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3_columns_row-eb_background'.
  $field_instances['paragraphs_item-3_columns_row-eb_background'] = array(
    'bundle' => '3_columns_row',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3_columns_row-field_cta_class'.
  $field_instances['paragraphs_item-3_columns_row-field_cta_class'] = array(
    'bundle' => '3_columns_row',
    'default_value' => array(
      0 => array(
        'value' => 'agency_3_columns_row',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_class',
    'label' => 'Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_cta_edge_to_edge'.
  $field_instances['paragraphs_item-3_columns_row-field_cta_edge_to_edge'] = array(
    'bundle' => '3_columns_row',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_edge_to_edge',
    'label' => 'Edge to Edge',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_cta_row_title'.
  $field_instances['paragraphs_item-3_columns_row-field_cta_row_title'] = array(
    'bundle' => '3_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_row_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_first_column'.
  $field_instances['paragraphs_item-3_columns_row-field_first_column'] = array(
    'bundle' => '3_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_first_column',
    'label' => 'First Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 12,
        '2_columns_row' => 2,
        '3_columns_row' => 4,
        '4_columns_row' => 15,
        'activity' => -26,
        'area' => 29,
        'block' => -24,
        'blogpost' => 22,
        'image' => -14,
        'image_and_text' => -14,
        'latest_blog_posts' => -36,
        'linked_image' => 9,
        'linked_image_and_text' => 10,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_row_admin_title'.
  $field_instances['paragraphs_item-3_columns_row-field_row_admin_title'] = array(
    'bundle' => '3_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This title will be used administratively to identify this row. It will not be shown to the user.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_admin_title',
    'label' => 'Administrative Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_row_css_class'.
  $field_instances['paragraphs_item-3_columns_row-field_row_css_class'] = array(
    'bundle' => '3_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a CSS class to this row.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_css_class',
    'label' => 'CSS Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_second_column'.
  $field_instances['paragraphs_item-3_columns_row-field_second_column'] = array(
    'bundle' => '3_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_second_column',
    'label' => 'Second Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 12,
        '2_columns_row' => 2,
        '3_columns_row' => 4,
        '4_columns_row' => 15,
        'activity' => -26,
        'area' => 29,
        'block' => 22,
        'blogpost' => -24,
        'image' => -14,
        'image_and_text' => -14,
        'latest_blog_posts' => -36,
        'linked_image' => 9,
        'linked_image_and_text' => 10,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3_columns_row-field_third_column'.
  $field_instances['paragraphs_item-3_columns_row-field_third_column'] = array(
    'bundle' => '3_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_third_column',
    'label' => 'Third Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 12,
        '2_columns_row' => 2,
        '3_columns_row' => 4,
        '4_columns_row' => 15,
        'activity' => -26,
        'area' => 29,
        'block' => 22,
        'blogpost' => -24,
        'image' => -14,
        'image_and_text' => -14,
        'latest_blog_posts' => -36,
        'linked_image' => 9,
        'linked_image_and_text' => 10,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4_columns_row-eb_background'.
  $field_instances['paragraphs_item-4_columns_row-eb_background'] = array(
    'bundle' => '4_columns_row',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'eb_background',
    'label' => 'Background',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4_columns_row-field_cta_class'.
  $field_instances['paragraphs_item-4_columns_row-field_cta_class'] = array(
    'bundle' => '4_columns_row',
    'default_value' => array(
      0 => array(
        'value' => 'agency_4_columns_row',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_class',
    'label' => 'Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_cta_edge_to_edge'.
  $field_instances['paragraphs_item-4_columns_row-field_cta_edge_to_edge'] = array(
    'bundle' => '4_columns_row',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Mark this checkbox if you want content edge to edge',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_edge_to_edge',
    'label' => 'Edge to Edge',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_cta_row_title'.
  $field_instances['paragraphs_item-4_columns_row-field_cta_row_title'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_row_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_first_column'.
  $field_instances['paragraphs_item-4_columns_row-field_first_column'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_first_column',
    'label' => 'First Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 13,
        '2_columns_row' => 2,
        '3_columns_row' => 3,
        '4_columns_row' => 4,
        'activity' => 26,
        'area' => -32,
        'block' => 20,
        'blogpost' => -24,
        'image' => 8,
        'image_and_text' => 9,
        'latest_blog_posts' => -36,
        'linked_image' => 10,
        'linked_image_and_text' => 11,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_fourth_column'.
  $field_instances['paragraphs_item-4_columns_row-field_fourth_column'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_fourth_column',
    'label' => 'Fourth Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 13,
        '2_columns_row' => 2,
        '3_columns_row' => 3,
        '4_columns_row' => 4,
        'activity' => 26,
        'area' => -32,
        'block' => 20,
        'blogpost' => -24,
        'image' => 8,
        'image_and_text' => 9,
        'latest_blog_posts' => -36,
        'linked_image' => 10,
        'linked_image_and_text' => 11,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_row_admin_title'.
  $field_instances['paragraphs_item-4_columns_row-field_row_admin_title'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This title will be used administratively to identify this row. It will not be shown to the user.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_admin_title',
    'label' => 'Administrative Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_row_css_class'.
  $field_instances['paragraphs_item-4_columns_row-field_row_css_class'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a CSS class to this row.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_row_css_class',
    'label' => 'CSS Class',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_second_column'.
  $field_instances['paragraphs_item-4_columns_row-field_second_column'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_second_column',
    'label' => 'Second Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 13,
        '2_columns_row' => 2,
        '3_columns_row' => 3,
        '4_columns_row' => 4,
        'activity' => 26,
        'area' => -32,
        'block' => 20,
        'blogpost' => -24,
        'image' => 8,
        'image_and_text' => 9,
        'latest_blog_posts' => -36,
        'linked_image' => 10,
        'linked_image_and_text' => 11,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4_columns_row-field_third_column'.
  $field_instances['paragraphs_item-4_columns_row-field_third_column'] = array(
    'bundle' => '4_columns_row',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_third_column',
    'label' => 'Third Column',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_column_row' => -1,
        '2_columns_row' => -1,
        '3_columns_row' => -1,
        '4_columns_row' => -1,
        'activity' => 'activity',
        'area' => 'area',
        'block' => 'block',
        'blogpost' => 'blogpost',
        'image' => 'image',
        'image_and_text' => 'image_and_text',
        'latest_blog_posts' => -1,
        'linked_image' => 'linked_image',
        'linked_image_and_text' => 'linked_image_and_text',
        'location_map' => 'location_map',
        'property' => 'property',
        'slideshow' => 'slideshow',
        'text' => 'text',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        '1_column_row' => 13,
        '2_columns_row' => 2,
        '3_columns_row' => 3,
        '4_columns_row' => 4,
        'activity' => 26,
        'area' => -32,
        'block' => 20,
        'blogpost' => -24,
        'image' => 8,
        'image_and_text' => 9,
        'latest_blog_posts' => -36,
        'linked_image' => 10,
        'linked_image_and_text' => 11,
        'location_map' => -28,
        'property' => -30,
        'slideshow' => -24,
        'text' => -18,
        'video' => -36,
      ),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'paragraphs_item-activity-field_cta_activity'.
  $field_instances['paragraphs_item-activity-field_cta_activity'] = array(
    'bundle' => 'activity',
    'default_value' => array(),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'links' => 1,
          'use_content_language' => TRUE,
          'view_mode' => 'landing_page_teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_activity',
    'label' => 'Activity',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-area-field_cta_area'.
  $field_instances['paragraphs_item-area-field_cta_area'] = array(
    'bundle' => 'area',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_area',
    'label' => 'Area',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block-field_cta_block'.
  $field_instances['paragraphs_item-block-field_cta_block'] = array(
    'bundle' => 'block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_block',
    'label' => 'Block',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-block-field_cta_title'.
  $field_instances['paragraphs_item-block-field_cta_title'] = array(
    'bundle' => 'block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-blogpost-field_cta_blogpost'.
  $field_instances['paragraphs_item-blogpost-field_cta_blogpost'] = array(
    'bundle' => 'blogpost',
    'default_value' => array(),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => '',
            ),
          ),
          'links' => 1,
          'use_content_language' => TRUE,
          'view_mode' => 'landing_page_teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_blogpost',
    'label' => 'Blogpost',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image-field_cta_image'.
  $field_instances['paragraphs_item-image-field_cta_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'rules_event',
              'configuration' => array(
                'rule' => 'rules_change_cta_image_style_',
              ),
            ),
          ),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'roomify_4_3' => 'roomify_4_3',
          'square' => 'square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image-field_cta_image_style'.
  $field_instances['paragraphs_item-image-field_cta_image_style'] = array(
    'bundle' => 'image',
    'default_value' => array(
      0 => array(
        'value' => 'squared',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image_style',
    'label' => 'Image Style',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image-field_cta_title'.
  $field_instances['paragraphs_item-image-field_cta_title'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_and_text-field_cta_image'.
  $field_instances['paragraphs_item-image_and_text-field_cta_image'] = array(
    'bundle' => 'image_and_text',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'rules_event',
              'configuration' => array(
                'rule' => 'rules_change_cta_image_style_',
              ),
            ),
          ),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'roomify_4_3' => 'roomify_4_3',
          'square' => 'square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_and_text-field_cta_image_style'.
  $field_instances['paragraphs_item-image_and_text-field_cta_image_style'] = array(
    'bundle' => 'image_and_text',
    'default_value' => array(
      0 => array(
        'value' => 'squared',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image_style',
    'label' => 'Image Style',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_and_text-field_cta_text'.
  $field_instances['paragraphs_item-image_and_text-field_cta_text'] = array(
    'bundle' => 'image_and_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_and_text-field_cta_title'.
  $field_instances['paragraphs_item-image_and_text-field_cta_title'] = array(
    'bundle' => 'image_and_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-latest_blog_posts-field_cta_add_link_to_blog'.
  $field_instances['paragraphs_item-latest_blog_posts-field_cta_add_link_to_blog'] = array(
    'bundle' => 'latest_blog_posts',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Adds  a link to the blog page on the bottom.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_add_link_to_blog',
    'label' => 'Add Link to Blog',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-latest_blog_posts-field_cta_row_title'.
  $field_instances['paragraphs_item-latest_blog_posts-field_cta_row_title'] = array(
    'bundle' => 'latest_blog_posts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_row_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-linked_image-field_cta_image'.
  $field_instances['paragraphs_item-linked_image-field_cta_image'] = array(
    'bundle' => 'linked_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image_link_formatter',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'rules_event',
              'configuration' => array(
                'rule' => 'rules_change_cta_image_style_',
              ),
            ),
          ),
          'image_link' => 'field_cta_link',
          'image_style' => '',
        ),
        'type' => 'image_link_formatter',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'roomify_4_3' => 'roomify_4_3',
          'square' => 'square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-linked_image-field_cta_image_style'.
  $field_instances['paragraphs_item-linked_image-field_cta_image_style'] = array(
    'bundle' => 'linked_image',
    'default_value' => array(
      0 => array(
        'value' => 'none',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image_style',
    'label' => 'Image Style',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-linked_image-field_cta_link'.
  $field_instances['paragraphs_item-linked_image-field_cta_link'] = array(
    'bundle' => 'linked_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-linked_image_and_text-field_cta_image'.
  $field_instances['paragraphs_item-linked_image_and_text-field_cta_image'] = array(
    'bundle' => 'linked_image_and_text',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image_link_formatter',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'rules_event',
              'configuration' => array(
                'rule' => 'rules_change_cta_image_style_',
              ),
            ),
          ),
          'image_link' => 'field_cta_link',
          'image_style' => '',
        ),
        'type' => 'image_link_formatter',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'roomify_4_3' => 'roomify_4_3',
          'square' => 'square',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-linked_image_and_text-field_cta_image_style'.
  $field_instances['paragraphs_item-linked_image_and_text-field_cta_image_style'] = array(
    'bundle' => 'linked_image_and_text',
    'default_value' => array(
      0 => array(
        'value' => 'squared',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_image_style',
    'label' => 'Image Style',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-linked_image_and_text-field_cta_link'.
  $field_instances['paragraphs_item-linked_image_and_text-field_cta_link'] = array(
    'bundle' => 'linked_image_and_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-linked_image_and_text-field_cta_text'.
  $field_instances['paragraphs_item-linked_image_and_text-field_cta_text'] = array(
    'bundle' => 'linked_image_and_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-location_map-field_cta_location'.
  $field_instances['paragraphs_item-location_map-field_cta_location'] = array(
    'bundle' => 'location_map',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_location',
    'label' => 'Location Map',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-property-field_cta_property'.
  $field_instances['paragraphs_item-property-field_cta_property'] = array(
    'bundle' => 'property',
    'default_value' => array(),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_property',
    'label' => 'Property',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-slideshow-field_cta_gallery'.
  $field_instances['paragraphs_item-slideshow-field_cta_gallery'] = array(
    'bundle' => 'slideshow',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_gallery',
    'label' => 'Gallery',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 1,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 1,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'roomify_1200x720' => 'roomify_1200x720',
          'roomify_slideshow_paragraph' => 'roomify_slideshow_paragraph',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-slideshow-field_cta_gallery_size'.
  $field_instances['paragraphs_item-slideshow-field_cta_gallery_size'] = array(
    'bundle' => 'slideshow',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose the gallery width and height, then crop the images with the right image style chosen here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_gallery_size',
    'label' => 'Gallery Size',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-slideshow-field_cta_title'.
  $field_instances['paragraphs_item-slideshow-field_cta_title'] = array(
    'bundle' => 'slideshow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text-field_cta_text'.
  $field_instances['paragraphs_item-text-field_cta_text'] = array(
    'bundle' => 'text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_cta_video'.
  $field_instances['paragraphs_item-video-field_cta_video'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'conditions' => array(),
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_cta_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 0,
      'description_length' => 128,
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity');
  t('Add A Css class to this landing page.');
  t('Add Link to Blog');
  t('Add a CSS Class to this row.');
  t('Add a CSS class to this row.');
  t('Adds  a link to the blog page on the bottom.');
  t('Administrative Title');
  t('Area');
  t('Background');
  t('Block');
  t('Blogpost');
  t('CSS Class');
  t('Check this if you want this content edge to edge');
  t('Choose the gallery width and height, then crop the images with the right image style chosen here.');
  t('Class');
  t('Color');
  t('Css Class');
  t('Edge to Edge');
  t('First Column');
  t('Fourth Column');
  t('Gallery');
  t('Gallery Size');
  t('Image');
  t('Image Style');
  t('Is Edge to Edge');
  t('Link');
  t('Location Map');
  t('Mark this checkbox if you want content edge to edge');
  t('Property');
  t('Rows');
  t('Second Column');
  t('Selection');
  t('Style');
  t('Text');
  t('Third Column');
  t('This title will be used administratively to identify this row. It will not be shown to the user.');
  t('Title');
  t('Video');

  return $field_instances;
}
