<?php

/**
 * @file
 * roomify_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function roomify_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: blog_post_image.
  $styles['blog_post_image'] = array(
    'label' => 'Blog post image',
    'effects' => array(
      29 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 960,
          'height' => 450,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'blog_post_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: highlight.
  $styles['highlight'] = array(
    'label' => 'Highlight',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 430,
          'height' => 250,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'highlight',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_features.
  $styles['homepage_features'] = array(
    'label' => 'Homepage features',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 380,
          'height' => 292,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'homepage_features',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: property_slider.
  $styles['property_slider'] = array(
    'label' => 'Property slider',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 550,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'property_slider',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: roomify_350x470.
  $styles['roomify_350x470'] = array(
    'label' => 'Roomify 350x470',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 360,
          'height' => 470,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_350x470',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: roomify_4_3.
  $styles['roomify_4_3'] = array(
    'label' => 'Roomify 4:3',
    'effects' => array(
      36 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 540,
          'height' => 400,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_4_3',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: roomify_thumbnail_rectangled.
  $styles['roomify_thumbnail_rectangled'] = array(
    'label' => 'Roomify Thumbnail (rectangled)',
    'effects' => array(
      35 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 211,
          'height' => 121,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: roomify_thumbnail_squared.
  $styles['roomify_thumbnail_squared'] = array(
    'label' => 'Roomify Thumbnail (squared)',
    'effects' => array(
      38 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_thumbnail_squared',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: roomify_wide_normal.
  $styles['roomify_wide_normal'] = array(
    'label' => 'Roomify Slideshow Widescreen',
    'effects' => array(
      44 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 960,
          'height' => 540,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_wide_normal',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: roomify_wide_normal.
  $styles['slideshow_thumbnail'] = array(
    'label' => 'Slideshow Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
