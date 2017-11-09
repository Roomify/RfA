<?php

/**
 * @file
 */

/**
 * Add "Property" reference field.
 */
function roomify_offers_add_property_reference_field($bundle) {
  field_info_cache_clear();
  // "offer_property_reference" field.
  if (field_read_field('offer_property_reference') === FALSE) {
    $field = array(
      'field_name' => 'offer_property_reference',
      'type' => 'entityreference',
      'cardinality' => -1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'roomify_property',
      ),
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "offer_property_reference" field instance.
  if (field_read_instance('roomify_rate', 'offer_property_reference', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'offer_property_reference',
      'entity_type' => 'roomify_rate',
      'label' => 'Property',
      'bundle' => $bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Offer Start Date" field.
 */
function roomify_offers_add_start_date_field($bundle) {
  field_info_cache_clear();
  // "offer_start_date" field.
  if (field_read_field('offer_start_date') === FALSE) {
    $field = array(
      'field_name' => 'offer_start_date',
      'type' => 'datetime',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "offer_start_date" field instance.
  if (field_read_instance('roomify_rate', 'offer_start_date', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'offer_start_date',
      'entity_type' => 'roomify_rate',
      'label' => 'Offer Start Date',
      'bundle' => $bundle,
      'required' => FALSE,
      'description' => 'This offer will be available when making a booking on or after this date/time',
      'widget' => array(
        'type' => 'date_popup',
      ),
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Offer End Date" field.
 */
function roomify_offers_add_end_date_field($bundle) {
  field_info_cache_clear();
  // "offer_end_date" field.
  if (field_read_field('offer_end_date') === FALSE) {
    $field = array(
      'field_name' => 'offer_end_date',
      'type' => 'datetime',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "offer_end_date" field instance.
  if (field_read_instance('roomify_rate', 'offer_end_date', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'offer_end_date',
      'entity_type' => 'roomify_rate',
      'label' => 'Offer End Date',
      'bundle' => $bundle,
      'required' => FALSE,
      'description' => 'This offer will no longer be available when making a booking after this date/time',
      'widget' => array(
        'type' => 'date_popup',
      ),
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Offer Description" field.
 */
function roomify_offers_add_description_field($bundle) {
  field_info_cache_clear();
  // "offer_description" field.
  if (field_read_field('offer_description') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'field_name' => 'offer_description',
      'locked' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'type' => 'text_long',
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "offer_description" field instance.
  if (field_read_instance('roomify_rate', 'offer_description', $bundle) === FALSE) {
    $instance = array(
      'bundle' => $bundle,
      'default_value' => NULL,
      'description' => 'This text will be shown to the user during checkout.',
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
      'entity_type' => 'roomify_rate',
      'field_name' => 'offer_description',
      'label' => 'Offer Description',
      'required' => 1,
      'settings' => array(
        'text_processing' => 1,
        'better_formats' => array(
          'allowed_formats_toggle' => 1,
          'allowed_formats' => array(
            'landing_page_text' => 'landing_page_text',
            'filtered_text' => 0,
            'rich_text' => 0,
            'filtered_html' => 0,
            'full_html' => 0,
            'plain_text' => 0,
          ),
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(),
        ),
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
    field_create_instance($instance);
  }
}

/**
 * Add rate "Discount" field.
 */
function roomify_offers_add_rate_discount_field($bundle) {
  field_info_cache_clear();
  // "rate_discount" field.
  if (field_read_field('rate_discount') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'field_name' => 'rate_discount',
      'locked' => 1,
      'settings' => array(
        'precision' => '10',
        'scale' => '2',
        'decimal_separator' => '.',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'type' => 'number_decimal',
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "rate_discount" field instance.
  if (field_read_instance('roomify_rate', 'rate_discount', $bundle) === FALSE) {
    $instance = array(
      'bundle' => $bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'number_decimal',
        ),
      ),
      'entity_type' => 'roomify_rate',
      'field_name' => 'rate_discount',
      'label' => 'Discount',
      'required' => 0,
      'settings' => array(
        'min' => '0',
        'max' => '100',
        'prefix' => '',
        'suffix' => ' %',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add event "Discount" field.
 */
function roomify_offers_add_event_discount_field($bundle) {
  field_info_cache_clear();
  // "pricing_discount" field.
  if (field_read_field('pricing_discount') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'field_name' => 'pricing_discount',
      'locked' => 1,
      'settings' => array(
        'precision' => '10',
        'scale' => '2',
        'decimal_separator' => '.',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'type' => 'number_decimal',
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "pricing_discount" field instance.
  if (field_read_instance('bat_event', 'pricing_discount', $bundle) === FALSE) {
    $instance = array(
      'bundle' => $bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'number_decimal',
        ),
      ),
      'entity_type' => 'bat_event',
      'field_name' => 'pricing_discount',
      'label' => 'Discount',
      'required' => 0,
      'settings' => array(
        'min' => '0',
        'max' => '100',
        'prefix' => '',
        'suffix' => ' %',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Always override price" field.
 */
function roomify_offers_add_always_override_price_field($bundle) {
  field_info_cache_clear();
  // "offer_always_override_price" field.
  if (field_read_field('offer_always_override_price') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'field_name' => 'offer_always_override_price',
      'locked' => 1,
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'type' => 'list_boolean',
    );
    field_create_field($field);
  }
  field_cache_clear();
  // "offer_always_override_price" field instance.
  if (field_read_instance('roomify_rate', 'offer_always_override_price', $bundle) === FALSE) {
    $instance = array(
      'bundle' => $bundle,
      'default_value' => NULL,
      'description' => 'Check this option if you want to always override the price even if a property has a minor price in the offer dates.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
        ),
      ),
      'entity_type' => 'roomify_rate',
      'field_name' => 'offer_always_override_price',
      'label' => 'Always override price',
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
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Offer Image" field.
 */
function roomify_offers_add_image_field() {
  field_info_cache_clear();
  if (field_read_field('field_offer_image') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_offer_image',
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
    field_create_field($field);
  }
  field_cache_clear();
  if (field_read_instance('node', 'field_offer_image', 'offer') === FALSE) {
    $instance = array(
      'bundle' => 'offer',
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
      'field_name' => 'field_offer_image',
      'label' => 'Image',
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
          'dragdropfile_enabled' => 0,
          'dragdropfile_title' => '',
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
            'roomify_1200x720' => 'roomify_1200x720',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 0,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 8,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Offer Reference" field.
 */
function roomify_offers_add_offer_reference_field() {
  field_info_cache_clear();
  if (field_read_field('field_offer_reference') === FALSE) {
    $field = array(
      'cardinality' => 1,
      'entity_types' => array(),
      'field_name' => 'field_offer_reference',
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
            'special_offer' => 'special_offer',
            'special_offer_percentage' => 'special_offer_percentage',
          ),
        ),
        'profile2_private' => FALSE,
        'target_type' => 'roomify_rate',
      ),
      'translatable' => 0,
    'type' => 'entityreference',
    );
    field_create_field($field);
  }
  field_cache_clear();
  if (field_read_instance('node', 'field_offer_reference', 'offer') === FALSE) {
    $instance = array(
      'bundle' => 'offer',
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
      'field_name' => 'field_offer_reference',
      'label' => 'Offer Reference',
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
        'weight' => 10,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Description" field.
 */
function roomify_offers_add_description_node_field() {
  if (field_read_field('field_offer_description') === FALSE) {
    $field = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_offer_description',
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
    field_create_field($field);
  }

  field_cache_clear();
  if (field_read_instance('node', 'field_offer_description', 'offer') === FALSE) {
    $instance = array(
       'bundle' => 'offer',
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
      'field_name' => 'field_offer_description',
      'label' => 'Description',
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
        'weight' => 9,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Description" group.
 */
function roomify_offers_add_descriptions_group() {
  $field_groups = array();

  if (field_group_load_field_group('group_offer_description', 'node', 'offer', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_offer_description|node|offer|form';
    $field_group->group_name = 'group_offer_description';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'offer';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Description';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'field_offer_image',
      1 => 'field_offer_description',
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

    field_group_group_save($field_group);
  }
}

/**
 * Add "Node Reference" field.
 */
function roomify_offers_add_node_reference_field($bundle) {
  field_info_cache_clear();
  if (field_read_field('offer_node_reference') === FALSE) {
    $field = array(
      'field_name' => 'offer_node_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'node',
        'handler_settings' => array(
          'target_bundles' => array(
            'offer' => 'offer',
          ),
        ),
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('roomify_rate', 'offer_node_reference', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'offer_node_reference',
      'entity_type' => 'roomify_rate',
      'label' => 'Offer Page',
      'bundle' => $bundle,
      'required' => FALSE,
      'description' => 'This allows you to create a page and show the offer to users.',
      'widget' => array(
        'type' => 'entityreference_autocomplete',
        'settings' => array(
          'references_dialog_edit' => 1,
          'references_dialog_add' => 1,
          'references_dialog_search' => 1,
        ),
      ),
      'settings' => array(),
    );
    field_create_instance($instance);
  }
}
