<?php

/**
 * @file
 */

/**
 *
 */
class roomify_conversations_views_handler_conversation_url_popup extends views_handler_field {

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
    global $language;

    $cid = $values->conversation_id;

    $content = '/' . $language->language . '/admin/conversations/' . $cid . '/quick-reply/nojs'; 

    return $content;
  }

}
