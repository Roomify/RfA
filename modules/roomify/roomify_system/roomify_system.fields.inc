<?php

/**
 * @file
 */

/**
 *
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

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }
}
