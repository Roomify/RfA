<?php

/**
 * @file
 */

/**
 *
 */
class roomify_conversations_views_handler_most_recent_message extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();

    $this->additional_fields['conversation_id'] = 'conversation_id';
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
    return roomify_conversations_get_most_recent_message($values->conversation_id);
  }

}
