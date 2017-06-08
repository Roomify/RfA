<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_travel_theme_handler_addtoany extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    if ($node = node_load($values->entity)) {
      $addtoany_settings = array_filter(variable_get('roomify_addtoany_settings', array('property' => 'property', 'type' => 'type', 'blog' => 'blog', 'activity' => 'activity')));

      if (in_array($node->type, $addtoany_settings)) {
        return addtoany_create_node_buttons($node);
      }
    }
  }

}
