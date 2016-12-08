<?php

/**
 * @file
 */

/**
 *
 */
class join_offer_link_field extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function construct() {
    parent::construct();

    $this->additional_fields['rate_id'] = 'rate_id';
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['text'] = array('default' => '', 'translatable' => TRUE);

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

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
    $rate_id = $values->{$this->aliases['rate_id']};
    $property_id = arg(5);

    $rate = roomify_rate_load($rate_id);
    $property = roomify_property_load($property_id);

    $property_ids = array();
    if ($offer_property_reference = field_get_items('roomify_rate', $rate, 'offer_property_reference')) {
      foreach ($offer_property_reference as $field_item) {
        $property_ids[] = $field_item['target_id'];
      }
    }

    if (!in_array($property->property_id, $property_ids)) {
      return l(t('Participate'), 'admin/bat/config/global/offers/' . $rate_id . '/join/' . $property_id, array('query' => drupal_get_destination()));
    }
    else {
      return l(t('Don\'t participate'), 'admin/bat/config/global/offers/' . $rate_id . '/leave/' . $property_id, array('query' => drupal_get_destination()));
    }
  }

}
