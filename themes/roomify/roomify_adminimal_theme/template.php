<?php
/**
 * @file
 * The primary PHP file for this theme.
 */


/**
 * Implements theme_file_widget_multiple().
 *
 * Returns HTML for a group of file upload widgets.
 */
function roomify_adminimal_theme_file_widget_multiple($variables) {
  $element = $variables['element'];
  // Special ID and classes for draggable tables.
  $weight_class = $element['#id'] . '-weight';
  $table_id = $element['#id'] . '-table';

  // Build up a table of applicable fields.
  $headers = array();
  $headers[] = t('File information');
  if ($element['#display_field']) {
    $headers[] = array(
      'data' => t('Display'),
      'class' => array('checkbox'),
    );
  }
  $headers[] = t('Weight');
  $headers[] = t('Operations');

  // Get our list of widgets in order (needed when the form comes back after
  // preview or failed validation).
  $widgets = array();
  foreach (element_children($element) as $key) {
    $widgets[] = &$element[$key];
  }
  usort($widgets, '_field_sort_items_value_helper');

  $rows = array();
  foreach ($widgets as $key => &$widget) {
    // Save the uploading row for last.
    if ($widget['#file'] === FALSE) {
      $widget['#title'] = $element['#file_upload_title'];
      $widget['#description'] = $element['#file_upload_description'];
      continue;
    }

    // Delay rendering of the buttons, so that they can be rendered later in the
    // "operations" column.
    $operations_elements = array();
    foreach (element_children($widget) as $sub_key) {
      if ((isset($widget[$sub_key]['#type']) && ($widget[$sub_key]['#type'] == 'submit')) || (isset($widget[$sub_key]['#parents']) && (in_array('roomify_image_alt_title', $widget[$sub_key]['#parents'], TRUE)))) {        
        hide($widget[$sub_key]);
        $operations_elements[] = &$widget[$sub_key];
      }
    }

    // Delay rendering of the "Display" option and the weight selector, so that
    // each can be rendered later in its own column.
    if ($element['#display_field']) {
      hide($widget['display']);
    }
    hide($widget['_weight']);

    // Render everything else together in a column, without the normal wrappers.
    $widget['#theme_wrappers'] = array();
    $information = drupal_render($widget);

    // Render the previously hidden elements, using render() instead of
    // drupal_render(), to undo the earlier hide().
    $operations = '';
    foreach ($operations_elements as $operation_element) {
      $operations .= render($operation_element);
    }
    $display = '';
    if ($element['#display_field']) {
      unset($widget['display']['#title']);
      $display = array(
        'data' => render($widget['display']),
        'class' => array('checkbox'),
      );
    }
    $widget['_weight']['#attributes']['class'] = array($weight_class);
    $weight = render($widget['_weight']);

    // Arrange the row with all of the rendered columns.
    $row = array();
    $row[] = $information;
    if ($element['#display_field']) {
      $row[] = $display;
    }
    $row[] = $weight;
    $row[] = $operations;
    $rows[] = array(
      'data' => $row,
      'class' => isset($widget['#attributes']['class']) ? array_merge($widget['#attributes']['class'], array('draggable')) : array('draggable'),
    );
  }

  drupal_add_tabledrag($table_id, 'order', 'sibling', $weight_class);

  $output = '';
  $output = empty($rows) ? '' : theme('table', array('header' => $headers, 'rows' => $rows, 'attributes' => array('id' => $table_id)));
  $output .= drupal_render_children($element);
  return $output;
}

/**
 * Implements template_preprocess_field().
 */
function roomify_adminimal_theme_preprocess_field(&$variables, $hook) {
  if (isset($variables['element']['#field_name']) &&  $variables['element']['#field_name'] == 'commerce_order_total') {
    if (isset($variables['element']['#entity_type']) && $variables['element']['#entity_type'] == 'commerce_order') {
      $total = $variables['element']['#items'][0];
      $balance = commerce_payment_order_balance($variables['element']['#object']);

      $price_vars = array(
        'components' => array(
          'commerce-price-formatted-amount' => array(
            'title' => t('Order total'),
            'formatted_price' => commerce_currency_format($total['amount'], $total['currency_code']),
          ),
          'commerce-paid-formatted-amount' => array(
            'title' => t('Paid'),
            'formatted_price' => commerce_currency_format($total['amount'] - $balance['amount'], $total['currency_code']),
          ),
          'commerce-remainder-formatted-amount' => array(
            'title' => t('Remainder'),
            'formatted_price' => commerce_currency_format($balance['amount'], $balance['currency_code']),
          ),
        ),
      );

      $variables['items'][0]['#markup'] = theme('commerce_price_formatted_components', $price_vars);
    }
  }
}

/**
 * Returns HTML for a theme's color form.
 *
 * @param $variables
 *   An associative array containing:
 *   - form: A render element representing the form.
 *
 * @ingroup themeable
 */
function roomify_adminimal_theme_color_scheme_form($variables) {
  $form = $variables['form'];

  $theme = $form['theme']['#value'];
  $info = $form['info']['#value'];
  $path = drupal_get_path('theme', $theme) . '/';
  drupal_add_css($path . $info['preview_css']);

  $preview_js_path = isset($info['preview_js']) ? $path . $info['preview_js'] : drupal_get_path('module', 'color') . '/' . 'preview.js';
  // Add the JS at a weight below color.js.
  drupal_add_js($preview_js_path, array('weight' => -1));

  $output  = '';
  $output .= '<div class="color-form clearfix">';
  // Color schemes
  $output .= drupal_render($form['scheme']);
  // Palette
  $output .= '<div id="palette" class="clearfix">';
  foreach (element_children($form['palette']) as $name) {
    $output .= drupal_render($form['palette'][$name]);
  }
  $output .= '</div>';
  // Preview
  $output .= drupal_render_children($form);
  $output .= '<h2>' . t('Preview') . '</h2>';
  // Attempt to load preview HTML if the theme provides it.
  $preview_html_path = DRUPAL_ROOT . '/' . (isset($info['preview_html']) ? drupal_get_path('theme', $theme) . '/' . $info['preview_html'] : drupal_get_path('module', 'color') . '/preview.html');

  ob_start();
  eval(' ?>' . file_get_contents($preview_html_path) . '<?php ');
  $output .= ob_get_clean();

  // Close the wrapper div.
  $output .= '</div>';

  return $output;
}

/*
 * Implements template_preprocess_mimemail_message.
 */
function roomify_adminimal_theme_preprocess_mimemail_message(&$variables) {
  $theme = variable_get('theme_default', 'roomify_bootstrap');

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

/*
 * Render an image thumb after upload.
 */
function roomify_adminimal_theme_roomify_image_thumb_upload($variables) {
  $element = $variables['element'];
  if (isset($element['#file']->uri)) {
    $output = '<div id="edit-logo-ajax-wrapper"><div class="form-item form-type-managed-file form-item-logo"><span class="file">';
    $output .= '<img style="margin-right:15px;float:left" height="80px" src="' . file_create_url($element['#file']->uri) . '" />';
    $output .= '</span><input type="submit" id="edit-' . $element['#name'] . '-remove-button" name="' . $element['#name'] . '_remove_button" value="Remove" class="form-submit ajax-processed">';
    $output .= '<input type="hidden" name="' . $element['#name'] . '[fid]" value="' . $element['#file']->fid . '">';

    return $output;
  }
}
