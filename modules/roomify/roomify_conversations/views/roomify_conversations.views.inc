<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_conversations_views_data_alter(&$data) {
  $data['roomify_conversations']['name']['field']['handler'] = 'roomify_conversations_views_handler_name';
  $data['roomify_conversations']['changed']['field']['handler'] = 'roomify_conversations_views_handler_date';
  $data['roomify_conversations']['created']['field']['handler'] = 'roomify_conversations_views_handler_date';

  $data['roomify_conversations']['most_recent_message'] = array(
    'field' => array(
      'title' => t('Most recent message'),
      'help' => t('Display most recent message on this conversation.'),
      'handler' => 'roomify_conversations_views_handler_most_recent_message',
    ),
  );

  $data['roomify_conversations']['most_recent_message_user'] = array(
    'field' => array(
      'title' => t('Most recent message author'),
      'help' => t('Display the username of the author of the most recent message on this conversation.'),
      'handler' => 'roomify_conversations_views_handler_most_recent_message_user',
    ),
  );

  $data['roomify_conversations']['conversation_info'] = array(
    'field' => array(
      'title' => t('Conversation Info URL'),
      'help' => t('Display a link to the conversation to open as a popup.'),
      'handler' => 'roomify_conversations_views_handler_conversation_url_popup',
    ),
  );

}

/**
 * Implements hook_views_default_views().
 */
function roomify_conversations_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'user_conversations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'roomify_conversations';
  $view->human_name = 'User Conversations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Conversations';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['link_display'] = 'owner_all_conversations';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['conversation_unit_type_ref_target_id']['id'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['relationships']['conversation_unit_type_ref_target_id']['table'] = 'field_data_conversation_unit_type_ref';
  $handler->display->display_options['relationships']['conversation_unit_type_ref_target_id']['field'] = 'conversation_unit_type_ref_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['id'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['table'] = 'bat_types';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['field'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['relationships']['reverse_property_bat_type_reference_roomify_property']['relationship'] = 'conversation_unit_type_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['conversation_owner_user_ref_target_id']['id'] = 'conversation_owner_user_ref_target_id';
  $handler->display->display_options['relationships']['conversation_owner_user_ref_target_id']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['relationships']['conversation_owner_user_ref_target_id']['field'] = 'conversation_owner_user_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['conversation_booking_ref_target_id']['id'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['relationships']['conversation_booking_ref_target_id']['table'] = 'field_data_conversation_booking_ref';
  $handler->display->display_options['relationships']['conversation_booking_ref_target_id']['field'] = 'conversation_booking_ref_target_id';
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['conversation_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] - view conversation';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'conversation/[conversation_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Owner */
  $handler->display->display_options['fields']['conversation_owner_user_ref']['id'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['field'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_owner_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Guest */
  $handler->display->display_options['fields']['conversation_guest_user_ref']['id'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['field'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_guest_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Start Date */
  $handler->display->display_options['fields']['conversation_book_start_date']['id'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['table'] = 'field_data_conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['field'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: End Date */
  $handler->display->display_options['fields']['conversation_book_end_date']['id'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['table'] = 'field_data_conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['field'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_end_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j, Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[changed] ago with [conversation_guest_user_ref]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name_2']['label'] = 'Property';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2]';
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'listing/[property_id]';
  /* Field: Requested Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '([conversation_book_start_date] - [conversation_book_end_date])
                ';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Conversation: Further info */
  $handler->display->display_options['fields']['conversation_further_info']['id'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['table'] = 'field_data_conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['field'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['conversation_further_info']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message']['id'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['text'] = '[most_recent_message]';
  $handler->display->display_options['fields']['most_recent_message']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['most_recent_message']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: Most recent message author */
  $handler->display->display_options['fields']['most_recent_message_user']['id'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_user']['field'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_user']['empty'] = '[conversation_guest_user_ref]';
  /* Field: Roomify Conversation: Price */
  $handler->display->display_options['fields']['conversation_book_price']['id'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['table'] = 'field_data_conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['field'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['conversation_book_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['conversation_book_price']['group_column'] = 'value';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['relationship'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['fields']['booking_price']['label'] = '';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_price']['empty'] = '[conversation_book_price]';
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message_1']['id'] = 'most_recent_message_1';
  $handler->display->display_options['fields']['most_recent_message_1']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_1']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message_1']['label'] = 'Most recent message - not trimmed';
  $handler->display->display_options['fields']['most_recent_message_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_1']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_roomify_conversation';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Conversation Info (linked) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Conversation Info (linked)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>
                    ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: User: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['relationship'] = 'conversation_owner_user_ref_target_id';
  /* Sort criterion: Roomify Conversation: Changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Roomify Conversation: Guest (conversation_guest_user_ref) */
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['id'] = 'conversation_guest_user_ref_target_id';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['field'] = 'conversation_guest_user_ref_target_id';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['conversation_guest_user_ref_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Owner Conversations */
  $handler = $view->new_display('panel_pane', 'Owner Conversations', 'owner_conversations');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['conversation_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] - view conversation';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'conversation/[conversation_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Owner */
  $handler->display->display_options['fields']['conversation_owner_user_ref']['id'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['field'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_owner_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Guest */
  $handler->display->display_options['fields']['conversation_guest_user_ref']['id'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['field'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_guest_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Start Date */
  $handler->display->display_options['fields']['conversation_book_start_date']['id'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['table'] = 'field_data_conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['field'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: End Date */
  $handler->display->display_options['fields']['conversation_book_end_date']['id'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['table'] = 'field_data_conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['field'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_end_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j, Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[changed] ago with [conversation_guest_user_ref]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name_2']['label'] = 'Property';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2]';
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'listing/[property_id]';
  /* Field: Requested Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '([conversation_book_start_date] - [conversation_book_end_date])
                  ';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Conversation: Further info */
  $handler->display->display_options['fields']['conversation_further_info']['id'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['table'] = 'field_data_conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['field'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['conversation_further_info']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message']['id'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['text'] = '[most_recent_message]';
  $handler->display->display_options['fields']['most_recent_message']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['most_recent_message']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: Most recent message author */
  $handler->display->display_options['fields']['most_recent_message_user']['id'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_user']['field'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_user']['empty'] = '[conversation_guest_user_ref]';
  /* Field: Roomify Conversation: Price */
  $handler->display->display_options['fields']['conversation_book_price']['id'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['table'] = 'field_data_conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['field'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['conversation_book_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['conversation_book_price']['group_column'] = 'value';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['relationship'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['fields']['booking_price']['label'] = '';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_price']['empty'] = '[conversation_book_price]';
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message_1']['id'] = 'most_recent_message_1';
  $handler->display->display_options['fields']['most_recent_message_1']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_1']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message_1']['label'] = 'Most recent message - not trimmed';
  $handler->display->display_options['fields']['most_recent_message_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_1']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: Conversation Info URL */
  $handler->display->display_options['fields']['conversation_info']['id'] = 'conversation_info';
  $handler->display->display_options['fields']['conversation_info']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_info']['field'] = 'conversation_info';
  $handler->display->display_options['fields']['conversation_info']['label'] = '';
  $handler->display->display_options['fields']['conversation_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_info']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_roomify_conversation';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Conversation Info (linked) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Conversation Info (linked)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="[conversation_info]">Reply</a></div>
                    ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'conversation_owner_user_ref_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['uid']['validate_options']['code'] = 'if (user_access(\'update any roomify_conversation entity\')) {
                          return FALSE;
                          }
                          else {
                          return TRUE;
                          }';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Guest View All Conversations */
  $handler = $view->new_display('page', 'Guest View All Conversations', 'guest_all_conversations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Conversations as Guest';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own roomify_conversation entities';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['conversation_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] - view conversation';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'conversation/[conversation_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Owner */
  $handler->display->display_options['fields']['conversation_owner_user_ref']['id'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['field'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_owner_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Guest */
  $handler->display->display_options['fields']['conversation_guest_user_ref']['id'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['field'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_guest_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Start Date */
  $handler->display->display_options['fields']['conversation_book_start_date']['id'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['table'] = 'field_data_conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['field'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: End Date */
  $handler->display->display_options['fields']['conversation_book_end_date']['id'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['table'] = 'field_data_conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['field'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_end_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j, Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[changed] ago with [conversation_guest_user_ref]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name_2']['label'] = 'Property';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2]';
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'listing/[property_id]';
  /* Field: Requested Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '([conversation_book_start_date] - [conversation_book_end_date])
                  ';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Conversation: Further info */
  $handler->display->display_options['fields']['conversation_further_info']['id'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['table'] = 'field_data_conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['field'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['conversation_further_info']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message']['id'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['text'] = '[most_recent_message]';
  $handler->display->display_options['fields']['most_recent_message']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['most_recent_message']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: Most recent message author */
  $handler->display->display_options['fields']['most_recent_message_user']['id'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_user']['field'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_user']['empty'] = '[conversation_guest_user_ref]';
  /* Field: Roomify Conversation: Price */
  $handler->display->display_options['fields']['conversation_book_price']['id'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['table'] = 'field_data_conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['field'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['conversation_book_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['conversation_book_price']['group_column'] = 'value';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['relationship'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['fields']['booking_price']['label'] = '';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_price']['empty'] = '[conversation_book_price]';
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message_1']['id'] = 'most_recent_message_1';
  $handler->display->display_options['fields']['most_recent_message_1']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_1']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message_1']['label'] = 'Most recent message - not trimmed';
  $handler->display->display_options['fields']['most_recent_message_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_1']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_roomify_conversation';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Conversation Info (linked) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Conversation Info (linked)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>
                    ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'admin/bat/conversations/guest';

  /* Display: Guest Conversations */
  $handler = $view->new_display('panel_pane', 'Guest Conversations', 'guest_conversations');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'guest_all_conversations';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['conversation_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] - view conversation';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'conversation/[conversation_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Owner */
  $handler->display->display_options['fields']['conversation_owner_user_ref']['id'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['field'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_owner_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Guest */
  $handler->display->display_options['fields']['conversation_guest_user_ref']['id'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['field'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_guest_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Start Date */
  $handler->display->display_options['fields']['conversation_book_start_date']['id'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['table'] = 'field_data_conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['field'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: End Date */
  $handler->display->display_options['fields']['conversation_book_end_date']['id'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['table'] = 'field_data_conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['field'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_end_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j, Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[changed] ago with [conversation_guest_user_ref]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name_2']['label'] = 'Property';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2]';
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'listing/[property_id]';
  /* Field: Requested Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '([conversation_book_start_date] - [conversation_book_end_date])
                  ';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Conversation: Further info */
  $handler->display->display_options['fields']['conversation_further_info']['id'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['table'] = 'field_data_conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['field'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['conversation_further_info']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message']['id'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['text'] = '[most_recent_message]';
  $handler->display->display_options['fields']['most_recent_message']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['most_recent_message']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: Most recent message author */
  $handler->display->display_options['fields']['most_recent_message_user']['id'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_user']['field'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_user']['empty'] = '[conversation_guest_user_ref]';
  /* Field: Roomify Conversation: Price */
  $handler->display->display_options['fields']['conversation_book_price']['id'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['table'] = 'field_data_conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['field'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['conversation_book_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['conversation_book_price']['group_column'] = 'value';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['relationship'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['fields']['booking_price']['label'] = '';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_price']['empty'] = '[conversation_book_price]';
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message_1']['id'] = 'most_recent_message_1';
  $handler->display->display_options['fields']['most_recent_message_1']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_1']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message_1']['label'] = 'Most recent message - not trimmed';
  $handler->display->display_options['fields']['most_recent_message_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_1']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_roomify_conversation';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Conversation Info (linked) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Conversation Info (linked)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>
                    ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'conversation_guest_user_ref_target_id' => array(
      'type' => 'user',
      'context' => 'entity:bat_booking.booking_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Roomify Conversation: Guest (conversation_guest_user_ref)',
    ),
  );

  /* Display: Owner View all Conversations */
  $handler = $view->new_display('page', 'Owner View all Conversations', 'owner_all_conversations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Conversations as Owner';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Roomify Property: Roomify property ID */
  $handler->display->display_options['fields']['property_id']['id'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['property_id']['field'] = 'property_id';
  $handler->display->display_options['fields']['property_id']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['property_id']['label'] = '';
  $handler->display->display_options['fields']['property_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['property_id']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Roomify conversation ID */
  $handler->display->display_options['fields']['conversation_id']['id'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['conversation_id']['field'] = 'conversation_id';
  $handler->display->display_options['fields']['conversation_id']['label'] = '';
  $handler->display->display_options['fields']['conversation_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['conversation_id']['separator'] = '';
  /* Field: Type: Label */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = ' - [name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Label */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] - view conversation';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'conversation/[conversation_id]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Roomify Conversation: Owner */
  $handler->display->display_options['fields']['conversation_owner_user_ref']['id'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['table'] = 'field_data_conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['field'] = 'conversation_owner_user_ref';
  $handler->display->display_options['fields']['conversation_owner_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_owner_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Guest */
  $handler->display->display_options['fields']['conversation_guest_user_ref']['id'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['table'] = 'field_data_conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['field'] = 'conversation_guest_user_ref';
  $handler->display->display_options['fields']['conversation_guest_user_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_guest_user_ref']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Start Date */
  $handler->display->display_options['fields']['conversation_book_start_date']['id'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['table'] = 'field_data_conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['field'] = 'conversation_book_start_date';
  $handler->display->display_options['fields']['conversation_book_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_start_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: End Date */
  $handler->display->display_options['fields']['conversation_book_end_date']['id'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['table'] = 'field_data_conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['field'] = 'conversation_book_end_date';
  $handler->display->display_options['fields']['conversation_book_end_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_end_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'M j, Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['text'] = '[changed] ago with [conversation_guest_user_ref]';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = '1';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Roomify Property: Label */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'roomify_properties';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['fields']['name_2']['label'] = 'Property';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['text'] = '[name_2]';
  $handler->display->display_options['fields']['name_2']['alter']['path'] = 'listing/[property_id]';
  /* Field: Requested Dates */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['label'] = 'Requested Dates';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '([conversation_book_start_date] - [conversation_book_end_date])
                  ';
  /* Field: Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'conversation_unit_type_ref_target_id';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Roomify Conversation: Further info */
  $handler->display->display_options['fields']['conversation_further_info']['id'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['table'] = 'field_data_conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['field'] = 'conversation_further_info';
  $handler->display->display_options['fields']['conversation_further_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['conversation_further_info']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['conversation_further_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message']['id'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['alter']['text'] = '[most_recent_message]';
  $handler->display->display_options['fields']['most_recent_message']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['most_recent_message']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: Most recent message author */
  $handler->display->display_options['fields']['most_recent_message_user']['id'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_user']['field'] = 'most_recent_message_user';
  $handler->display->display_options['fields']['most_recent_message_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_user']['empty'] = '[conversation_guest_user_ref]';
  /* Field: Roomify Conversation: Price */
  $handler->display->display_options['fields']['conversation_book_price']['id'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['table'] = 'field_data_conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['field'] = 'conversation_book_price';
  $handler->display->display_options['fields']['conversation_book_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['conversation_book_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['conversation_book_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['conversation_book_price']['group_column'] = 'value';
  /* Field: BAT Booking: Price */
  $handler->display->display_options['fields']['booking_price']['id'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['table'] = 'field_data_booking_price';
  $handler->display->display_options['fields']['booking_price']['field'] = 'booking_price';
  $handler->display->display_options['fields']['booking_price']['relationship'] = 'conversation_booking_ref_target_id';
  $handler->display->display_options['fields']['booking_price']['label'] = '';
  $handler->display->display_options['fields']['booking_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['booking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['booking_price']['empty'] = '[conversation_book_price]';
  $handler->display->display_options['fields']['booking_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['booking_price']['settings'] = array(
    'calculation' => FALSE,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Roomify Conversation: Most recent message */
  $handler->display->display_options['fields']['most_recent_message_1']['id'] = 'most_recent_message_1';
  $handler->display->display_options['fields']['most_recent_message_1']['table'] = 'roomify_conversations';
  $handler->display->display_options['fields']['most_recent_message_1']['field'] = 'most_recent_message';
  $handler->display->display_options['fields']['most_recent_message_1']['label'] = 'Most recent message - not trimmed';
  $handler->display->display_options['fields']['most_recent_message_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['most_recent_message_1']['empty'] = '[conversation_further_info]';
  /* Field: Roomify Conversation: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_roomify_conversation';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Conversation Info (linked) */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Conversation Info (linked)';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>
                    ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'conversation_owner_user_ref_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['uid']['validate_options']['code'] = 'if (user_access(\'update any roomify_conversation entity\')) {
                          return FALSE;
                          }
                          else {
                          return TRUE;
                          }';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Roomify Property: Label */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'roomify_properties';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'reverse_property_bat_type_reference_roomify_property';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Property Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name_2';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Roomify Conversation: Name (conversation_user_name) */
  $handler->display->display_options['filters']['conversation_user_name_value']['id'] = 'conversation_user_name_value';
  $handler->display->display_options['filters']['conversation_user_name_value']['table'] = 'field_data_conversation_user_name';
  $handler->display->display_options['filters']['conversation_user_name_value']['field'] = 'conversation_user_name_value';
  $handler->display->display_options['filters']['conversation_user_name_value']['operator'] = 'word';
  $handler->display->display_options['filters']['conversation_user_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['operator_id'] = 'conversation_user_name_value_op';
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['label'] = 'Guest Name';
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['operator'] = 'conversation_user_name_value_op';
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['identifier'] = 'conversation_user_name_value';
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['conversation_user_name_value']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'admin/bat/conversations/owner';
  $translatables['user_conversations'] = array(
    t('Master'),
    t('Conversations'),
    t('View All'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Type entity referenced from conversation_unit_type_ref'),
    t('Roomify Property referencing Type from property_bat_type_reference'),
    t('User entity referenced from conversation_owner_user_ref'),
    t('BAT Booking entity referenced from conversation_booking_ref'),
    t('.'),
    t(','),
    t(' - [name_1]'),
    t('[name] - view conversation'),
    t('Owner'),
    t('Guest'),
    t('Start Date'),
    t('End Date'),
    t('[changed] ago with [conversation_guest_user_ref]'),
    t('Property'),
    t('[name_2]'),
    t('Requested Dates'),
    t('([conversation_book_start_date] - [conversation_book_end_date])
                '),
    t('Further info'),
    t('Most recent message'),
    t('[most_recent_message]'),
    t('[conversation_further_info]'),
    t('Most recent message author'),
    t('[conversation_guest_user_ref]'),
    t('Price'),
    t('[conversation_book_price]'),
    t('Most recent message - not trimmed'),
    t('<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/admin/conversations/[conversation_id]/quick-reply/nojs">Reply</a></div>
                    '),
    t('Language'),
    t('All'),
    t('Owner Conversations'),
    t('more'),
    t('([conversation_book_start_date] - [conversation_book_end_date])
                  '),
    t('<div class="conversation-info">
                      <div><a class="conversation-info-link" href="[url]">
                        <div class="conversation-header">[name_2] [nothing]</div>
                        <div class="conversation-message"><span class="conversation-message-author">[most_recent_message_user]</span><span title="[most_recent_message_1]" class="conversation-message-message">[most_recent_message]</span><span class="conversation-price">[booking_price]</span></div>
                      </a></div>
                    </div>
                    <div class="conversation-reply"><a title="Quick Reply" class="quick-reply-button ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="[conversation_info]">Reply</a></div>
                    '),
    t('View panes'),
    t('Guest View All Conversations'),
    t('Conversations as Guest'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Guest Conversations'),
    t('Owner View all Conversations'),
    t('Conversations as Owner'),
    t('Property Name'),
    t('Guest Name'),
  );

  $views['user_conversations'] = $view;
  return $views;
}
