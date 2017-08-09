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
  $tokens['conversation_booking_details'] = array(
    'name' => t('Details of the booking'),
    'description' => t('Details of the booking'),
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
    $property_name = '';
    $checkin = '';
    $checkout = '';
    $featured_image = '';
    $guests = '';
    $children = '';

    if ($property->type == 'locanda_property') {
      $property_name = $property->name . ' - ' . $type->name;
    }
    else {
      $property_name = $property->name;
    }

    if ($checkin = field_get_items('roomify_conversation', $conversation, 'conversation_book_start_date')) {
      $checkin = new DateTime($checkin[0]['value']);
      $checkin = '<p style="margin:5px 0;width:100%">' . t('Check In: ') . '<strong>' . $checkin->format('D, d M, Y') . '</strong></p>';
    }
    if ($checkout = field_get_items('roomify_conversation', $conversation, 'conversation_book_end_date')) {
      $checkout = new DateTime($checkout[0]['value']);
      $checkout = '<p style="margin:5px 0;width:100%">' . t('Check Out: ') . '<strong>' . $checkout->format('D, d M, Y') . '</strong></p>';
    }
    if ($featured_image = field_get_items('roomify_property', $property, 'field_sp_featured_image')) {
      $image = array('style_name' => 'square', 'path' => $featured_image[0]['uri']);
      $image['attributes'] = array('style' => 'width:270px;border: 2px solid white;vertical-align:bottom;');
      $featured_image = theme('image_style', $image);
    }
    if ($guests = field_get_items('roomify_conversation', $conversation, 'conversation_guests')) {
      $guests = '<p style="margin:5px 0;width:100%">' . t('Guests: ') . '<strong>' . $guests[0]['value'] . '</strong></p>';
    }
    if ($children = field_get_items('roomify_conversation', $conversation, 'conversation_children')) {
      $children = '<p style="margin:5px 0;width:100%">' . t('Children: ') . '<strong>' . $children[0]['value'] . '</strong></p>';
    }

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
          $return[$original] = $property_name;
          break;

        case 'property_owner':
          $owner = user_load($property->uid);
          $return[$original] = $owner->name;
          break;

        case 'conversation_booking_details':
          $return[$original] =
            '<table style="width: 590px;padding-right:10px;background: #ececec;margin-bottom:20px;">
              <tbody>
                <tr>
                  <td>' . $featured_image . '</td>
                  <td style="padding-left:30px;padding-right:10px;">
                      <strong style="width:100%;font-size:23px">' . $property_name . '</strong>' .
                      $checkin . $checkout . $guests . $children . ' </td>
                </tr>
              <tbody>
            </table>';
          break;
      }
    }
  }

  return $return;
}
