<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_offers_views_data_alter(&$data) {
  $data['roomify_rates']['join_link'] = array(
    'field' => array(
      'title' => t('Join offer Link'),
      'help' => t('Provide a link to join this offer.'),
      'handler' => 'join_offer_link_field',
    ),
  );
}
