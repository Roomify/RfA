<?php

/**
 * @file
 */

/**
 * Create Roomify Things to do fields.
 */
function roomify_things_to_do_create_fields() {
  $field_bases = array();

  if (field_read_field('field_activity_image') === FALSE) {
    $field_bases['field_activity_image'] = array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_activity_image',
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
      'translatable' => 1,
      'type' => 'image',
    );
  }

  if (field_read_field('field_activity_sticky_at_top') === FALSE) {
    $field_bases['field_activity_sticky_at_top'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_activity_sticky_at_top',
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
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    );
  }

  if (field_read_field('field_activity_type') === FALSE) {
    $field_bases['field_activity_type'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_activity_type',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'activity',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
      ),
      'translatable' => 1,
      'type' => 'taxonomy_term_reference',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('node', 'body', 'activity') === FALSE) {
    $field_instances['node-activity-body'] = array(
      'bundle' => 'activity',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('node', 'field_activity_image', 'activity') === FALSE) {
    $field_instances['node-activity-field_activity_image'] = array(
      'bundle' => 'activity',
      'deleted' => 0,
      'description' => 'For best results upload an image that is wider than 1200px and taller than 600px.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
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
      'display_label' => '',
      'entity_type' => 'node',
      'fences_wrapper' => 'div_div_div',
      'field_name' => 'field_activity_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => 0,
        'file_directory' => 'field_activity_image',
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
            'roomify_top_activity' => 'roomify_top_activity',
            'roomify_wide_normal' => 'roomify_wide_normal',
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
  }

  if (field_read_instance('node', 'field_activity_sticky_at_top', 'activity') === FALSE) {
    $field_instances['node-activity-field_activity_sticky_at_top'] = array(
      'bundle' => 'activity',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'The last activity with this checked will be placed as top activity on /things-to-do page.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 5,
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
      'field_name' => 'field_activity_sticky_at_top',
      'label' => 'Sticky at top of lists',
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
        'weight' => 15,
      ),
    );
  }

  if (field_read_instance('node', 'field_activity_type', 'activity') === FALSE) {
    $field_instances['node-activity-field_activity_type'] = array(
      'bundle' => 'activity',
      'default_value' => array(),
      'deleted' => 0,
      'description' => 'You may add new Activities, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/activity" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'conditions' => array(),
            'field_multiple_limit' => -1,
            'field_multiple_limit_offset' => 0,
          ),
          'type' => 'taxonomy_term_reference_link',
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
      'field_name' => 'field_activity_type',
      'label' => 'Activity type',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => 3,
      ),
    );
  }

  if (field_read_instance('node', 'field_address', 'activity') === FALSE) {
    $field_instances['node-activity-field_address'] = array(
      'bundle' => 'activity',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
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
          'weight' => 4,
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
      'field_name' => 'field_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
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
            'address-optional' => 'address-optional',
            'address-hide-postal-code' => 0,
            'address-hide-street' => 0,
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-full' => 0,
            'name-oneline' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => 13,
      ),
    );
  }

  if (field_read_instance('node', 'field_map_coordinates', 'activity') === FALSE) {
    $field_instances['node-activity-field_map_coordinates'] = array(
      'bundle' => 'activity',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'This will add a marker in a map on the content page and on the <a href="/things-to-do" target="_blank">Activities page</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'conditions' => array(),
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
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
      'field_name' => 'field_map_coordinates',
      'label' => 'Map Coordinates',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
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
        'weight' => 14,
      ),
    );
  }

  if (field_read_instance('node', 'title_field', 'activity') === FALSE) {
    $field_instances['node-activity-title_field'] = array(
      'bundle' => 'activity',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
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
          'entity' => 0,
          'page' => 0,
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
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  // Translatables.
  t('Activity type');
  t('Address');
  t('Body');
  t('For best results upload an image that is wider than 1200px and taller than 600px.');
  t('Image');
  t('Map Coordinates');
  t('Sticky at top of lists');
  t('The last activity with this checked will be placed as top activity on /things-to-do page.');
  t('Title');

  $field_groups = array();

  if (field_group_load_field_group('group_activity_description', 'node', 'activity', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_activity_description|node|activity|form';
    $field_group->group_name = 'group_activity_description';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'activity';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Description';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'body',
      1 => 'field_activity_type',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-activity-description field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_activity_description|node|activity|form'] = $field_group;
  }

  if (field_group_load_field_group('group_activity_location', 'node', 'activity', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_activity_location|node|activity|form';
    $field_group->group_name = 'group_activity_location';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'activity';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Location';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_address',
      1 => 'field_map_coordinates',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-activity-location field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_activity_location|node|activity|form'] = $field_group;
  }

  if (field_group_load_field_group('group_activity_slideshow', 'node', 'activity', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_activity_slideshow|node|activity|form';
    $field_group->group_name = 'group_activity_slideshow';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'activity';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Slideshow';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_activity_image',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-activity-slideshow field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_activity_slideshow|node|activity|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }

  // Translatables.
  t('Description');
  t('Location');
  t('Slideshow');
}
