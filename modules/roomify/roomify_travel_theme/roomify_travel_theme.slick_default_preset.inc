<?php

/**
 * @file
 */

/**
 * Implements hook_slick_default_presets().
 */
function roomify_travel_theme_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'property_slideshow';
  $preset->label = 'Property Slideshow';
  $preset->breakpoints = 0;
  $preset->skin = 'classic';
  $preset->options = array(
    'optimized' => 1,
    'general' => array(
      'normal' => 'roomify_1200x720',
      'thumbnail' => '',
      'template_class' => 'slick--for',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'asNavFor' => '',
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button">Next</button>',
      'focusOnSelect' => FALSE,
      'initialSlide' => 0,
      'lazyLoad' => '',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
      'useTransform' => FALSE,
    ),
  );
  $export['property_slideshow'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'property_slideshow_nav';
  $preset->label = 'Property Slideshow Nav';
  $preset->breakpoints = 0;
  $preset->skin = 'classic';
  $preset->options = array(
    'optimized' => 1,
    'general' => array(
      'normal' => 'medium',
      'thumbnail' => 'medium',
      'template_class' => 'slick--nav',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'asNavFor' => '',
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button">Next</button>',
      'focusOnSelect' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'progressive',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 4,
      'useTransform' => FALSE,
    ),
  );

  $export['property_slideshow_nav'] = $preset;

  return $export;
}
