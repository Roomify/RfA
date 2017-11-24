<?php

/**
 * @file
 */

class roomify_dashboard_handler_hide_notification extends views_handler_field_entity {

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
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $user_notification = $this->get_value($values);

    return l('Hide', 'user-notifications/' . $user_notification->user_notifications_id . '/hide', array('attributes' => array('class' => 'use-ajax')));
  }

}
