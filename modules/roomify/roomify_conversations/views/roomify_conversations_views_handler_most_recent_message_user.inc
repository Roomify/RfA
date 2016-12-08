<?php

/**
 * @file
 */

/**
 *
 */
class roomify_conversations_views_handler_most_recent_message_user extends views_handler_field {

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

    // Get the most recent message referencing this conversation.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'message')
      ->entityCondition('bundle', 'conversation')
      ->fieldCondition('message_conversation_reference', 'target_id', $values->conversation_id, '=')
      ->propertyOrderBy('timestamp', 'DESC')
      ->range(0, 1);

    $result = $query->execute();

    // If we find a message, return its text.
    if (isset($result['message'])) {
      $message = message_load(current(current($result))->mid);
      $account = user_load($message->uid);
      return $account->name;
    }

    return FALSE;
  }

}
