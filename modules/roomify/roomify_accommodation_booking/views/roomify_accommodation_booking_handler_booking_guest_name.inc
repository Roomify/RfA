<?php

/**
 * @file
 */

/**
 *
 */
class roomify_accommodation_booking_handler_booking_guest_name extends entity_views_handler_field_text {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $guest_name = '';
    if (isset($values->users_field_data_booking_user_guest_uid)) {
      $guest = user_load($values->users_field_data_booking_user_guest_uid);

      $site_name = variable_get('site_name', 'RfA');
      // Use the username if we don't have first name and last name.
      $first_name = field_get_items('user', $guest, 'user_first_name');
      $last_name = field_get_items('user', $guest, 'user_last_name');
      if (empty($first_name[0]['value']) && empty($last_name[0]['value'])) {
        if (strpos($guest->name, 'rfa-guest') !== FALSE) {
          if (user_edit_access($guest)) {
            return l(t('@site guest', array('@site' => $site_name)), 'user/' . $guest->uid . '/edit');
          }
          else {
            return t('@site guest', array('@site' => $site_name));
          }
        }
        else {
          if (user_edit_access($guest)) {
            return l($guest->name, 'user/' . $guest->uid . '/edit');
          }
          else {
            return $guest->name;
          }
        }
      }
      // We have first name or last name.
      if ($first_name) {
        $guest_name .= $first_name[0]['value'] . ' ';
      }
      if ($last_name) {
        $guest_name .= $last_name[0]['value'];
      }
      if (!empty($guest_name)) {
        if (user_edit_access($guest)) {
          $guest_name = l($guest_name, 'user/' . $guest->uid . '/edit');
        }
      }
    }
    return $guest_name;
  }

}
