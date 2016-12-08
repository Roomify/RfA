<?php

/**
 * @file
 */
?>

<?php
  if (isset($variables['view']->current_display) && ($variables['view']->current_display == 'panel_pane_1' || $variables['view']->current_display == 'panel_pane_2')) {
    $row = $variables['row'];

    $output = $variables['output'];

    $field_name = 'field_' . $variables['field']->field_info['field_name'];
    $alt = (isset($row->{$field_name}[0]['raw']['alt'])) ? $row->{$field_name}[0]['raw']['alt'] : '';
    $title = (isset($row->{$field_name}[0]['raw']['title'])) ? $row->{$field_name}[0]['raw']['title'] : '';

    if ($alt != '' && $title != '') {
      $output .= '<div class="slideshow-info"><div class="slideshow-info-text"><div class="slideshow-info-title">' . $title . '</div><div class="slideshow-info-description">' . $alt . '</div></div></div>';
    }
    elseif ($alt != '') {
      $output .= '<div class="slideshow-info"><div class="slideshow-info-text"><div class="slideshow-info-description">' . $alt . '</div></div></div>';
    }
    elseif ($title != '') {
      $output .= '<div class="slideshow-info"><div class="slideshow-info-text"><div class="slideshow-info-title">' . $title . '</div></div></div>';
    }
    print $output;
  }
  else {
    print $variables['output'];
  }

?>
