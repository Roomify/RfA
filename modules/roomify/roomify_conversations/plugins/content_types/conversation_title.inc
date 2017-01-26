<?php

/**
 * @file
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Conversation title'),
  'icon' => 'icon_node.png',
  'description' => t('Conversation title'),
  'category' => t('Roomify Conversations'),
  'required context' => new ctools_context_required(t('Conversation'), 'roomify_conversation'),
);

/**
 *
 */
function roomify_conversations_conversation_title_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context->data)) {
    return;
  }

  global $user;

  $conversation = $context->data;
  $conversation_wrapper = entity_metadata_wrapper('roomify_conversation', $conversation);

  if ($conversation->uid == $user->uid) {
    $owner = $conversation_wrapper->conversation_unit_type_ref->field_st_property_reference->field_sp_owner->value();
    $manager = user_load($conversation_wrapper->conversation_unit_type_ref->field_st_property_reference->uid->value());

    if ($profile = profile2_load_by_user($manager, 'property_owner')) {
      if ($owner_name = field_get_items('profile2', $profile, 'property_owner_name')) {
        $user_name = $owner_name[0]['value'];
      }
      else {
        $user_name = $manager->name;
      }
    }
    else {
      $user_name = $manager->name;
    }

    if ($owner->uid != $manager->uid) {
      $title = t('Conversation with <i>@name</i> (Property manager)', array('@name' => $user_name));
    }
    else {
      $title = t('Conversation with <i>@name</i>', array('@name' => $user_name));
    }
  }
  else {
    $account = user_load($conversation->uid);

    if ($profile = profile2_load_by_user($account, 'guest')) {
      if ($guest_name = field_get_items('profile2', $profile, 'guest_name')) {
        $user_name = $guest_name[0]['value'];
      }
      else {
        $user_name = $account->name;
      }
    }
    else {
      $user_name = $account->name;
    }

    $title = t('Conversation with <i>@name</i>', array('@name' => $user_name));
  }

  // Build the content type block.
  $block = new stdClass();
  $block->content = '<h1>' . $title . '</h1>';

  return $block;
}
