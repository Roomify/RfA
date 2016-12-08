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
