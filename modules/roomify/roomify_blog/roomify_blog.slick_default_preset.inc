<?php

/**
 * @file
 * roomify_blog.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function roomify_blog_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'properties_carousel';
  $preset->label = 'Properties Carousel';
  $preset->breakpoints = 1;
  $preset->skin = 'default';
  $preset->options = array(
    'general' => array(
      'normal' => 'homepage_features',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous"></button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next"></button>',
      'centerMode' => FALSE,
      'centerPadding' => '50px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => FALSE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 3,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => TRUE,
      'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => '',
      'cssEaseOverride' => '',
      'useTransform' => FALSE,
      'easing' => 'linear',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => 992,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => FALSE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => FALSE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => TRUE,
            'centerMode' => FALSE,
            'centerPadding' => '50px',
            'dots' => FALSE,
            'draggable' => FALSE,
            'fade' => FALSE,
            'focusOnSelect' => FALSE,
            'infinite' => FALSE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 1,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => TRUE,
            'edgeFriction' => 0.34999999999999997779553950749686919152736663818359375,
            'touchMove' => FALSE,
            'touchThreshold' => 5,
            'useCSS' => FALSE,
            'cssEase' => 'ease',
            'cssEaseBezier' => '',
            'cssEaseOverride' => '',
            'useTransform' => FALSE,
            'easing' => 'linear',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['properties_carousel'] = $preset;

  return $export;
}
