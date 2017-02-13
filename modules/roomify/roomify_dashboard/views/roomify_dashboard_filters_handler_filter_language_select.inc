<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying language filter as select.
 */

/**
 *
 */
class roomify_dashboard_filters_handler_filter_language_select extends views_handler_filter_in_operator {

  /**
   * {@inheritdoc}
   */

  public function get_value_options() {
    $languages_list = array();

    $results = db_select('languages', 'l')
      ->fields('l')
      ->execute()
      ->fetchAll();

    foreach ($results as $result) {
      $languages_list[$result->language] = $result->name;
    }

    $this->value_options = $languages_list;

    return $languages_list;
  }

}
