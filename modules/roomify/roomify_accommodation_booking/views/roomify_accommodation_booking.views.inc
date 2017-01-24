<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_accommodation_booking_views_data_alter(&$data) {
  foreach (search_api_index_load_multiple(FALSE) as $index) {
    if ($index->item_type == 'bat_type') {
      $data['search_api_index_' . $index->machine_name]['book_this'] = array(
        'field' => array(
          'title' => t('Book this'),
          'help' => t('Display links to create a new booking.'),
          'handler' => 'roomify_accommodation_booking_book_this_field',
        ),
      );
    }
  }
}
