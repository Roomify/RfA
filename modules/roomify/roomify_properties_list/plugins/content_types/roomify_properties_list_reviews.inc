<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Reviews Block'),
  'render callback' => 'roomify_add_reviews_block_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Render callback.
 */
function roomify_add_reviews_block_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $node = $pane_context->data;

  $link = '';

  if (isset($node->field_properties_list_properties[LANGUAGE_NONE])) {
    foreach ($node->field_properties_list_properties[LANGUAGE_NONE] as $property) {
      $properties_ids[] = $property['target_id'];
    }
  }

  foreach ($properties_ids as $property_id) {
    $property = roomify_property_load($property_id);
    if ($property_reviews = field_get_items('roomify_property', $property, 'field_sp_property_rating')) {
      foreach ($property_reviews as $property_review) {
        $reviews[] = $property_review['target_id'];
      }
    }
  }

  $rating = 0;
  $name = '';
  $counter = 0;
  $li = '';
  $items = '';

  if (!empty($reviews)) {
    foreach ($reviews as $review_id) {
      $review = node_load($review_id);
      if ($reviewer = field_get_items('node', $review, 'field_reviewer_name')) {
        if (!empty($reviewer[0]['value'])) {
          $name = '<span class="reviewer-name">' . $reviewer[0]['value'] . '</span>';
        }
      }
      $date = date('F y', $review->created);
      if (empty($name)) {
        $info = $date;
      }
      else {
        $info = $name . ', ' . $date;
      }

      $active = ($counter == 0) ? 'active' : '';

      if ($counter <= 10) {

        $li .= '<li data-target="reviewCarousel" data-slide-to="' . $counter . '" class="' . $active . '"></li>';
        $counter++;

        $items .= '<div class="item ' . $active . '">
                   <div class="quote"></div>
                   <div class="title">' . substr($review->title, 0, 60) . '</div>
                   <div class="info">' . $info . '</div></div>';
      }

      $rating += $review->field_review_rating[LANGUAGE_NONE][0]['rating'];
    }

    $total_rating = round($rating / count($reviews) / 10, 1);
    $value = round($total_rating / 2);
    $total = '<div class="total-score">Total Score: <b>' . $total_rating . '</b> |  <u><b>' . count($reviews) . ' reviews</b></u></div>';

    for ($i = 5; $i > 0; $i--) {
      if ($value > 0) {
        $total .= '<span type="button" class="btnrating btn btn-default btn-lg filled">
            <i class="glyphicon glyphicon-star" aria-hidden="true"></i>
        </span>';
      }
      else {
        $total .= '<span type="button" class="btnrating btn btn-default btn-lg empty">
            <i class="glyphicon glyphicon-star-empty" aria-hidden="true"></i>
        </span>';
      }

      $value--;
    }

    $content = '<div class="container">
      <div id="reviewCarousel" class="carousel slide" data-ride="carousel">
        <!-- Indicators -->

        <!-- Wrapper for slides -->
        <div class="carousel-inner">
          ' . $items . '
        </div>

        <!-- Left and right controls -->
        <a class="left carousel-control" href="#reviewCarousel" data-slide="prev">
          <span class="glyphicon glyphicon-chevron-left"></span>
          <span class="sr-only">Previous</span>
        </a>
        <a class="right carousel-control" href="#reviewCarousel" data-slide="next">
          <span class="glyphicon glyphicon-chevron-right"></span>
          <span class="sr-only">Next</span>
        </a>
        <div class="total-rating">' . $total . '</div>
      </div>
    </div>';
  }
  else {
    $content = '<div class="container no-reviews">
        <div id="reviewCarousel" class="carousel slide" data-ride="carousel">
        ' . t('There are no reviews for properties in this list.') . '
        </div></div>';
  }
  $block = new stdClass();
  $block->module = 'roomify_properties_list';
  $block->delta = $subtype;
  $block->title = '';
  $block->content = $content;

  return $block;
}
