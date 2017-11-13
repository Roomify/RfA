<?php

/**
 * @file
 */

/**
 * Content type "Homepage" fields.
 */
function roomify_homepage_create_fields() {
  $field_bases = array();

  if (field_read_field('field_homepage_slideshow') === FALSE) {
    $field_bases['field_homepage_slideshow'] = array(
      'cardinality' => -1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_slideshow',
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

  if (field_read_field('field_homepage_main_text') === FALSE) {
    $field_bases['field_homepage_main_text'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_main_text',
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

  if (field_read_field('field_homepage_intro_text') === FALSE) {
    $field_bases['field_homepage_intro_text'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_intro_text',
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

  if (field_read_field('field_homepage_properties_view') === FALSE) {
    $field_bases['field_homepage_properties_view'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_properties_view',
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'carousel' => 'Carousel',
          'grid' => 'Grid List',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_text',
    );
  }

  if (field_read_field('field_homepage_areas') === FALSE) {
    $field_bases['field_homepage_areas'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_areas',
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

  if (field_read_field('field_homepage_offers') === FALSE) {
    $field_bases['field_homepage_offers'] = array(
      'cardinality' => -1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_offers',
      'locked' => 0,
      'module' => 'entityreference',
      'settings' => array(
        'behaviors' => array(),
        'entity_translation_sync' => FALSE,
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'entityqueue' => array(
              'status' => 0,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'offer' => 'offer',
          ),
        ),
        'profile2_private' => FALSE,
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    );
  }

  if (field_read_field('field_homepage_style') === FALSE) {
    $field_bases['field_homepage_style'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_style',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'large' => 'Large Slideshow',
          'tight' => 'Tight Slideshow',
          'video' => 'Video',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_text',
    );
  }

  if (field_read_field('field_homepage_properties_lists') === FALSE) {
    $field_bases['field_homepage_properties_lists'] = array(
      'cardinality' => 6,
      'entity_types' => array(),
      'field_name' => 'field_homepage_properties_lists',
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => 0,
      'module' => 'entityreference',
      'settings' => array(
        'behaviors' => array(),
        'entity_translation_sync' => FALSE,
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'entityqueue' => array(
              'status' => 0,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'properties_list' => 'properties_list',
          ),
        ),
        'profile2_private' => FALSE,
        'target_type' => 'node',
      ),
      'translatable' => 0,
      'type' => 'entityreference',
    );
  }

  if (field_read_field('field_homepage_areas_style') === FALSE) {
    $field_bases['field_homepage_areas_style'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_areas_style',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'vertical' => 'Vertical',
          'horizontal' => 'Horizontal',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_text',
    );
  }

  if (field_read_field('field_homepage_properties_style') === FALSE) {
    $field_bases['field_homepage_properties_style'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_properties_style',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'vertical' => 'Vertical',
          'horizontal' => 'Horizontal',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_text',
    );
  }

  if (field_read_field('field_homepage_video') === FALSE) {
    $field_bases['field_homepage_video'] = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_homepage_video',
      'locked' => 0,
      'module' => 'video',
      'settings' => array(
        'uri_scheme' => 'public',
        'uri_scheme_converted' => 'public',
        'uri_scheme_thumbnails' => 'public',
        'autoconversion' => 0,
        'thumbnail_format' => 'jpg',
        'autothumbnail' => 'no',
        'default_video_thumbnail' => array(
          'fid' => 0,
          'upload_button' => 'Upload',
          'remove_button' => 'Remove',
          'upload' => '',
        ),
        'preview_video_thumb_style' => 'thumbnail',
        'presets' => array(),
        'profile2_private' => FALSE,
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'video',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('node', 'field_homepage_slideshow', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_slideshow'] = array(
      'bundle' => 'homepage',
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
      'field_name' => 'field_homepage_slideshow',
      'label' => 'Slideshow',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '1200x720',
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
          'manualcrop_instant_crop' => 1,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'roomify_1200x720' => 'roomify_1200x720',
            '1600x580' => '1600x580',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 1,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_main_text', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_main_text'] = array(
      'bundle' => 'homepage',
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
      'field_name' => 'field_homepage_main_text',
      'label' => 'Main Text',
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
        'weight' => 5,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_intro_text', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_intro_text'] = array(
      'bundle' => 'homepage',
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
      'field_name' => 'field_homepage_intro_text',
      'label' => 'Intro Text',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 0,
            'filtered_text' => 0,
            'full_html' => 0,
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 0,
            'rich_text' => 0,
          ),
          'allowed_formats_toggle' => 1,
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
        'weight' => 2,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_properties_view', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_properties_view'] = array(
      'bundle' => 'homepage',
      'default_value' => array(
        0 => array(
          'value' => 'grid',
        ),
      ),
      'description' => 'Select how to display featured properties on this page. You may add featured properties from the Dashboard ( Manage Content / Manage Featured Properties)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
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
      'field_name' => 'field_homepage_properties_view',
      'label' => 'Featured Properties View',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_areas', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_areas'] = array(
      'bundle' => 'homepage',
      'default_value' => array(
        0 => array(
          'value' => 1,
        ),
      ),
      'description' => 'Check this if you want to show Featured Areas on your homepage. You may add featured areas from the Dashboard ( Manage Content / Manage Featured Areas)',
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
      'field_name' => 'field_homepage_areas',
      'label' => 'Areas',
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
  }

  if (field_read_instance('node', 'field_homepage_offers', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_offers'] = array(
      'bundle' => 'homepage',
      'default_value' => NULL,
      'default_value_function' => '',
      'description' => 'Enable offers to show in the homepage. Remember the offer need to have an image to be shown. N.B. If you want to create a page for the offer you need to create an offer first, and, on the edit page, you will find a link to add a page for that.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'conditions' => array(),
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
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
      'field_name' => 'field_homepage_offers',
      'label' => 'Offers',
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
        'type' => 'options_buttons',
        'weight' => 9,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_style', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_style'] = array(
      'bundle' => 'homepage',
      'default_value' => array(
        0 => array(
          'value' => 'tight',
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
          'weight' => 7,
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
      'field_name' => 'field_homepage_style',
      'label' => 'Homepage Style',
      'required' => 0,
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
  }

  if (field_read_instance('node', 'field_homepage_properties_lists', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_properties_lists'] = array(
      'bundle' => 'homepage',
      'default_value' => array(),
      'default_value_function' => '',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'bypass_access' => FALSE,
            'conditions' => array(),
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => 8,
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
      'field_name' => 'field_homepage_properties_lists',
      'label' => 'Properties Lists',
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
        'module' => 'inline_entity_form',
        'settings' => array(
          'fields' => array(),
          'type_settings' => array(
            'allow_clone' => 0,
            'allow_existing' => 1,
            'allow_new' => 0,
            'delete_references' => 0,
            'label_plural' => 'nodes',
            'label_singular' => 'node',
            'match_operator' => 'CONTAINS',
            'override_labels' => 0,
          ),
        ),
        'type' => 'inline_entity_form',
        'weight' => 12,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_areas_style', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_areas_style'] = array(
      'bundle' => 'homepage',
      'default_value' => array(
        0 => array(
          'value' => 'vertical',
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
          'weight' => 10,
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
      'field_name' => 'field_homepage_areas_style',
      'label' => 'Areas images style  ',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'select2_integration' => array(
          'styling' => array(
            'dropdownAutoWidth' => 0,
            'placeholder' => '',
          ),
          'use_select2' => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'use_select2' => FALSE,
        ),
        'type' => 'options_select',
        'weight' => 43,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_properties_style', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_properties_style'] = array(
      'bundle' => 'homepage',
      'default_value' => array(
        0 => array(
          'value' => 'vertical',
        ),
      ),
      'description' => 'Select either to display images on a horizontal or vertical view.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 9,
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
      'field_name' => 'field_homepage_properties_style',
      'label' => 'Properties images style',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'select2_integration' => array(
          'styling' => array(
            'dropdownAutoWidth' => 0,
            'placeholder' => '',
          ),
          'use_select2' => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'use_select2' => FALSE,
        ),
        'type' => 'options_select',
        'weight' => 41,
      ),
    );
  }

  if (field_read_instance('node', 'field_homepage_video', 'homepage') === FALSE) {
    $field_instances['node-homepage-field_homepage_video'] = array(
      'bundle' => 'homepage',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'video',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'video_formatter_player',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_homepage_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'file_directory' => 'videos/original',
        'file_extensions' => 'mp4 ogg avi mov wmv flv ogv webm',
        'max_filesize' => '',
        'default_dimensions' => '640x360',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'video',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'video_upload',
        'weight' => 44,
      ),
    );
  }

  // Translatables
  // Included for use with string extractors like potx.
  t('Main Text');
  t('Intro Text');
  t('Slideshow');
  t('Select how to display featured properties on this page. You may add featured properties from the Dashboard ( Manage Content / Manage Featured Properties)');
  t('Areas');
  t('Check this if you want to show Featured Areas on your homepage. You may add featured areas from the Dashboard ( Manage Content / Manage Featured Areas)');
  t('Featured Properties View');
  t('Offers');
  t('Areas images style ');
  t('Properties images style');
  t('Select either to display images on a horizontal or vertical view.');

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  $field_groups = array();

  if (field_group_load_field_group('group_homepage_description', 'node', 'homepage', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_homepage_description|node|homepage|form';
    $field_group->group_name = 'group_homepage_description';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'homepage';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Description';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'field_homepage_main_text',
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
    $field_groups['group_homepage_description|node|homepage|form'] = $field_group;
  }

  if (field_group_load_field_group('group_homepage_properties', 'node', 'homepage', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_homepage_properties|node|homepage|form';
    $field_group->group_name = 'group_homepage_properties';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'homepage';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Featured Properties';
    $field_group->weight = '3';
    $field_group->children = array(
      0 => 'field_homepage_properties_style',
      1 => 'field_homepage_properties_view',
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

    $field_groups['group_homepage_properties|node|homepage|form'] = $field_group;
  }

  if (field_group_load_field_group('group_homepage_properties_lists', 'node', 'homepage', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_homepage_properties_lists|node|homepage|form';
    $field_group->group_name = 'group_homepage_properties_lists';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'homepage';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Properties Lists';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_homepage_properties_lists',
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

    $field_groups['group_homepage_properties_lists|node|homepage|form'] = $field_group;
  }

  if (field_group_load_field_group('group_homepage_slideshow', 'node', 'homepage', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_homepage_slideshow|node|homepage|form';
    $field_group->group_name = 'group_homepage_slideshow';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'homepage';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Slideshow';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'field_homepage_slideshow',
      1 => 'field_homepage_intro_text',
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
    $field_groups['group_homepage_slideshow|node|homepage|form'] = $field_group;
  }

  if (field_group_load_field_group('group_homepage_areas', 'node', 'homepage', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_homepage_areas|node|homepage|form';
    $field_group->group_name = 'group_homepage_areas';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'homepage';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Areas';
    $field_group->weight = '5';
    $field_group->children = array(
      0 => 'field_homepage_areas_style',
      1 => 'field_homepage_areas',
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
    $field_groups['group_homepage_areas|node|homepage|form'] = $field_group;
  }

  if (field_group_load_field_group('group_homepage_offers', 'node', 'homepage', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_homepage_offers|node|homepage|form';
    $field_group->group_name = 'group_homepage_offers';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'homepage';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Offers';
    $field_group->weight = '6';
    $field_group->children = array(
      0 => 'field_homepage_offers',
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
    $field_groups['group_homepage_offers|node|homepage|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }
}
