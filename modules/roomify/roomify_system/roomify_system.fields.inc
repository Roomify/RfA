<?php

/**
 * @file
 */

/**
 * Add user fields.
 */
function roomify_system_add_user_fields() {
  $field_bases = array();

  if (field_read_field('user_first_name') === FALSE) {
    $field_bases['user_first_name'] = array(
      'cardinality' => 1,
      'field_name' => 'user_first_name',
      'locked' => 1,
      'settings' => array(),
      'type' => 'text',
    );
  }

  if (field_read_field('user_last_name') === FALSE) {
    $field_bases['user_last_name'] = array(
      'cardinality' => 1,
      'field_name' => 'user_last_name',
      'locked' => 1,
      'settings' => array(),
      'type' => 'text',
    );
  }

  if (field_read_field('user_telephone') === FALSE) {
    $field_bases['user_telephone'] = array(
      'cardinality' => 1,
      'field_name' => 'user_telephone',
      'locked' => 1,
      'settings' => array(),
      'type' => 'text',
    );
  }

  if (field_read_field('user_address') === FALSE) {
    $field_bases['user_address'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'user_address',
      'indexes' => array(),
      'locked' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'addressfield',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('user', 'user_first_name', 'user') === FALSE) {
    $field_instances['user-user-user_first_name'] = array(
      'bundle' => 'user',
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
      'entity_type' => 'user',
      'field_name' => 'user_first_name',
      'label' => 'First Name',
      'required' => 0,
      'settings' => array(
        'user_register_form' => TRUE,
      ),
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

  if (field_read_instance('user', 'user_last_name', 'user') === FALSE) {
    $field_instances['user-user-user_last_name'] = array(
      'bundle' => 'user',
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
      'entity_type' => 'user',
      'field_name' => 'user_last_name',
      'label' => 'Last Name',
      'required' => 0,
      'settings' => array(
        'user_register_form' => TRUE,
      ),
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

  if (field_read_instance('user', 'user_telephone', 'user') === FALSE) {
    $field_instances['user-user-user_telephone'] = array(
      'bundle' => 'user',
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
      'entity_type' => 'user',
      'field_name' => 'user_telephone',
      'label' => 'Telephone',
      'required' => 0,
      'settings' => array(
        'user_register_form' => TRUE,
      ),
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

  if (field_read_instance('user', 'user_address', 'user') === FALSE) {
    $field_instances['user-user-user_address'] = array(
      'bundle' => 'user',
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
      ),
      'entity_type' => 'user',
      'field_name' => 'user_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => TRUE,
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
            'name-full' => 1,
            'name-oneline' => 1,
            'address-optional' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => 45,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }
}
