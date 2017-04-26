<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying the guest
 * profile name, if set.
 */

/**
 *
 */
class roomify_review_handler_user_guest_image_field extends views_handler_field {

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
    $image = '';
    if (empty($values->field_guest_image)) {
      $image = theme('image', array('path' => drupal_get_path('module', 'roomify_review') . '/images/profile.png'));
    }
    else {
      $image = theme('image_style', array('style_name' => 'square', 'path' => $values->field_guest_image[0]['rendered']['#item']['uri']));
    }
    return $image;

  }

}
