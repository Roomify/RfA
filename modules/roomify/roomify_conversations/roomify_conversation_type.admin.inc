<?php

/**
 * @file
 * RoomifyConversationType editing UI.
 */

/**
 * UI controller.
 */
class RoomifyConversationTypeUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    return $items;
  }

}

/**
 *
 */
function roomify_conversation_type_form($form, &$form_state, $conversation_type, $op = 'edit') {
  if ($op == 'clone') {
    $conversation_type->label .= ' (cloned)';
    $conversation_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Conversation type name'),
    '#type' => 'textfield',
    '#default_value' => $conversation_type->label,
    '#description' => t('The human-readable name of this conversation type.'),
    '#required' => TRUE,
    '#size' => 30,
    '#weight' => -100,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($conversation_type->type) ? $conversation_type->type : '',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'roomify_conversation_get_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this conversation type. It must only contain lowercase letters, numbers, and underscores.'),
    '#weight' => -99,
  );

  if ($op == 'edit') {
    $form['type']['#disabled'] = TRUE;
  }

  // Add the field related form elements.
  $form_state['roomify_conversation_type'] = $conversation_type;
  field_attach_form('roomify_conversation_type', $conversation_type, $form, $form_state);

  $form['additional_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 99,
  );

  $form['actions'] = array(
    '#type' => 'actions',
    '#tree' => FALSE,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save conversation type'),
    '#weight' => 100,
    '#submit' => array('roomify_conversation_type_form_submit'),
  );

  $form['#validate'][] = 'roomify_conversation_type_form_validate';
  return $form;
}

/**
 * Form API validation callback for the booking type form.
 */
function roomify_conversation_type_form_validate(&$form, &$form_state) {
  // Notify field widgets to validate their data.
  entity_form_field_validate('roomify_conversation_type', $form, $form_state);
}

/**
 * Form API submit callback for the booking type form.
 */
function roomify_conversation_type_form_submit(&$form, &$form_state) {
  $conversation_type = entity_ui_controller('roomify_conversation_type')->entityFormSubmitBuildEntity($form, $form_state);
  // Save and go back.
  $conversation_type->save();

  $form_state['roomify_conversation_type'] = $conversation_type;

  $form_state['redirect'] = 'admin/bat/config/conversation-types';
}
