<?php

/**
 * @file
 */

/**
 * Allows modules to define roles and permissions.
 */
function hook_roomify_rights() {
  $rights['roomify_rights'] = array(
    'Casa Manager' => array(
      'access content overview',
      'create bat_type entities',
    ),
    'Casa Owner' => array(
      'access content overview',
    ),
  );

  return $rights;
}

/**
 * Allows modules to alter permissions defined with the hook_roomify_rights.
 *
 * @param $permissions
 */
function hook_roomify_rights_alter(&$permissions) {
  // Remove permission 'access content' for anonymous users.
  unset($permissions['anonymous user']['access content']);
}

/**
 * Allows modules to define Group roles and permissions.
 */
function hook_roomify_rights_group() {
  $rights['roomify_rights'] = array(
    'group_manager' => array(
      'add member',
    ),
  );

  return $rights;
}

/**
 * Allows modules to alter permissions defined with the hook_roomify_rights_group.
 *
 * @param $permissions
 */
function hook_roomify_rights_group_alter(&$permissions) {
  // Remove permission 'add member' for group_manager users.
  unset($permissions['group_manager']['add member']);
}
