<?php

/**
 * @file
 */

/**
 *
 */
class roomify_accommodation_booking_book_this_field extends entity_views_handler_field_text {

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    return array();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    return l(t('Book this'), 'booking/' . check_plain($_GET['bat_start_date']) . '/' . check_plain($_GET['bat_end_date']) . '/' . $values->entity);
  }

}
