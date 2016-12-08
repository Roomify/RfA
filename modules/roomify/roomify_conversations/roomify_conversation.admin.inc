<?php

/**
 * @file
 * RoomifyConversation editing UI.
 */

/**
 * UI controller.
 */
class RoomifyConversationUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    // Change the add page menu to multiple types of entities.
    $items[$this->path . '/add']['title'] = 'Add a Conversation';
    $items[$this->path . '/add']['description'] = 'Create a new conversation.';
    $items[$this->path . '/add']['page callback'] = 'roomify_conversation_add_page';
    $items[$this->path . '/add']['access callback'] = 'roomify_conversation_add_access';
    unset($items[$this->path . '/add']['title callback']);

    // Add menu items to add each different type of bookings.
    foreach (bat_booking_get_types() as $booking_type) {
      $items[$this->path . '/add/' . $booking_type->type] = array(
        'title' => 'Add @booking_type_label booking',
        'title arguments' => array('@booking_type_label' => $booking_type->label),
        'page callback' => 'roomify_conversation_create_form_wrapper',
        'page arguments' => array($booking_type->type),
        'access callback' => 'roomify_conversation_access',
        'access arguments' => array('create', roomify_conversation_create(array('type' => $booking_type->type, 'uid' => 0))),
        'file' => 'roomify_conversation.admin.inc',
        'file path' => drupal_get_path('module', $this->entityInfo['module']),
      );
    }

    return $items;
  }

  /**
   * Creates the markup for the add Conversation Entities page within the class
   * so it can easily be extended/overridden.
   */
  public function addPage() {
    $item = menu_get_item();
    $conversation_types = roomify_conversation_get_types();

    if (count($conversation_types) == 1) {
      $conversation_type = reset($conversation_types);
      drupal_goto($this->path . '/add/' . $conversation_type->type);
    }

    $items = array();
    foreach ($conversation_types as $conversation_type) {
      $items[] = array(
        'title' => t('Add @conversation_type_label booking', array('@conversation_type_label' => $conversation_type->label)),
        'href' => $this->path . '/add/' . $conversation_type->type,
        'description' => '',
      );
    }

    return array(
      '#theme' => 'roomify_conversation_add_list',
      '#content' => $items,
    );
  }

}

/**
 *
 */
function roomify_conversation_create_form_wrapper($type) {
  global $user;

  $conversation = roomify_conversation_create(array('type' => $type, 'uid' => $user->uid));
  $conversation->created = REQUEST_TIME;
  $conversation->author_name = $user->name;

  return drupal_get_form('roomify_conversation_edit_form', $conversation);
}

/**
 *
 */
function roomify_conversation_form($form, &$form_state, $conversation, $op = 'edit') {
  return roomify_conversation_edit_form($form, $form_state, $conversation);
}

/**
 *
 */
function roomify_conversation_edit_form($form, &$form_state, $conversation) {
  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#default_value' => isset($conversation->name) ? $conversation->name : '',
    '#maxlength' => 255,
    '#required' => TRUE,
    '#weight' => -99,
  );

  $form_state['roomify_conversation'] = $conversation;
  field_attach_form('roomify_conversation', $conversation, $form, $form_state, isset($conversation->language) ? $conversation->language : NULL);

  $form['type'] = array(
    '#type' => 'value',
    '#value' => $conversation->type,
  );

  $form['actions'] = array(
    '#type' => 'actions',
    '#tree' => FALSE,
  );
  // We add the form's #submit array to this button along with the actual submit
  // handler to preserve any submit handlers added by a form callback_wrapper.
  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save conversation'),
    '#submit' => $submit + array('roomify_conversation_edit_form_submit'),
  );

  $form['#validate'][] = 'roomify_conversation_edit_form_validate';

  return $form;
}

/**
 * Form API validation callback for the conversation form.
 */
function roomify_conversation_edit_form_validate(&$form, &$form_state) {
  // Notify field widgets to validate their data.
  entity_form_field_validate('roomify_conversation', $form, $form_state);
}

/**
 * Form API submit callback for the booking form.
 */
function roomify_conversation_edit_form_submit(&$form, &$form_state) {
  $conversation = entity_ui_controller('roomify_conversation')->entityFormSubmitBuildEntity($form, $form_state);

  $conversation->created = !empty($conversation->date) ? strtotime($conversation->date) : REQUEST_TIME;
  $conversation->changed = time();

  $conversation->save();
  drupal_set_message(t('Conversation @name saved', array('@name' => $conversation->name)));

  $form_state['redirect'] = 'admin/bat/config/conversations';
}

/**
 * Page to add Booking.
 */
function roomify_conversation_add_page() {
  $controller = entity_ui_controller('roomify_conversation');
  return $controller->addPage();
}

/**
 * Displays the list of available conversation types for conversation creation.
 *
 * @ingroup themeable
 */
function theme_roomify_conversation_add_list($variables) {
  $content = $variables['content'];

  $output = '';
  if ($content) {
    $output = '<dl class="booking-type-list">';
    foreach ($content as $item) {
      $output .= '<dt>' . l($item['title'], $item['href']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($item['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    if (user_access('administer roomify_conversation_type entities')) {
      $output = '<p>' . t('Bookings cannot be added because you have not created any booking types yet. Go to the <a href="@create-booking-type">booking type creation page</a> to add a new booking type.', array('@create-booking-type' => url('admin/bat/config/booking-types/add'))) . '</p>';
    }
    else {
      $output = '<p>' . t('No booking types have been created yet for you to use.') . '</p>';
    }
  }

  return $output;
}
