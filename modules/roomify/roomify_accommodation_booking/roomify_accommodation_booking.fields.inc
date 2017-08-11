<?php

/**
 * @file
 */

/**
 * Add "Event" reference field.
 */
function roomify_accommodation_booking_add_event_reference_field() {
  field_info_cache_clear();

  // "booking_event_reference" field.
  if (field_read_field('booking_event_reference') === FALSE) {
    $field = array(
      'field_name' => 'booking_event_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_event',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "booking_event_reference" field instance.
  if (field_read_instance('bat_booking', 'booking_event_reference', 'roomify_accommodation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_event_reference',
      'entity_type' => 'bat_booking',
      'label' => 'Event',
      'bundle' => 'roomify_accommodation_booking',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Create booking 'Line item' reference.
 */
function roomify_accommodation_booking_add_line_item_reference($type_bundle) {
  field_info_cache_clear();

  // "booking_line_item_reference" field.
  if (field_read_field('booking_line_item_reference') === FALSE) {
    $field = array(
      'field_name' => 'booking_line_item_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'commerce_line_item',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "booking_line_item_reference" field instance.
  if (field_read_instance('bat_booking', 'booking_line_item_reference', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_line_item_reference',
      'entity_type' => 'bat_booking',
      'label' => 'Line item',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Create 'booking_telephone' field for customer profile.
 */
function roomify_accommodation_booking_add_booking_telephone_to_billing_info() {
  if (field_read_field('booking_telephone') === FALSE) {
    $field = array(
      'field_name' => 'booking_telephone',
      'type' => 'text',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
    );
    field_create_field($field);
  }

  if (field_read_instance('commerce_customer_profile', 'booking_telephone', 'billing') === FALSE) {
    $instance = array(
      'field_name' => 'booking_telephone',
      'entity_type' => 'commerce_customer_profile',
      'label' => 'Telephone',
      'bundle' => 'billing',
      'required' => TRUE,
      'widget' => array(
        'type' => 'text_textfield',
        'weight' => 0,
        'settings' => array(
          'size' => 60,
        ),
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Create line item "Booking" reference.
 */
function roomify_accommodation_booking_line_item_add_booking_reference($type_bundle) {
  field_info_cache_clear();

  // "commerce_booking_reference" field.
  if (field_read_field('commerce_booking_reference') === FALSE) {
    $field = array(
      'field_name' => 'commerce_booking_reference',
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

  // "commerce_booking_reference" field instance.
  if (field_read_instance('commerce_line_item', 'commerce_booking_reference', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'commerce_booking_reference',
      'entity_type' => 'commerce_line_item',
      'label' => 'Booking',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Price" field.
 */
function roomify_accommodation_booking_add_booking_price_field() {
  field_info_cache_clear();

  // "booking_price" field.
  if (field_read_field('booking_price') === FALSE) {
    $field = array(
      'field_name' => 'booking_price',
      'type' => 'commerce_price',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "booking_price" field instance.
  if (field_read_instance('bat_booking', 'booking_price', 'roomify_accommodation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_price',
      'entity_type' => 'bat_booking',
      'label' => 'Price',
      'bundle' => 'roomify_accommodation_booking',
      'required' => TRUE,
      'widget' => array(
        'type' => 'commerce_price_simple',
      ),
      'settings' => array(),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Product" reference field.
 */
function roomify_accommodation_booking_add_listing_product_reference($type_bundle) {
  field_info_cache_clear();

  // "accommodation_product_reference" field.
  if (field_read_field('accommodation_product_reference') === FALSE) {
    $field = array(
      'field_name' => 'accommodation_product_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'commerce_product',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "accommodation_product_reference" field instance.
  if (field_read_instance('bat_type', 'accommodation_product_reference', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'accommodation_product_reference',
      'entity_type' => 'bat_type',
      'label' => 'Product',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add the add-ons field to the given type bundle.
 */
function roomify_accommodation_booking_add_addons_field($type_bundle) {
  field_info_cache_clear();

  // "field_addons" field.
  if (field_read_field('field_addons') === FALSE) {
    $field = array(
      'field_name' => 'field_addons',
      'type' => 'roomify_accommodation_options',
      'cardinality' => -1,
      'locked' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => 1,
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "field_addons" field instance.
  if (field_read_instance('bat_type', 'field_addons', $type_bundle) === FALSE) {
    $instance = array(
      'entity_type' => 'bat_type',
      'bundle' => $type_bundle,
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'roomify_accommodation_options',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'roomify_accommodation_options_default',
          'weight' => 11,
        ),
      ),
      'field_name' => 'field_addons',
      'label' => 'Add-ons',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'roomify_accommodation_options',
        'settings' => array(),
        'type' => 'roomify_accommodation_options_combined',
      ),
    );
    field_create_instance($instance);
  }

  if (field_group_load_field_group('group_addons', 'bat_type', $type_bundle, 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_addons|bat_type|' . $type_bundle . '|form';
    $field_group->group_name = 'group_addons';
    $field_group->entity_type = 'bat_type';
    $field_group->bundle = $type_bundle;
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Add-Ons';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_addons',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    );

    field_group_group_save($field_group);
  }
}

/**
 * Add booking 'Guest' field.
 */
function roomify_accommodation_booking_add_booking_guest_field($bundle) {
  field_info_cache_clear();

  if (field_read_field('booking_guest') === FALSE) {
    $field = array(
      'field_name' => 'booking_guest',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'commerce_customer_profile',
        'handler_settings' => array(
          'target_bundles' => array(
            'billing' => 'billing',
          ),
        ),
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_booking', 'booking_guest', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_guest',
      'entity_type' => 'bat_booking',
      'label' => 'Guest',
      'bundle' => $bundle,
      'required' => FALSE,
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

/**
 * Add booking 'User Guest' field.
 */
function roomify_accommodation_booking_add_booking_user_guest_field($bundle) {
  field_info_cache_clear();

  if (field_read_field('booking_user_guest') === FALSE) {
    $field = array(
      'field_name' => 'booking_user_guest',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'user',
        'handler_settings' => array(
          'target_bundles' => array(),
        ),
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_booking', 'booking_user_guest', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_user_guest',
      'entity_type' => 'bat_booking',
      'label' => 'User Guest',
      'bundle' => $bundle,
      'required' => FALSE,
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

/**
 * Add 'Guests' field.
 */
function roomify_accommodation_booking_add_guests_field($bundle) {
  field_info_cache_clear();

  if (field_read_field('booking_guests') === FALSE) {
    $field = array(
      'field_name' => 'booking_guests',
      'type' => 'text',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_booking', 'booking_guests', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_guests',
      'entity_type' => 'bat_booking',
      'label' => 'Guests',
      'bundle' => $bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'text_textfield',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add 'Adults' field.
 */
function roomify_accommodation_booking_add_adults_field($bundle) {
  field_info_cache_clear();

  if (field_read_field('booking_adults') === FALSE) {
    $field = array(
      'field_name' => 'booking_adults',
      'type' => 'text',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_booking', 'booking_adults', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_adults',
      'entity_type' => 'bat_booking',
      'label' => 'Adults',
      'bundle' => $bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'text_textfield',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add 'Children' field.
 */
function roomify_accommodation_booking_add_children_field($bundle) {
  field_info_cache_clear();

  if (field_read_field('booking_children') === FALSE) {
    $field = array(
      'field_name' => 'booking_children',
      'type' => 'text',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_booking', 'booking_children', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_children',
      'entity_type' => 'bat_booking',
      'label' => 'Children',
      'bundle' => $bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'text_textfield',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add 'Children age' field.
 */
function roomify_accommodation_booking_add_children_age_field($bundle) {
  field_info_cache_clear();

  if (field_read_field('booking_children_age') === FALSE) {
    $field = array(
      'field_name' => 'booking_children_age',
      'type' => 'text',
      'cardinality' => -1,
      'locked' => 1,
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  if (field_read_instance('bat_booking', 'booking_children_age', $bundle) === FALSE) {
    $instance = array(
      'field_name' => 'booking_children_age',
      'entity_type' => 'bat_booking',
      'label' => 'Children age',
      'bundle' => $bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'text_textfield',
      ),
    );
    field_create_instance($instance);
  }
}
