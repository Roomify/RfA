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

    if ($language->provider == 'language-default') {
      return '/admin/conversations/' . $cid . '/quick-reply/nojs';
    }
    else {
      return '/' . $language->language . '/admin/conversations/' . $cid . '/quick-reply/nojs';
    }

  }

}
