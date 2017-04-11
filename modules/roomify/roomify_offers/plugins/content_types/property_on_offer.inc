<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Property Offer'),
  'render callback' => 'roomify_dashboard_property_offer_render',
  'required context' => new ctools_context_required(t('Roomify Property'), 'roomify_property'),
);

/**
 * Checks if a property participate to an offer and shows the offer.
 */
function roomify_dashboard_property_offer_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $content = '';

  $property = $pane_context->data;
  $start_date = new DateTime();

  // Let's check for offer in a year.
  $end_date = new DateTime();
  $end_date->add(new DateInterval('P12M'));
  $offer_participating = '';
  // Looks for offers.
  if ($offers = roomify_offers_get_offers($property, $start_date, $end_date)) {
    foreach ($offers as $offer) {
      $offer_description = isset($offer->offer_description[LANGUAGE_NONE][0]['value']) ? $offer->offer_description[LANGUAGE_NONE][0]['value'] : '';
      // If the offer has a page let's link the name to that.
      if (isset($offer->offer_node_reference[LANGUAGE_NONE][0]['target_id']) && !empty($offer->offer_node_reference[LANGUAGE_NONE][0]['target_id'])) {
        $offer_name = l($offer->name, 'node/' . $offer->offer_node_reference[LANGUAGE_NONE][0]['target_id']);
      }
      else {
        $offer_name = $offer->name;
      }

      $offer_help_text = '<div class="offer-description"><span class="offer-name">' . $offer_name . ': </span> <p>' . truncate_utf8(strip_tags($offer_description), 100, FALSE, TRUE) . '</p></div>';

      $start_offer = new DateTime($offer->offer_start_date[LANGUAGE_NONE][0]['value']);
      $start_date = '<div class="offer-start">' . $start_offer->format('d M y') . '</div>';

      $end_offer = new DateTime($offer->offer_end_date[LANGUAGE_NONE][0]['value']);
      $end_date = '<div class="offer-end">' . $end_offer->format('d M y') . '</div>';

      $offer_participating .= '<div class="offer">' . $start_date . '<span class="date-arrow"></span>' . $end_date . $offer_help_text . '</div>';

    }
  }

  $block = new stdClass();
  $block->content = $offer_participating;

  return $block;
}
