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
    foreach (locale_language_list() as $language => $name) {
      $languages_list[$language] = $name;
    }

    $this->value_options = $languages_list;

    return $languages_list;
  }

}
