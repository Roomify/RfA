<?php

/**
 * @file
 * Contains a Views field handler to take care of a localize link to edit pets.
 */

/**
 *
 */
class roomify_dashboard_handler_localized_edit_link extends views_handler_field {

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
    $url = url('admin/structure/pets/manage/' . $values->pets_name, array('absolute' => TRUE));
    foreach (language_list() as $code => $language) {
      if ($code == $values->pets_language) {
        $url = url('admin/structure/pets/manage/' . $values->pets_name, array('language' => $language, 'absolute' => TRUE));
      }
    }
    return l(t('Edit Template'), $url);
  }

}
