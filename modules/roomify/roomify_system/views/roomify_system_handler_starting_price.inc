<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class roomify_system_handler_starting_price extends views_handler_field {

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
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    $pid = $values->property_id;
    $price = get_lower_default_price_property_types($pid);

    $starting_from = '<div class="listing-base-price">
        <span class="starting-from">' . t('starting from') . ' </span>
        <span class="price">' . $price . '</span>
      </div>';

    return $starting_from;
  }

}
