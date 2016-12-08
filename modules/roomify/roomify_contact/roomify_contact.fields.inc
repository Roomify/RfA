<?php

/**
 * @file
 */

/**
 * Create Roomify Contact fields.
 */
function roomify_contact_create_entityform_fields() {
  $field_bases = array();

  if (field_read_field('field_contact_first_name') === FALSE) {
    $field_bases['field_contact_first_name'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_first_name',
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  if (field_read_field('field_contact_last_name') === FALSE) {
    $field_bases['field_contact_last_name'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_last_name',
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  if (field_read_field('field_contact_arrival') === FALSE) {
    $field_bases['field_contact_arrival'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_arrival',
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
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 0,
      'type' => 'datetime',
    );
  }

  if (field_read_field('field_contact_departure') === FALSE) {
    $field_bases['field_contact_departure'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_departure',
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
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => 0,
      'type' => 'datetime',
    );
  }

  if (field_read_field('field_contact_mail_address') === FALSE) {
    $field_bases['field_contact_mail_address'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_mail_address',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'email',
    );
  }

  if (field_read_field('field_contact_more_informations') === FALSE) {
    $field_bases['field_contact_more_informations'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_more_informations',
      'module' => 'text',
      'settings' => array(
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_contact_telephone') === FALSE) {
    $field_bases['field_contact_telephone'] = array(
      'cardinality' => 1,
      'field_name' => 'field_contact_telephone',
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  // Exported field_base: 'field_booking_request'.
  if (field_read_field('field_booking_request') === FALSE) {
    $field_bases['field_booking_request'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_booking_request',
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

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('entityform', 'field_contact_first_name', 'contact') === FALSE) {
    $field_instances['entityform-contact-field_contact_first_name'] = array(
      'bundle' => 'contact',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'conversation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_first_name',
      'label' => 'First Name',
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
        'weight' => 0,
      ),
    );
  }

  if (field_read_instance('entityform', 'field_contact_last_name', 'contact') === FALSE) {
    $field_instances['entityform-contact-field_contact_last_name'] = array(
      'bundle' => 'contact',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'conversation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_last_name',
      'label' => 'Last Name',
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
        'weight' => 1,
      ),
    );
  }

  if (field_read_instance('entityform', 'field_contact_arrival', 'contact') === FALSE) {
    $instance = array(
      'field_name' => 'field_contact_arrival',
      'entity_type' => 'entityform',
      'label' => 'Arrival',
      'bundle' => 'contact',
      'required' => FALSE,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'date',
        'settings' => array(
          'increment' => 15,
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 6,
      ),
    );
    field_create_instance($instance);
  }

  if (field_read_instance('entityform', 'field_contact_departure', 'contact') === FALSE) {
    $instance = array(
      'field_name' => 'field_contact_departure',
      'entity_type' => 'entityform',
      'label' => 'Departure',
      'bundle' => 'contact',
      'required' => FALSE,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'date',
        'settings' => array(
          'increment' => 15,
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => 7,
      ),
    );
    field_create_instance($instance);
  }

  if (field_read_instance('entityform', 'field_contact_mail_address', 'contact') === FALSE) {
    $field_instances['entityform-contact-field_contact_mail_address'] = array(
      'bundle' => 'contact',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'conversation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'email',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'email_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_mail_address',
      'label' => 'E-Mail',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'email_textfield',
        'weight' => 3,
      ),
    );
  }

  if (field_read_instance('entityform', 'field_contact_more_informations', 'contact') === FALSE) {
    $field_instances['entityform-contact-field_contact_more_informations'] = array(
      'bundle' => 'contact',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'conversation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_more_informations',
      'label' => 'More Information',
      'required' => 0,
      'settings' => array(
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
        'weight' => 4,
      ),
    );
  }

  if (field_read_instance('entityform', 'field_contact_telephone', 'contact') === FALSE) {
    $field_instances['entityform-contact-field_contact_telephone'] = array(
      'bundle' => 'contact',
      'default_value' => NULL,
      'description' => '',
      'display' => array(
        'conversation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_contact_telephone',
      'label' => 'Telephone',
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
        'weight' => 3,
      ),
    );
  }

  // Exported field_instance: 'entityform-contact-field_booking_request'.
  if (field_read_instance('entityform', 'field_booking_request', 'contact') === FALSE) {
    $field_instances['entityform-contact-field_booking_request'] = array(
      'bundle' => 'contact',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'conversation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'entityform',
      'field_name' => 'field_booking_request',
      'label' => 'Booking Request',
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
        'weight' => 5,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }
}
