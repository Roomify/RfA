<?php

/**
 * @file
 */

/**
 * Create Property fields.
 */
function roomify_listing_create_property_fields($property_bundle) {
  $field_bases = array();

  if (field_read_field('field_sp_owner') === FALSE) {
    $field_bases['field_sp_owner'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_owner',
      'locked' => 0,
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'property' => 'name',
            'type' => 'property',
          ),
          'target_bundles' => array(),
        ),
        'target_type' => 'user',
      ),
      'type' => 'entityreference',
    );
  }

  if (field_read_field('field_sp_manager') === FALSE) {
    $field_bases['field_sp_manager'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_manager',
      'locked' => 0,
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'ASC',
            'property' => 'name',
            'type' => 'property',
          ),
          'target_bundles' => array(),
        ),
        'target_type' => 'user',
      ),
      'type' => 'entityreference',
    );
  }

  if (field_read_field('field_sp_description') === FALSE) {
    $field_bases['field_sp_description'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_description',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_sp_short_description') === FALSE) {
    $field_bases['field_sp_short_description'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_short_description',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_sp_featured_image') === FALSE) {
    $field_bases['field_sp_featured_image'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_sp_featured_image',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('field_sp_property_type') === FALSE) {
    $field_bases['field_sp_property_type'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_property_type',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'property_type',
            'parent' => 0,
          ),
        ),
      ),
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_sp_allow_instant_bookings') === FALSE) {
    $field_bases['field_sp_allow_instant_bookings'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_allow_instant_bookings',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'type' => 'list_boolean',
    );
  }

  if (field_read_field('field_sp_gallery') === FALSE) {
    $field_bases['field_sp_gallery'] = array(
      'cardinality' => -1,
      'field_name' => 'field_sp_gallery',
      'locked' => 0,
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 1,
      'type' => 'image',
    );
  }

  if (field_read_field('field_sp_amenities') === FALSE) {
    $field_bases['field_sp_amenities'] = array(
      'cardinality' => -1,
      'field_name' => 'field_sp_amenities',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'amenities',
            'parent' => 0,
          ),
        ),
      ),
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_sp_area') === FALSE) {
    $field_bases['field_sp_area'] = array(
      'cardinality' => -1,
      'field_name' => 'field_sp_area',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'location',
            'parent' => 0,
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_sp_area_type') === FALSE) {
    $field_bases['field_sp_area_type'] = array(
      'cardinality' => -1,
      'field_name' => 'field_sp_area_type',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'area_type',
            'parent' => 0,
          ),
        ),
        'profile2_private' => FALSE,
      ),
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_sp_address') === FALSE) {
    $field_bases['field_sp_address'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_sp_address',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  if (field_read_field('field_sp_location') === FALSE) {
    $field_bases['field_sp_location'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_location',
      'locked' => 0,
      'settings' => array(
        'backend' => 'default',
        'srid' => 4326,
      ),
      'type' => 'geofield',
    );
  }

  if (field_read_field('field_sp_how_to_reach') === FALSE) {
    $field_bases['field_sp_how_to_reach'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_how_to_reach',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_sp_essentials') === FALSE) {
    $field_bases['field_sp_essentials'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_essentials',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_sp_policies') === FALSE) {
    $field_bases['field_sp_policies'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_policies',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_sp_highlight_title') === FALSE) {
    $field_bases['field_sp_highlight_title'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_highlight_title',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_sp_highlight_intro') === FALSE) {
    $field_bases['field_sp_highlight_intro'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_highlight_intro',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_sp_highlight_image1') === FALSE) {
    $field_bases['field_sp_highlight_image1'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_sp_highlight_image1',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('field_sp_highlight_image1_cap') === FALSE) {
    $field_bases['field_sp_highlight_image1_cap'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_highlight_image1_cap',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_sp_highlight_image2') === FALSE) {
    $field_bases['field_sp_highlight_image2'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_sp_highlight_image2',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('field_sp_highlight_image2_cap') === FALSE) {
    $field_bases['field_sp_highlight_image2_cap'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_highlight_image2_cap',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_sp_highlight_image3') === FALSE) {
    $field_bases['field_sp_highlight_image3'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_sp_highlight_image3',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('field_sp_highlight_image3_cap') === FALSE) {
    $field_bases['field_sp_highlight_image3_cap'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_highlight_image3_cap',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_tax_description') === FALSE) {
    $field_bases['field_tax_description'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_tax_description',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  if (field_read_field('field_tax_enable') === FALSE) {
    $field_bases['field_tax_enable'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_tax_enable',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    );
  }

  if (field_read_field('field_tax_rate') === FALSE) {
    $field_bases['field_tax_rate'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_tax_rate',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'profile2_private' => FALSE,
        'scale' => 4,
      ),
      'translatable' => 0,
      'type' => 'number_decimal',
    );
  }

  if (field_read_field('field_tax_rule_id') === FALSE) {
    $field_bases['field_tax_rule_id'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_tax_rule_id',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  if (field_read_field('field_sp_property_details') === FALSE) {
    $field_bases['field_sp_property_details'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_sp_property_details',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_sp_weight') === FALSE) {
    $field_bases['field_sp_weight'] = array(
      'cardinality' => 1,
      'field_name' => 'field_sp_weight',
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          -10 => '-10',
          -9 => '-9',
          -8 => '-8',
          -7 => '-7',
          -6 => '-6',
          -5 => '-5',
          -4 => '-4',
          -3 => '-3',
          -2 => '-2',
          -1 => '-1',
          0 => '0',
          1 => '1',
          2 => '2',
          3 => '3',
          4 => '4',
          5 => '5',
          6 => '6',
          7 => '7',
          8 => '8',
          9 => '9',
          10 => '10',
        ),
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_integer',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('roomify_property', 'field_sp_owner', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_owner'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'default_value_function' => '',
      'description' => "Enter the user name of this property's owner. This field defaults to this property's author, but may be set to another user. This name is used for reporting purposes, displaying the owner's name on Conversations and displaying a property owner's name/picture. Conversation notifications and editing privileges remain with the author of this property.",
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'conditions' => array(),
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_owner',
      'label' => 'Owner profile',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'status' => 0,
          ),
        ),
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
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_manager', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_manager'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'default_value_function' => '',
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
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_manager',
      'label' => 'Manager',
      'required' => 1,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'status' => 0,
          ),
        ),
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
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_description', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_description'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_description',
      'label' => 'Property Description',
      'required' => 1,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_short_description', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_short_description'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'Provide a short description of the listing to show under the main title.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_short_description',
      'label' => 'Property Short Description',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_featured_image', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_featured_image'] = array(
      'bundle' => $property_bundle,
      'description' => 'This is the image used in search results and anywhere your listing may be featured.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_featured_image',
      'label' => 'Search/Featured Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'dragdropfile_enabled' => 0,
          'dragdropfile_title' => '',
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 0,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'homepage_features' => 'homepage_features',
            'roomify_4_3' => 'roomify_4_3',
            'square' => 'square',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'medium',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 5,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_property_type', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_property_type'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'You may add new Property Types, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/property_type" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_property_type',
      'label' => 'Property type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_allow_instant_bookings', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_allow_instant_bookings'] = array(
      'bundle' => $property_bundle,
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'description' => 'Enabling instant bookings means that users will be able to book and pay immediately. Make sure to setup a suitable payment method.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 49,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_allow_instant_bookings',
      'label' => 'Allow instant bookings',
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
        'weight' => 22,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_gallery', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_gallery'] = array(
      'bundle' => $property_bundle,
      'description' => 'These images are displayed in the slideshow on your listing page. These should be high quality images in order to best display your listing, minimum dimensions are 960x450 pixels.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
            'nivo_formatter_image_style' => 'large',
            'nivo_formatter_nivo_slider' => array(
              'animSpeed' => 500,
              'boxCols' => 8,
              'boxRows' => 4,
              'captionOpacity' => 0.8,
              'controlNav' => TRUE,
              'directionNav' => 1,
              'directionNavHide' => TRUE,
              'effect' => array(
                'random' => 'random',
              ),
              'keyboardNav' => TRUE,
              'manualAdvance' => 0,
              'nextText' => 'Next',
              'pauseOnHover' => TRUE,
              'pauseTime' => 3000,
              'prevText' => 'Prev',
              'slices' => 15,
              'startSlide' => 0,
            ),
            'nivo_formatter_theme' => 'default',
            'nivo_slider_thumbnail' => array(
              'controlNavThumbs' => TRUE,
              'thumbnail_style' => 'thumbnail',
            ),
          ),
          'type' => 'image',
          'weight' => 50,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_gallery',
      'label' => 'Image Gallery',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_imagefield_widget',
        'settings' => array(
          'dragdropfile_enabled' => 1,
          'dragdropfile_title' => 'Drag 1 or more on this area to upload with ease',
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'property_slider' => 'property_slider',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_miw',
        'weight' => 23,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_amenities', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_amenities'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'You may add new Amenities, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/amenities" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_amenities',
      'label' => 'Property Amenities',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => 10,
          'min_length' => 0,
          'not_found_message' => 'The term \'@term\' will be added.',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_area', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_area'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'You may add new Areas, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/location" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_area',
      'label' => 'Area',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => 10,
          'min_length' => 0,
          'not_found_message' => 'The area \'@term\' will be added.',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => 8,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_area_type', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_area_type'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'You may add new Area Types, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/area_type" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 22,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_area_type',
      'label' => 'Area Type',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => 10,
          'min_length' => 0,
          'not_found_message' => 'The area type \'@term\' will be added.',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => 9,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_location', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_location'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'You can enter your address here and we will attempt to locate it on the map. If the placement is not precise you can move the marker to correct the location.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield_gmap',
        'settings' => array(
          'click_to_place_marker' => 0,
          'confirm_center_marker' => 0,
          'html5_geolocation' => 0,
          'map_type' => 'ROADMAP',
          'zoom_after_address_change' => 1,
          'zoom_level' => 1,
        ),
        'type' => 'geofield_gmap',
        'weight' => 10,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_address', $property_bundle) === FALSE) {
    $field_instances['roomify_property-casa_property-field_sp_address'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'This is the address that will be shown to users. Use the Geocode address to describe the exact spot on the map.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 60,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_address',
      'label' => 'Address',
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
        'weight' => 10,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_how_to_reach', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_how_to_reach'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'Please provide additional written instructions about how to get to your place.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 38,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_how_to_reach',
      'label' => 'How to reach the Place',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 3,
        ),
        'type' => 'text_textarea',
        'weight' => 12,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_essentials', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_essentials'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'Please give guests information about nearby essential services such as grocery stores, pharmacies, etc. here.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 39,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_essentials',
      'label' => 'Essentials Nearby',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 13,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_policies', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_policies'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => 'Add any important information for guests here, including check in/out times, key pick up, etc. Also include your cancellation and refund policy.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 40,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_policies',
      'label' => 'Policies',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 11,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_title', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_title'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_title',
      'label' => 'Highlight Title',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 28,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_intro', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_intro'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_intro',
      'label' => 'Highlight Intro',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 29,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_image1', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_image1'] = array(
      'bundle' => $property_bundle,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 54,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_image1',
      'label' => 'Highlight Image 1',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'dragdropfile_title' => 0,
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 0,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'highlight' => 'highlight',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 30,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_image1_cap', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_image1_cap'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_image1_cap',
      'label' => 'Highlight Image 1 Caption',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 31,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_image2', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_image2'] = array(
      'bundle' => $property_bundle,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 56,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_image2',
      'label' => 'Highlight Image 2',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'dragdropfile_title' => 0,
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 0,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'highlight' => 'highlight',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 32,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_image2_cap', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_image2_cap'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_image2_cap',
      'label' => 'Highlight Image 2 Caption',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 33,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_image3', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_image3'] = array(
      'bundle' => $property_bundle,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 58,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_image3',
      'label' => 'Highlight Image 3',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'dragdropfile_title' => 0,
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 0,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'highlight' => 'highlight',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 34,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_highlight_image3_cap', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_highlight_image3_cap'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_highlight_image3_cap',
      'label' => 'Highlight Image 3 Caption',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'weight' => 35,
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_tax_description', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_tax_description'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter the text to be shown to guests placing a booking for this listing, describing the taxes they are paying. Example: "Denver municipal + Colorado accommodation taxes."',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 24,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_tax_description',
      'label' => 'Tax description',
      'required' => 0,
      'settings' => array(
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
        'weight' => 33,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_tax_enable', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_tax_enable'] = array(
      'bundle' => $property_bundle,
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
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 27,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_tax_enable',
      'label' => 'Enable Tax',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 32,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_tax_rate', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_tax_rate'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter the total tax rate for your listing as a percentage. For instance, if you have State tax of 10% and local tax of 5%, enter 15 in this field.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'conditions' => array(),
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 4,
            'thousand_separator' => '',
          ),
          'type' => 'number_decimal',
          'weight' => 30,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_tax_rate',
      'label' => 'Tax rate',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 35,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_tax_rule_id', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_tax_rule_id'] = array(
      'bundle' => $property_bundle,
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
          'weight' => 26,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_tax_rule_id',
      'label' => 'Tax rule ID',
      'required' => 0,
      'settings' => array(
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
        'weight' => 36,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_property_details', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_property_details'] = array(
      'bundle' => $property_bundle,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter any details that guests should know about this property, such as directions or guidelines for use. This text will be included in reservation confirmation emails. If you provide Room Details, this text will be overridden by that information.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 66,
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_property_details',
      'label' => 'Property Details',
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
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 37,
      ),
    );
  }

  if (field_read_instance('roomify_property', 'field_sp_weight', $property_bundle) === FALSE) {
    $field_instances['roomify_property-standard_property-field_sp_weight'] = array(
      'bundle' => $property_bundle,
      'default_value' => array(
        0 => array(
          'value' => 0
        ),
      ),
      'entity_type' => 'roomify_property',
      'field_name' => 'field_sp_weight',
      'label' => 'Weight',
      'description' => 'Set this field to give a "weight" to the Property. This can be used on the default view of the availability search page where properties with a lighter weight will be displayed before.',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 44,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  $field_groups = array();

  if (field_group_load_field_group('group_basic_information', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_basic_information|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_basic_information';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Basic Information';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'field_sp_description',
      1 => 'field_sp_short_description',
      2 => 'field_sp_featured_image',
      3 => 'field_sp_property_type',
      4 => 'field_sp_allow_instant_bookings',
      5 => 'field_sp_allow_property_reviews',
      6 => 'field_sp_property_details',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_basic_information|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_image_gallery', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_image_gallery|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_image_gallery';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Image Gallery';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_sp_gallery',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_image_gallery|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_amenities', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_amenities|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_amenities';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Amenities';
    $field_group->weight = '3';
    $field_group->children = array(
      0 => 'field_sp_amenities',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_amenities|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_location', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_location|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_location';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Location';
    $field_group->weight = '4';
    $field_group->children = array(
      0 => 'field_sp_area',
      1 => 'field_sp_area_type',
      2 => 'field_sp_address',
      3 => 'field_sp_location',
      4 => 'field_sp_how_to_reach',
      5 => 'field_sp_essentials',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_location|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_policies', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_policies|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_policies';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Policies';
    $field_group->weight = '3';
    $field_group->children = array(
      0 => 'field_sp_policies',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_policies|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_highlight', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_highlight|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_highlight';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Highlight';
    $field_group->weight = '4';
    $field_group->children = array(
      0 => 'field_sp_highlight_title',
      1 => 'field_sp_highlight_intro',
      2 => 'field_sp_highlight_image1',
      3 => 'field_sp_highlight_image1_cap',
      4 => 'field_sp_highlight_image2',
      5 => 'field_sp_highlight_image2_cap',
      6 => 'field_sp_highlight_image3',
      7 => 'field_sp_highlight_image3_cap',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_highlight|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_taxes', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_taxes|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_taxes';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Taxes';
    $field_group->weight = '5';
    $field_group->children = array(
      0 => 'field_tax_description',
      1 => 'field_tax_enable',
      2 => 'field_tax_rate',
      3 => 'field_tax_rule_id',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_taxes|roomify_property|standard_property|form'] = $field_group;
  }

  if (field_group_load_field_group('group_ownership', 'roomify_property', $property_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_ownership|roomify_property|' . $property_bundle . '|form';
    $field_group->group_name = 'group_ownership';
    $field_group->entity_type = 'roomify_property';
    $field_group->bundle = $property_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Ownership';
    $field_group->weight = '6';
    $field_group->children = array(
      0 => 'field_sp_owner',
      1 => 'field_sp_manager',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_ownership|roomify_property|standard_property|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }
}

/**
 * Create Listing fields.
 */
function roomify_listing_create_standard_type_fields($type_bundle) {
  $field_bases = array();

  if (field_read_field('field_st_max_capacity') === FALSE) {
    $field_bases['field_st_max_capacity'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_max_capacity',
      'locked' => 0,
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'type' => 'number_integer',
    );
  }

  if (field_read_field('field_st_single_bed') === FALSE) {
    $field_bases['field_st_single_bed'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_single_bed',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => 0,
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
          8 => 8,
          9 => 9,
          10 => 10,
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'type' => 'list_integer',
    );
  }

  if (field_read_field('field_st_double_bed') === FALSE) {
    $field_bases['field_st_double_bed'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_double_bed',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => 0,
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
          8 => 8,
          9 => 9,
          10 => 10,
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'type' => 'list_integer',
    );
  }

  if (field_read_field('field_st_bedrooms') === FALSE) {
    $field_bases['field_st_bedrooms'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_bedrooms',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => 0,
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
          8 => 8,
          9 => 9,
          10 => 10,
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'type' => 'list_integer',
    );
  }

  if (field_read_field('field_st_bathrooms') === FALSE) {
    $field_bases['field_st_bathrooms'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_bathrooms',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => 0,
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
          8 => 8,
          9 => 9,
          10 => 10,
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'type' => 'list_integer',
    );
  }

  if (field_read_field('field_st_description') === FALSE) {
    $field_bases['field_st_description'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_description',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_st_default_price') === FALSE) {
    $field_bases['field_st_default_price'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_default_price',
      'locked' => 0,
      'settings' => array(),
      'type' => 'commerce_price',
    );
  }

  if (field_read_field('field_st_default_availability') === FALSE) {
    $field_bases['field_st_default_availability'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_default_availability',
      'locked' => 0,
      'settings' => array(
        'event_type' => '',
      ),
      'type' => 'bat_event_state_reference',
    );
  }

  if (field_read_field('field_st_allow_instant_bookings') === FALSE) {
    $field_bases['field_st_allow_instant_bookings'] = array(
      'cardinality' => 1,
      'field_name' => 'field_st_allow_instant_bookings',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'type' => 'list_boolean',
    );
  }

  if (field_read_field('field_st_gallery') === FALSE) {
    $field_bases['field_st_gallery'] = array(
      'cardinality' => -1,
      'field_name' => 'field_st_gallery',
      'locked' => 0,
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 1,
      'type' => 'image',
    );
  }

  if (field_read_field('field_st_amenities') === FALSE) {
    $field_bases['field_st_amenities'] = array(
      'cardinality' => -1,
      'field_name' => 'field_st_amenities',
      'locked' => 0,
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'amenities',
            'parent' => 0,
          ),
        ),
      ),
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_st_property_reference') === FALSE) {
    $field_bases['field_st_property_reference'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_st_property_reference',
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => 0,
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(),
        ),
        'profile2_private' => FALSE,
        'target_type' => 'roomify_property',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    );
  }

  if (field_read_field('field_st_details') === FALSE) {
    $field_bases['field_st_details'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_st_details',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('bat_type', 'field_st_max_capacity', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_max_capacity'] = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'conditions' => array(),
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_max_capacity',
      'label' => 'Max Capacity',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_single_bed', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_single_bed'] = array(
      'bundle' => $type_bundle,
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_single_bed',
      'label' => 'Single Beds',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_double_bed', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_double_bed'] = array(
      'bundle' => $type_bundle,
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_double_bed',
      'label' => 'Double beds',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_bedrooms', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_bedrooms'] = array(
      'bundle' => $type_bundle,
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_bedrooms',
      'label' => 'Bedrooms',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_bathrooms', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_bathrooms'] = array(
      'bundle' => $type_bundle,
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_bathrooms',
      'label' => 'Bathrooms',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_description', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_description'] = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_default_price', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_default_price'] = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'description' => 'Change this value to update the default night price of your property. This will override the Standard Rate.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_default_price',
      'label' => 'Default Cost',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_default_availability', $type_bundle) === FALSE) {
    $default_state = bat_event_load_state_by_machine_name(AVAILABLE);

    $field_instances['bat_type-standard_type-field_st_default_availability'] = array(
      'bundle' => $type_bundle,
      'default_value' => array(
        0 => array(
          'state_id' => $default_state['id'],
        ),
      ),
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'bat_event',
          'settings' => array(),
          'type' => 'bat_event_state_reference_default',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_default_availability',
      'label' => 'Default Availability',
      'required' => 0,
      'settings' => array(
        'event_type' => 'availability',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'bat_event',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'bat_event/state_event/autocomplete',
          'size' => 60,
        ),
        'type' => 'bat_event_reference_autocomplete',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_allow_instant_bookings', $type_bundle) === FALSE) {
    if ($type_bundle == 'room') {
      // Add the instant bookings only for rooms.
      $field_instances['bat_type-standard_type-field_st_allow_instant_bookings'] = array(
        'bundle' => $type_bundle,
        'default_value' => array(
          0 => array(
            'value' => 1,
          ),
        ),
        'description' => 'Enabling instant bookings means that users will be able to book and pay immediately. Make sure to setup a suitable payment method.',
        'display' => array(
          'default' => array(
            'label' => 'above',
            'module' => 'list',
            'settings' => array(
              'conditions' => array(),
            ),
            'type' => 'list_default',
            'weight' => 49,
          ),
        ),
        'entity_type' => 'bat_type',
        'field_name' => 'field_st_allow_instant_bookings',
        'label' => 'Allow instant bookings',
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
          'weight' => 22,
        ),
      );
    }
  }

  if (field_read_instance('bat_type', 'field_st_gallery', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_gallery'] = array(
      'bundle' => $type_bundle,
      'description' => 'These images are displayed in the slideshow on your listing page. These should be high quality images in order to best display your listing, minimum dimensions are 960x450 pixels.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
            'nivo_formatter_image_style' => 'large',
            'nivo_formatter_nivo_slider' => array(
              'animSpeed' => 500,
              'boxCols' => 8,
              'boxRows' => 4,
              'captionOpacity' => 0.8,
              'controlNav' => TRUE,
              'directionNav' => 1,
              'directionNavHide' => TRUE,
              'effect' => array(
                'random' => 'random',
              ),
              'keyboardNav' => TRUE,
              'manualAdvance' => 0,
              'nextText' => 'Next',
              'pauseOnHover' => TRUE,
              'pauseTime' => 3000,
              'prevText' => 'Prev',
              'slices' => 15,
              'startSlide' => 0,
            ),
            'nivo_formatter_theme' => 'default',
            'nivo_slider_thumbnail' => array(
              'controlNavThumbs' => TRUE,
              'thumbnail_style' => 'thumbnail',
            ),
          ),
          'type' => 'image',
          'weight' => 50,
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_gallery',
      'label' => 'Type Gallery',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'dragdropfile_enabled' => 1,
          'dragdropfile_title' => 'Drag 1 or more on this area to upload with ease',
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 0,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'homepage_features' => 'homepage_features',
            'roomify_1200x720' => 'roomify_1200x720',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 23,
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_amenities', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_amenities'] = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'taxonomy_term_reference_link',
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_amenities',
      'label' => 'Type Amenities',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => 10,
          'min_length' => 0,
          'not_found_message' => 'The term \'@term\' will be added.',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_property_reference', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_property_reference'] = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'default_value_function' => '',
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
          'weight' => 11,
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_property_reference',
      'label' => 'Property',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'status' => 0,
          ),
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
  }

  if (field_read_instance('bat_type', 'field_st_details', $type_bundle) === FALSE) {
    $field_instances['bat_type-standard_type-field_st_details'] = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter any details that guests should know about this Room Type, such as directions or guidelines for use. This text will be included in reservation confirmation emails and will override the Property details.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 55,
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_details',
      'label' => 'Room Details',
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
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 27,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  $field_groups = array();

  if (field_group_load_field_group('group_type_description', 'bat_type', $type_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_type_description|bat_type|' . $type_bundle . '|form';
    $field_group->group_name = 'group_type_description';
    $field_group->entity_type = 'bat_type';
    $field_group->bundle = $type_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Type Description';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'field_st_max_capacity',
      1 => 'field_st_single_bed',
      2 => 'field_st_double_bed',
      3 => 'field_st_bedrooms',
      4 => 'field_st_bathrooms',
      5 => 'field_st_description',
      6 => 'field_st_details',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Please select the number of beds, bedrooms and bathrooms in your listing. For single beds, select the number of beds in which one person would normally sleep. (Twins, Single Bunks) For double beds, select the number of beds in which two people would normally sleep. (Queens, Kings)',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_description|bat_type|standard_type|form'] = $field_group;
  }

  if (field_group_load_field_group('group_pricing_availability', 'bat_type', $type_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_pricing_availability|bat_type|' . $type_bundle . '|form';
    $field_group->group_name = 'group_pricing_availability';
    $field_group->entity_type = 'bat_type';
    $field_group->bundle = $type_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Pricing and Availability';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_st_default_price',
      1 => 'field_st_default_availability',
      3 => 'field_st_rates_for_person',
      4 => 'field_rates_ranges',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );

    // Add the instant bookings field if the type is a room.
    if ($type_bundle == 'room') {
      $field_group->children[2] = 'field_st_allow_instant_bookings';
    }
    $field_groups['group_pricing_availability|bat_type|standard_type|form'] = $field_group;
  }

  if (field_group_load_field_group('group_images', 'bat_type', $type_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_images|bat_type|' . $type_bundle . '|form';
    $field_group->group_name = 'group_images';
    $field_group->entity_type = 'bat_type';
    $field_group->bundle = $type_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Image';
    $field_group->weight = '3';
    $field_group->children = array(
      0 => 'field_st_gallery',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_images|bat_type|standard_type|form'] = $field_group;
  }

  if (field_group_load_field_group('group_amenities', 'bat_type', $type_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_amenities|bat_type|' . $type_bundle . '|form';
    $field_group->group_name = 'group_amenities';
    $field_group->entity_type = 'bat_type';
    $field_group->bundle = $type_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Amenities';
    $field_group->weight = '4';
    $field_group->children = array(
      0 => 'field_st_amenities',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_amenities|bat_type|standard_type|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }

  roomify_listing_add_field_rates_ranges($type_bundle);
  roomify_listing_add_field_st_rates_for_person($type_bundle);
  roomify_listing_add_field_st_calendar_reference($type_bundle);
}

/**
 * Add 'Property Owner' profile2 fields.
 */
function roomify_listing_property_owner_profile_fields() {
  $field_bases = array();

  if (field_read_field('property_owner_name') === FALSE) {
    $field_bases['property_owner_name'] = array(
      'cardinality' => 1,
      'field_name' => 'property_owner_name',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('property_owner_image') === FALSE) {
    $field_bases['property_owner_image'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_image',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('property_owner_bio') === FALSE) {
    $field_bases['property_owner_bio'] = array(
      'cardinality' => 1,
      'field_name' => 'property_owner_bio',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('property_owner_short_info') === FALSE) {
    $field_bases['property_owner_short_info'] = array(
      'cardinality' => 1,
      'field_name' => 'property_owner_short_info',
      'locked' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 150,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('property_owner_mailing_address') === FALSE) {
    $field_bases['property_owner_mailing_address'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_mailing_address',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'type' => 'addressfield',
    );
  }

  if (field_read_field('property_owner_facebook_page') === FALSE) {
    $field_bases['property_owner_facebook_page'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_facebook_page',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'profile2_private' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    );
  }

  if (field_read_field('property_owner_twitter_page') === FALSE) {
    $field_bases['property_owner_twitter_page'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_twitter_page',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'profile2_private' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    );
  }

  if (field_read_field('property_owner_pinterest_page') === FALSE) {
    $field_bases['property_owner_pinterest_page'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_pinterest_page',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'profile2_private' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    );
  }

  if (field_read_field('property_owner_instagram_page') === FALSE) {
    $field_bases['property_owner_instagram_page'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_instagram_page',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'profile2_private' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    );
  }

  if (field_read_field('property_owner_youtube_page') === FALSE) {
    $field_bases['property_owner_youtube_page'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_youtube_page',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'profile2_private' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    );
  }

  if (field_read_field('property_owner_google_page') === FALSE) {
    $field_bases['property_owner_google_page'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'property_owner_google_page',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'profile2_private' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('profile2', 'property_owner_name', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_name'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_name',
      'label' => 'Name',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_image', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_image'] = array(
      'bundle' => 'property_owner',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
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
            'homepage_features' => 'homepage_features',
            'square' => 'square',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 1,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 1,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_bio', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_bio'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_bio',
      'label' => 'Bio',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_short_info', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_short_info'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => t('This text will be shown on the property page. You may use it to define a telehone number or a short description'),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_short_info',
      'label' => 'Short Info',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 150,
        ),
        'type' => 'text_textfield',
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_mailing_address', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_mailing_address'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'This information is used to determine the correct taxes to charge guests.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'conditions' => array(),
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_mailing_address',
      'label' => 'Mailing Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'default_country' => 'site_default',
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-postal-code' => 0,
            'address-hide-street' => 0,
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
            'address-optional' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => 3,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_facebook_page', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_facebook_page'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => 'Use a link like http://www.facebook.com',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_facebook_page',
      'label' => 'Facebook',
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
        'title' => 'none',
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
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_twitter_page', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_twitter_page'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => 'Use a link like http://www.twitter.com',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_twitter_page',
      'label' => 'Twitter',
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
        'title' => 'none',
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
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_instagram_page', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_instagram_page'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => 'Use a link like http://www.instagram.com',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_instagram_page',
      'label' => 'Instagram',
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
        'title' => 'none',
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
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_pinterest_page', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_pinterest_page'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'description' => 'Use a link like http://www.pinterest.com',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_pinterest_page',
      'label' => 'Pinterest',
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
        'title' => 'none',
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
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_google_page', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_google_page'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Use a link like http://www.plus.google.com',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_google_page',
      'label' => 'Google Plus',
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
        'title' => 'none',
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
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('profile2', 'property_owner_youtube_page', 'property_owner') === FALSE) {
    $field_instances['profile2-property_owner-property_owner_youtube_page'] = array(
      'bundle' => 'property_owner',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Use a link like http://www.youtube.com',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'link_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'property_owner_youtube_page',
      'label' => 'Youtube',
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
        'title' => 'none',
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
        'weight' => 4,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  $field_groups = array();

  if (field_group_load_field_group('group_owner_social_pages', 'profile2', 'property_owner', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_owner_social_pages|profile2|property_owner|form';
    $field_group->group_name = 'group_owner_social_pages';
    $field_group->entity_type = 'profile2';
    $field_group->bundle = 'property_owner';
    $field_group->mode = 'form';
    $field_group->collapsible = FALSE;
    $field_group->collapsed = FALSE;
    $field_group->parent_name = '';
    $field_group->label = 'Social Pages';
    $field_group->weight = '4';
    $field_group->children = array(
      0 => 'property_owner_facebook_page',
      1 => 'property_owner_twitter_page',
      2 => 'property_owner_instagram_page',
      3 => 'property_owner_pinterest_page',
      4 => 'property_owner_google_page',
      5 => 'property_owner_youtube_page',
    );
    $field_group->format_type = 'fieldset';
    $field_group->format_settings = array(
      'label' => 'Social Pages',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    );

    $field_groups['group_owner_social_pages|profile2|property_owner|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }

}

/**
 * Add 'Guest' profile2 fields.
 */
function roomify_listing_guest_profile_fields() {
  $field_bases = array();

  if (field_read_field('guest_name') === FALSE) {
    $field_bases['guest_name'] = array(
      'cardinality' => 1,
      'field_name' => 'guest_name',
      'locked' => 0,
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'type' => 'text',
    );
  }

  if (field_read_field('guest_image') === FALSE) {
    $field_bases['guest_image'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'guest_image',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('guest_bio') === FALSE) {
    $field_bases['guest_bio'] = array(
      'cardinality' => 1,
      'field_name' => 'guest_bio',
      'locked' => 0,
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'type' => 'text_long',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('profile2', 'guest_name', 'guest') === FALSE) {
    $field_instances['profile2-guest-guest_name'] = array(
      'bundle' => 'guest',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'guest_name',
      'label' => 'Name',
      'required' => 0,
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
      ),
    );
  }

  if (field_read_instance('profile2', 'guest_image', 'guest') === FALSE) {
    $field_instances['profile2-guest-guest_image'] = array(
      'bundle' => 'guest',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'guest_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
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
            'square' => 'square',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 1,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 1,
      ),
    );
  }

  if (field_read_instance('profile2', 'guest_bio', 'guest') === FALSE) {
    $field_instances['profile2-guest-guest_bio'] = array(
      'bundle' => 'guest',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'guest_bio',
      'label' => 'Bio',
      'required' => 0,
      'settings' => array(
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }
}

/**
 * Add "Price" field on Pricing event type.
 */
function roomify_listing_create_pricing_field() {
  field_info_cache_clear();

  if (field_read_field('pricing_event_price') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'field_name' => 'pricing_event_price',
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => 0,
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'commerce_price',
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_event', 'pricing_event_price', 'pricing') === FALSE) {
    $instance = array(
      'bundle' => 'pricing',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'bat_event',
      'field_name' => 'pricing_event_price',
      'label' => 'Price',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => 1,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add event "Booking" reference field.
 */
function roomify_listing_add_booking_reference_field() {
  field_info_cache_clear();

  // "event_booking_reference" field.
  if (field_read_field('event_booking_reference') === FALSE) {
    $field = array(
      'field_name' => 'event_booking_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_booking',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "event_booking_reference" field instance.
  if (field_read_instance('bat_event', 'event_booking_reference', 'availability') === FALSE) {
    $instance = array(
      'field_name' => 'event_booking_reference',
      'entity_type' => 'bat_event',
      'label' => 'Booking',
      'bundle' => 'availability',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
      'display' => array(
        'default' => array(
          'label' => 'above',
          'type' => 'hidden',
          'weight' => '0',
          'settings' => array(),
        ),
      ),
    );
    field_create_instance($instance);
  }
}

/**
 *
 */
function roomify_listing_add_casa_field_tax_description_dependency() {
  $instances = field_info_instances();

  $dependee_id = $instances['roomify_property']['casa_property']['field_tax_enable']['id'];
  $dependent_id = $instances['roomify_property']['casa_property']['field_tax_description']['id'];

  $options = array(
    'state' => 'visible',
    'condition' => 'checked',
    'grouping' => 'AND',
    'effect' => 'show',
  );

  conditional_fields_dependency_insert($dependee_id, $dependent_id, $options);
}

/**
 *
 */
function roomify_listing_add_locanda_field_tax_description_dependency() {
  $instances = field_info_instances();

  $dependee_id = $instances['roomify_property']['locanda_property']['field_tax_enable']['id'];
  $dependent_id = $instances['roomify_property']['locanda_property']['field_tax_description']['id'];

  $options = array(
    'state' => 'visible',
    'condition' => 'checked',
    'grouping' => 'AND',
    'effect' => 'show',
  );

  conditional_fields_dependency_insert($dependee_id, $dependent_id, $options);
}

/**
 *
 */
function roomify_listing_add_casa_field_tax_rate_dependency() {
  $instances = field_info_instances();

  $dependee_id = $instances['roomify_property']['casa_property']['field_tax_enable']['id'];
  $dependent_id = $instances['roomify_property']['casa_property']['field_tax_rate']['id'];

  $options = array(
    'state' => 'visible',
    'condition' => 'checked',
    'grouping' => 'AND',
    'effect' => 'show',
  );

  conditional_fields_dependency_insert($dependee_id, $dependent_id, $options);
}

/**
 *
 */
function roomify_listing_add_locanda_field_tax_rate_dependency() {
  $instances = field_info_instances();

  $dependee_id = $instances['roomify_property']['locanda_property']['field_tax_enable']['id'];
  $dependent_id = $instances['roomify_property']['locanda_property']['field_tax_rate']['id'];

  $options = array(
    'state' => 'visible',
    'condition' => 'checked',
    'grouping' => 'AND',
    'effect' => 'show',
  );

  conditional_fields_dependency_insert($dependee_id, $dependent_id, $options);
}

/**
 *
 */
function roomify_listing_add_field_collection_rates_ranges() {
  $field_bases = array();

  if (field_read_field('field_max_people') === FALSE) {
    $field_bases['field_max_people'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_max_people',
      'locked' => 1,
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'number_integer',
    );
  }

  if (field_read_field('field_min_people') === FALSE) {
    $field_bases['field_min_people'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_min_people',
      'locked' => 1,
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'number_integer',
    );
  }

  if (field_read_field('field_rate_reference') === FALSE) {
    $field_bases['field_rate_reference'] = array(
      'cardinality' => 3,
      'entity_types' => array(),
      'field_name' => 'field_rate_reference',
      'locked' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'standard' => 'standard',
          ),
        ),
        'profile2_private' => FALSE,
        'target_type' => 'roomify_rate',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('field_collection_item', 'field_rate_reference', 'field_rates_ranges') === FALSE) {
    $field_instances['field_collection_item-field_rates_ranges-field_rate_reference'] = array(
      'bundle' => 'field_rates_ranges',
      'default_value' => NULL,
      'default_value_function' => '',
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
          'weight' => 0,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_rate_reference',
      'label' => 'Rate',
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
        'weight' => 1,
      ),
    );
  }

  if (field_read_instance('field_collection_item', 'field_min_people', 'field_rates_ranges') === FALSE) {
    $field_instances['field_collection_item-field_rates_ranges-field_min_people'] = array(
      'bundle' => 'field_rates_ranges',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'conditions' => array(),
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_min_people',
      'label' => 'Min people',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 2,
      ),
    );
  }

  if (field_read_instance('field_collection_item', 'field_max_people', 'field_rates_ranges') === FALSE) {
    $field_instances['field_collection_item-field_rates_ranges-field_max_people'] = array(
      'bundle' => 'field_rates_ranges',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'conditions' => array(),
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_max_people',
      'label' => 'Max people',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 3,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }
}

/**
 * @param $type_bundle
 */
function roomify_listing_add_field_rates_ranges($type_bundle) {
  if (field_read_field('field_rates_ranges') === FALSE) {
    $field = array(
      'cardinality' => -1,
      'entity_types' => array(),
      'field_name' => 'field_rates_ranges',
      'locked' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'hide_blank_items' => 1,
        'path' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'field_collection',
    );
    field_create_field($field);
  }

  if (field_read_instance('bat_type', 'field_rates_ranges', $type_bundle) === FALSE) {
    $instance = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Add',
            'conditions' => array(),
            'delete' => 'Delete',
            'description' => TRUE,
            'edit' => 'Edit',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => 54,
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_rates_ranges',
      'label' => 'Rates ranges',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 11,
      ),
    );
    field_create_instance($instance);
  }

  roomify_listing_add_field_collection_rates_ranges();
}

/**
 * @param $type_bundle
 */
function roomify_listing_add_field_st_rates_for_person($type_bundle) {
  if (field_read_field('field_st_rates_for_person') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_st_rates_for_person',
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    );
    field_create_field($field);
  }

  if (field_read_instance('bat_type', 'field_st_rates_for_person', $type_bundle) === FALSE) {
    $instance = array(
      'bundle' => $type_bundle,
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => "This setting enables pricing for your Room or House to be calculated based on the number of people that are staying in the Room/House. Create the desired rate ranges for this Room/House, and click on 'Save Type'. This will create new sets of rates (daily/weekly/monthly), that can be managed in the 'Manage Pricing' tab of your property.",
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 53,
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_rates_for_person',
      'label' => 'Vary rates based on number of people',
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
        'weight' => 10,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * @param $type_bundle
 */
function roomify_listing_add_field_st_calendar_reference($type_bundle) {
  if (field_read_field('field_st_calendar_reference') === FALSE) {
    $field = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_st_calendar_reference',
      'indexes' => array(
        'unit_type_id' => array(
          0 => 'unit_type_id',
        ),
      ),
      'locked' => 0,
      'module' => 'bat_calendar_reference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
        'referenceable_event_types' => array(
          1 => 1,
          2 => 0,
          3 => 0,
        ),
      ),
      'translatable' => 0,
      'type' => 'bat_calendar_unit_type_reference',
    );
    field_create_field($field);
  }

  if (field_read_instance('bat_type', 'field_st_calendar_reference', $type_bundle) === FALSE) {
    $instance = array(
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'bat_calendar_reference',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'bat_calendar_reference_timeline_view',
          'weight' => 57,
        ),
      ),
      'entity_type' => 'bat_type',
      'field_name' => 'field_st_calendar_reference',
      'label' => 'Calendar Reference',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'bat_calendar_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
        ),
        'type' => 'bat_calendar_reference_unit_type_autocomplete',
        'weight' => 43,
      ),
    );
    field_create_instance($instance);
  }
}
