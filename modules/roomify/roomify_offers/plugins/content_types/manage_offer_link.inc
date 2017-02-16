<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Offer'),
  'title' => t('Manage Offer Link'),
  'render callback' => 'roomify_offer_manage_offer_render',
  'required context' => new ctools_context_required(t('Offer'), 'node'),
);

/**
 *
 */
function roomify_offer_manage_offer_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $node = $pane_context->data;

  $content = '';

  if (user_access('administer offers')) {
    if ($offer_id = field_get_items('node', $node, 'field_offer_reference')) {
      $url = '/admin/bat/config/rate/manage/' . $offer_id[0]['target_id'];
      $content = l(t('Manage Offer Settings'), $url, array(
        'html' => TRUE,
        'attributes' => array(
          'class' => array('btn btn-warning manage-offer-link')
        ),
        'query' => array(
          'destination' => '/admin/bat/config/global/offers',
        ),
      ));
    }
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
