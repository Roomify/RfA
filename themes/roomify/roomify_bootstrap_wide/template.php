<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


function roomify_bootstrap_wide_status_messages($variables) {
  if (module_exists('better_messages')) {
    return theme_better_messages($variables);
  }
}

function roomify_bootstrap_wide_current_search_item_wrapper(array $variables) {
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

  $url = l(format_plural(count($fetched['f']), t('Clear All'), t('Clear All')), $path[0], array('query' => $copy_fetched, 'attributes' => array('class' => array('btn', 'btn-default', 'btn-danger'))));

  return '<div' . drupal_attributes($attributes) . '><div class="filter-main">' . $url . '</div>' . $element['#children'] . '</div>';
}

function roomify_bootstrap_wide_preprocess_slick_item(&$variables) {
  if ($variables['settings']['optionset'] == 'property_slider') {
    $variables['content_prefix'] = '<div class="slide__content">';
    $variables['content_suffix'] = '</div>';
  }
}

/**
 * Implements theme_field().
 */
function roomify_bootstrap_wide_field__field_listing_enquiry_dep_date($variables) {
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
function roomify_bootstrap_wide_field__field_listing_enquiry_type_ref($variables) {
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
function roomify_bootstrap_wide_field__field_listing_enquiry_guests($variables) {
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
function roomify_bootstrap_wide_field__field_listing_enquiry_arr_date($variables) {
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
function roomify_bootstrap_wide_field__field_listing_enquiry_name($variables) {
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
function roomify_bootstrap_wide_field__field_listing_enquiry_email($variables) {
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
function roomify_bootstrap_wide_field__field_listing_enquiry_info($variables) {
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
function roomify_bootstrap_wide_preprocess_html(&$variables) {
  if (isset($variables['user']->uid)) {
    $cart = commerce_cart_order_load($variables['user']->uid);
    if (!empty($cart->commerce_line_items)) {
      $variables['classes_array'][] = 'roomify-notification';
      $variables['classes_array'][] = 'roomify-notification-cart';
    }
  } 
}

/**
 * Implements hook_preprocess_page().
 */
function roomify_bootstrap_wide_preprocess_page(&$vars) {
  $header = drupal_get_http_header('status');

  if ($header == '404 Not Found') {     
    $vars['theme_hook_suggestions'][] = 'page__404';
  }
  if ($header == '403 Forbidden') {     
    $vars['theme_hook_suggestions'][] = 'page__403';
  }
}

/**
 * Override or insert variables into the html template.
 */
function roomify_bootstrap_wide_process_html(&$vars) {
  // Hook into color.module
  if (module_exists('color')) {
  _color_html_alter($vars);
  }
}

/**
 * Override or insert variables into the page template.
 */
function roomify_bootstrap_wide_process_page(&$variables) {
  // Hook into color.module.
  if (module_exists('color')) {
    _color_page_alter($variables);
  }
}

/**
 * Implements theme_search_api_sorts_sort().
 */
function roomify_bootstrap_wide_search_api_sorts_sort(array $variables) {
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
    $return_html .= l(t($name) . _roomify_bootstrap_theme_sort_indicator($order_options['query']['order']), $path, $order_options);
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
function _roomify_bootstrap_wide_theme_sort_indicator($style) {
  if ($style == 'asc') {
    return theme('image', array('path' => drupal_get_path('theme', 'roomify_bootstrap') . '/images/sort-desc.png', 'width' => 15, 'height' => 15, 'alt' => t('sort ascending'), 'title' => t('sort ascending')));
  }
  else {
    return theme('image', array('path' => drupal_get_path('theme', 'roomify_bootstrap') . '/images/sort-asc.png', 'width' => 15, 'height' => 15, 'alt' => t('sort descending'), 'title' => t('sort descending')));
  }
}

/**
 * Implements template_preprocess_mimemail_message.
 */
function roomify_bootstrap_wide_preprocess_mimemail_message(&$variables) {
  $theme = variable_get('theme_default', 'roomify_bootstrap_wide');

  // Default Colors
  $header_bg = '#ECECEC';
  $footer_bg = '#ECECEC';
  $header_color = '#000000';
  $footer_color = '#000000';

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
 * Implements theme_facetapi_title().
 */
function roomify_bootstrap_wide_facetapi_title($variables) {
  global $language;

  if ($variables['facet']['#facet']['name'] == 'property_bat_type_reference:field_st_amenities') {
    $vocabulary = taxonomy_vocabulary_machine_name_load('amenities');
    $name = i18n_taxonomy_vocabulary_name($vocabulary, $language->language);

    $variables['title'] = '<span class="glyphicon glyphicon-check"></span>' . $name;
  }
  elseif ($variables['facet']['#facet']['name'] == 'field_sp_area') {
    $vocabulary = taxonomy_vocabulary_machine_name_load('location');
    $name = i18n_taxonomy_vocabulary_name($vocabulary, $language->language);

    $variables['title'] = '<span class="glyphicon glyphicon-check"></span>' . $name;
  }
  elseif ($variables['facet']['#facet']['name'] == 'field_sp_area_type') {
    $vocabulary = taxonomy_vocabulary_machine_name_load('area_type');
    $name = i18n_taxonomy_vocabulary_name($vocabulary, $language->language);

    $variables['title'] = $name;
  }

  return $variables['title'];
}
