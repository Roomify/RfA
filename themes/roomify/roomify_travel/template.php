<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


function roomify_travel_status_messages($variables) {
  if (module_exists('better_messages')) {
    return theme_better_messages($variables);
  }
}

function roomify_travel_current_search_item_wrapper(array $variables) {
  $element = $variables['element'];
  $attributes = array(
    'class' => array(
      'current-search-item',
      drupal_html_class('current-search-item-' . $element['#current_search_id']),
    ),
  );
  $search = search_api_current_search();
  $current_search = array_pop($search);

  $searcher = 'search_api@' . $current_search[0]->getIndex()->machine_name;
  $adapter = facetapi_adapter_load($searcher);
  $url_processor = $adapter->getUrlProcessor();
  $fetched = $url_processor->fetchParams();

  $copy_fetched = $fetched;
  unset($copy_fetched['f']);
  unset($copy_fetched['q']);

  $path = explode('/',$_GET['q']);

  $url = l(format_plural(count($fetched['f']), t('Show all Properties'), t('Show all Properties')), $path[0], array('query' => $copy_fetched, 'attributes' => array('class' => array('show-all-properties'))));

  return '<div' . drupal_attributes($attributes) . '><div class="filter-main">' . $url . '</div>' . $element['#children'] . '</div>';
}

function roomify_travel_preprocess_slick_item(&$variables) {
  if ($variables['settings']['optionset'] == 'property_slideshow') {
    $variables['content_prefix'] = '<div class="slide__content">';
    $variables['content_suffix'] = '</div>';
  }
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_dep_date($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_type_ref($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_guests($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_arr_date($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_name($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_email($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements theme_field().
 */
function roomify_travel_field__field_listing_enquiry_info($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . '</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements hook_preprocess_html().
 */
function roomify_travel_preprocess_html(&$variables) {
  if (isset($variables['user']->uid)) {
    $cart = commerce_cart_order_load($variables['user']->uid);
    if (!empty($cart->commerce_line_items)) {
      $variables['classes_array'][] = 'roomify-notification';
      $variables['classes_array'][] = 'roomify-notification-cart';
    }
  } 
}

/**
 * Override or insert variables into the page template.
 */
function roomify_travel_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

/**
 * Override or insert variables into the html template.
 */
function roomify_travel_process_html(&$vars) {
  // Hook into color.module
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Implements theme_search_api_sorts_sort().
 */
function roomify_travel_search_api_sorts_sort(array $variables) {
  $name = $variables['name'];
  $path = $variables['path'];
  $options = $variables['options'] + array('attributes' => array());
  $options['attributes'] += array('class' => array());

  $order_options = $variables['order_options'] + array('query' => array(), 'attributes' => array(), 'html' => TRUE);
  $order_options['attributes'] += array('class' => array());

  if ((!isset($_GET['sort'])) || (isset($_GET['sort']) && $_GET['sort'] == 'priority')) {
    if ($variables['active']) {
      $return_html = '<span class="search-api-sort-active">';
      $return_html .= '<span class="sort-item active-sort">' . t($name) . '</span>';
      $return_html .= '</span>';
    }
    else {
      $return_html = l(t($name), $path, $options);
    }
  }
  elseif ($variables['active']) {
    $return_html = '<span class="search-api-sort-active">';
    $return_html .= l(t($name) . _roomify_travel_theme_sort_indicator($order_options['query']['order']), $path, $order_options);
    $return_html .= '</span>';
  }
  else {
    $return_html = l($name, $path, $options);
  }

  return $return_html;
}

/**
 * Custom implementation of sort indicator.
 */
function _roomify_travel_theme_sort_indicator($style) {
  if ($style == 'asc') {
    $asc = drupal_get_path('theme', 'roomify_travel') . '/images/sort-asc.svg';
    return file_get_contents($asc);
  }
  else {
    $desc = drupal_get_path('theme', 'roomify_travel') . '/images/sort-desc.svg';
    return file_get_contents($desc);
  }
}

/**
 * Implements template_preprocess_mimemail_message.
 */
function roomify_travel_preprocess_mimemail_message(&$variables) {
  $theme = variable_get('theme_default', 'roomify_travel');

  // Default Colors
  $header_bg = '#03A9F4';
  $footer_bg = '#000000';
  $header_color = '#FFFFFF';
  $footer_color = '#FFFFFF';

  $custom_colors = variable_get('color_' . $theme . '_palette', '');
  if ($custom_colors) {
    if ($custom_colors['header']) {
      $header_bg = $custom_colors['header'];
    }
    if ($custom_colors['footer']) {
      $footer_bg = $custom_colors['footer'];
    }
    if ($custom_colors['links']) {
      $header_color = $custom_colors['links'];
    }
    if ($custom_colors['text']) {
      $footer_color = $custom_colors['text'];
    }
  }

  // FOOTER TEXT
  $footer_text = variable_get('roomify_footer_text', 'Roomify for Accommodations - Copyright © 2017');

  $variables['footer_text'] = isset($footer_text['value']) ? $footer_text['value'] : $footer_text;
  $variables['header_bg'] = $header_bg;
  $variables['header_border'] = roomify_system_adjust_brightness($header_bg, -25);
  $variables['footer_bg'] = $footer_bg;
  $variables['footer_border'] = roomify_system_adjust_brightness($footer_bg, -25);
  $variables['header_color'] = $header_color;
  $variables['footer_color'] = $footer_color;
}

/**
 * Implements template_preprocess_page().
 */
function roomify_travel_preprocess_page(&$variables) {
  if (isset($variables['node']->type)) {
    if ($variables['node']->type == 'homepage') {

      $nodetype = $variables['node']->type;

      // Add a custom template for the landing_page node type.
      $variables['theme_hook_suggestions'][] = 'page__' . $nodetype;
    }
  }
  // Use a different page layout for B&Bs / Vacation rentls sites.
  $product = variable_get('roomify_accommodation_example_content', '');
  if (($product == 'b_and_b' || $product == 'vacation_rental') && arg(0) == 'listing') {
    $variables['theme_hook_suggestions'][] = 'page__locanda_listing';
  }
}

/**
 * Implements theme_facetapi_title().
 */
function roomify_travel_facetapi_title($variables) {
  global $language;

  if ($variables['facet']['#facet']['name'] == 'property_bat_type_reference:field_st_amenities') {
    $vocabulary = taxonomy_vocabulary_machine_name_load('amenities');
    $variables['title'] = i18n_taxonomy_vocabulary_name($vocabulary, $language->language);
  }
  elseif ($variables['facet']['#facet']['name'] == 'field_sp_area') {
    $vocabulary = taxonomy_vocabulary_machine_name_load('location');
    $variables['title'] = i18n_taxonomy_vocabulary_name($vocabulary, $language->language);
  }
  elseif ($variables['facet']['#facet']['name'] == 'field_sp_area_type') {
    $vocabulary = taxonomy_vocabulary_machine_name_load('area_type');
    $variables['title'] = i18n_taxonomy_vocabulary_name($vocabulary, $language->language);
  }

  return $variables['title'];
}
