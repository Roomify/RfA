<?php

/**
 * @file
 */

/**
 *
 */
class roomify_conversations_views_handler_name extends views_handler_field {

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
    global $user;

    $conversation = roomify_conversation_load($values->conversation_id);

    if ($conversation->uid == $user->uid) {
      if ($account = user_load($conversation->conversation_owner_user_ref[LANGUAGE_NONE][0]['target_id'])) {
        $user_name = $account->name;
      }
      else {
        $user_name = 'User Name';
      }
    }
    else {
      if ($account = user_load($conversation->uid)) {
        $user_name = $account->name;
      }
      else {
        $user_name = 'User Name';
      }
    }

    return t('Conversation with @name', array('@name' => $user_name));
  }

}
