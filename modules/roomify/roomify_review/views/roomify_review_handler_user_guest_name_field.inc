<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying the guest
 * profile name, if set.
 */

/**
 *
 */
class roomify_review_handler_user_guest_name_field extends views_handler_field {

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

    $name = empty($values->field_guest_name) ? $values->users_node_name : $values->field_guest_name[0]['rendered']['#markup'];

    return t('by @name', array('@name' => $name));

  }

}
