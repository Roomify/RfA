<?php

/**
 * @file
 */

/**
 * Add "Event" reference field.
 */
function roomify_conversations_add_message_conversation_reference_field() {
  field_info_cache_clear();

  // "message_conversation_reference" field.
  if (field_read_field('message_conversation_reference') === FALSE) {
    $field = array(
      'field_name' => 'message_conversation_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'roomify_conversation',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "message_conversation_reference" field instance.
  if (field_read_instance('message', 'message_conversation_reference', 'conversation') === FALSE) {
    $instance = array(
      'field_name' => 'message_conversation_reference',
      'entity_type' => 'message',
      'label' => 'Conversation',
      'bundle' => 'conversation',
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
 * Add "Conversation" reference field.
 */
function roomify_conversations_add_booking_conversation_reference_field() {
  field_info_cache_clear();

  // "booking_conversation_ref" field.
  if (field_read_field('booking_conversation_ref') === FALSE) {
    $field = array(
      'field_name' => 'booking_conversation_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'roomify_conversation',
      ),
    );
    field_create_field($field);
  }

  // "booking_conversation_ref" field instance.
  if (field_read_instance('bat_booking', 'booking_conversation_ref', 'conversation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_conversation_ref',
      'entity_type' => 'bat_booking',
      'label' => 'Conversation',
      'bundle' => 'conversation_booking',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
      'settings' => array(
        'behaviors' => array(
          'prepopulate' => array(
            'status' => 1,
            'action' => 'hide',
            'action_on_edit' => 1,
            'fallback' => 'none',
            'skip_perm' => '0',
            'providers' => array(
              'url' => 1,
              'og_context' => FALSE,
            ),
          ),
        ),
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Price" field.
 */
function roomify_conversations_add_booking_price_field() {
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
  if (field_read_instance('bat_booking', 'booking_price', 'conversation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_price',
      'entity_type' => 'bat_booking',
      'label' => 'Price',
      'bundle' => 'conversation_booking',
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
 * Add "Booking" reference field.
 */
function roomify_conversations_add_booking_reference_field() {
  field_info_cache_clear();

  // "conversation_booking_ref" field.
  if (field_read_field('conversation_booking_ref') === FALSE) {
    $field = array(
      'field_name' => 'conversation_booking_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_booking',
      ),
    );
    field_create_field($field);
  }

  // "conversation_booking_ref" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_booking_ref', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_booking_ref',
      'entity_type' => 'roomify_conversation',
      'label' => 'Booking',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Inquiry" reference field.
 */
function roomify_conversations_add_inquiry_reference_field() {
  field_info_cache_clear();

  // "conversation_inquiry_ref" field.
  if (field_read_field('conversation_inquiry_ref') === FALSE) {
    $field = array(
      'field_name' => 'conversation_inquiry_ref',
      'type' => 'entityreference',
      'cardinality' => -1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'entityform',
      ),
    );
    field_create_field($field);
  }

  // "conversation_inquiry_ref" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_inquiry_ref', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_inquiry_ref',
      'entity_type' => 'roomify_conversation',
      'label' => 'Inquiry',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Unit type" reference field.
 */
function roomify_conversations_add_unit_type_reference_field() {
  field_info_cache_clear();

  // "conversation_unit_type_ref" field.
  if (field_read_field('conversation_unit_type_ref') === FALSE) {
    $field = array(
      'field_name' => 'conversation_unit_type_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_type',
      ),
    );
    field_create_field($field);
  }

  // "conversation_unit_type_ref" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_unit_type_ref', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_unit_type_ref',
      'entity_type' => 'roomify_conversation',
      'label' => 'Unit type',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Guest" user reference field.
 */
function roomify_conversations_add_guest_user_reference_field() {
  field_info_cache_clear();

  // "conversation_guest_user_ref" field.
  if (field_read_field('conversation_guest_user_ref') === FALSE) {
    $field = array(
      'field_name' => 'conversation_guest_user_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'user',
      ),
    );
    field_create_field($field);
  }

  // "conversation_guest_user_ref" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_guest_user_ref', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_guest_user_ref',
      'entity_type' => 'roomify_conversation',
      'label' => 'Guest',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Owner" user reference field.
 */
function roomify_conversations_add_owner_user_reference_field() {
  field_info_cache_clear();

  // "conversation_owner_user_ref" field.
  if (field_read_field('conversation_owner_user_ref') === FALSE) {
    $field = array(
      'field_name' => 'conversation_owner_user_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'user',
      ),
    );
    field_create_field($field);
  }

  // "conversation_owner_user_ref" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_owner_user_ref', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_owner_user_ref',
      'entity_type' => 'roomify_conversation',
      'label' => 'Owner',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Event" reference field.
 */
function roomify_conversations_add_booking_event_reference_field() {
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
  if (field_read_instance('bat_booking', 'booking_event_reference', 'conversation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_event_reference',
      'entity_type' => 'bat_booking',
      'label' => 'Event',
      'bundle' => 'conversation_booking',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Start Date" field.
 */
function roomify_conversations_add_start_date_field() {
  field_info_cache_clear();

  // "conversation_book_start_date" field.
  if (field_read_field('conversation_book_start_date') === FALSE) {
    $field = array(
      'field_name' => 'conversation_book_start_date',
      'type' => 'datetime',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
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

  // "conversation_book_start_date" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_book_start_date', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_book_start_date',
      'entity_type' => 'roomify_conversation',
      'label' => 'Start Date',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'date_popup',
      ),
      'settings' => array(
        'default_value' => 'now',
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
 * Add "End Date" field.
 */
function roomify_conversations_add_end_date_field() {
  field_info_cache_clear();

  // "conversation_book_end_date" field.
  if (field_read_field('conversation_book_end_date') === FALSE) {
    $field = array(
      'field_name' => 'conversation_book_end_date',
      'type' => 'datetime',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
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

  // "conversation_book_end_date" field instance.
  if (field_read_instance('roomify_conversation', 'conversation_book_end_date', 'standard') === FALSE) {
    $instance = array(
      'field_name' => 'conversation_book_end_date',
      'entity_type' => 'roomify_conversation',
      'label' => 'End Date',
      'bundle' => 'standard',
      'required' => FALSE,
      'widget' => array(
        'type' => 'date_popup',
      ),
      'settings' => array(
        'default_value' => 'now',
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
 * Add "Conversation Booking" reference field.
 */
function roomify_conversations_add_conversation_booking_reference_field() {
  field_info_cache_clear();

  // "booking_booking_conversation_ref" field.
  if (field_read_field('booking_booking_conversation_ref') === FALSE) {
    $field = array(
      'field_name' => 'booking_booking_conversation_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_booking',
      ),
    );
    field_create_field($field);
  }

  // "booking_booking_conversation_ref" field instance.
  if (field_read_instance('bat_booking', 'booking_booking_conversation_ref', 'roomify_accommodation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_booking_conversation_ref',
      'entity_type' => 'bat_booking',
      'label' => 'Conversation Booking',
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
 * Add "Accommodation Booking" reference field.
 */
function roomify_conversations_add_accommodation_booking_reference_field() {
  field_info_cache_clear();

  // "booking_accommodation_ref" field.
  if (field_read_field('booking_accommodation_ref') === FALSE) {
    $field = array(
      'field_name' => 'booking_accommodation_ref',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_booking',
      ),
    );
    field_create_field($field);
  }

  // "booking_accommodation_ref" field instance.
  if (field_read_instance('bat_booking', 'booking_accommodation_ref', 'conversation_booking') === FALSE) {
    $instance = array(
      'field_name' => 'booking_accommodation_ref',
      'entity_type' => 'bat_booking',
      'label' => 'Accommodation Booking',
      'bundle' => 'conversation_booking',
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}
