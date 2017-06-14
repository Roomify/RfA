<?php

/**
 * @file
 * roomify_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function roomify_landing_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function roomify_landing_page_image_default_styles() {
  $styles = array();

  // Exported image style: original_image.
  $styles['original_image'] = array(
    'label' => 'Original image',
    'effects' => array(),
  );

  // Exported image style: roomify_1200x720.
  $styles['roomify_1200x720'] = array(
    'label' => 'Roomify 1200x720',
    'effects' => array(
      40 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 720,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_1200x720',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: roomify_slideshow_paragraph.
  $styles['roomify_slideshow_paragraph'] = array(
    'label' => 'Roomify Slideshow Paragraph',
    'effects' => array(
      42 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 550,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_slideshow_paragraph',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: square.
  $styles['square'] = array(
    'label' => 'Square',
    'effects' => array(
      46 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 350,
          'height' => 350,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'square',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function roomify_landing_page_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('This is a page builder that can be used for a custom homepage, featuring a location or a provider, or static pages, such as an About Us page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function roomify_landing_page_paragraphs_info() {
  $items = array(
    '1_column_row' => array(
      'name' => '1-Column Row',
      'bundle' => '1_column_row',
      'locked' => '1',
    ),
    '2_columns_row' => array(
      'name' => '2-Column Row',
      'bundle' => '2_columns_row',
      'locked' => '1',
    ),
    '3_columns_row' => array(
      'name' => '3-Column Row',
      'bundle' => '3_columns_row',
      'locked' => '1',
    ),
    '4_columns_row' => array(
      'name' => '4-Column Row',
      'bundle' => '4_columns_row',
      'locked' => '1',
    ),
    'activity' => array(
      'name' => 'Activity',
      'bundle' => 'activity',
      'locked' => '1',
    ),
    'area' => array(
      'name' => 'Area',
      'bundle' => 'area',
      'locked' => '1',
    ),
    'block' => array(
      'name' => 'Block',
      'bundle' => 'block',
      'locked' => '1',
    ),
    'blogpost' => array(
      'name' => 'Blogpost',
      'bundle' => 'blogpost',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'image_and_text' => array(
      'name' => 'Image and Text',
      'bundle' => 'image_and_text',
      'locked' => '1',
    ),
    'latest_blog_posts' => array(
      'name' => 'Latest blog posts',
      'bundle' => 'latest_blog_posts',
      'locked' => '1',
    ),
    'linked_image' => array(
      'name' => 'Linked Image',
      'bundle' => 'linked_image',
      'locked' => '1',
    ),
    'linked_image_and_text' => array(
      'name' => 'Linked Image with Text',
      'bundle' => 'linked_image_and_text',
      'locked' => '1',
    ),
    'location_map' => array(
      'name' => 'Location Map',
      'bundle' => 'location_map',
      'locked' => '1',
    ),
    'property' => array(
      'name' => 'Property',
      'bundle' => 'property',
      'locked' => '1',
    ),
    'slideshow' => array(
      'name' => 'Slideshow',
      'bundle' => 'slideshow',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Text',
      'bundle' => 'text',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
