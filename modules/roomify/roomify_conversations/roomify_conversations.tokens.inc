<?php

/**
 * @file
 */

/**
 * Implements hook_token_info().
 */
function roomify_conversations_token_info() {
  $tokens['url'] = array(
    'name' => t('Conversation URL'),
    'description' => t('Conversation URL.'),
  );
  $tokens['absolute_url'] = array(
    'name' => t('Absolute Conversation URL'),
    'description' => t('Absolute Conversation URL.'),
  );
  $tokens['message'] = array(
    'name' => t('Last Conversation Message'),
    'description' => t('Last Conversation Message.'),
  );
  $tokens['property_name'] = array(
    'name' => t('Property Name'),
    'description' => t('Property Name.'),
  );
  $tokens['property_owner'] = array(
    'name' => t('Property Owner'),
    'description' => t('Property Owner.'),
  );

  return array(
    'tokens' => array('roomify_conversation' => $tokens),
  );
}

/**
 * Implements hook_tokens().
 */
function roomify_conversations_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $return = array();

  if ($type == 'roomify_conversation' && !empty($data['roomify_conversation'])) {
    $conversation = $data['roomify_conversation'];

    $type = bat_type_load($conversation->conversation_unit_type_ref[LANGUAGE_NONE][0]['target_id']);
    $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'url':
          $return[$original] = url('conversation/' . $conversation->conversation_id);
          break;

        case 'absolute_url':
          $return[$original] = url('conversation/' . $conversation->conversation_id, array('absolute' => TRUE));
          break;

        case 'message':
          $return[$original] = $data['message']->arguments['@string'];
          break;

        case 'property_name':
          $return[$original] = $property->name;
          break;

        case 'property_owner':
          $owner = user_load($property->uid);
          $return[$original] = $owner->name;
          break;
      }
    }
  }

  return $return;
}
