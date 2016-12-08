<?php

/**
 * @file
 * roomify_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_blog_ctools_plugin_api($module = NULL, $api = NULL) {
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
function roomify_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function roomify_blog_image_default_styles() {
  $styles = array();

  // Exported image style: roomify_blog_image.
  $styles['roomify_blog_image'] = array(
    'label' => 'Roomify Blog Image',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 960,
          'height' => 540,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_blog_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: roomify_top_blogpost.
  $styles['roomify_top_blogpost'] = array(
    'label' => 'Roomify Top Blogpost',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 550,
          'upscale' => 1,
          'respectminimum' => 0,
          'onlyscaleifcrop' => 0,
          'style_name' => 'roomify_top_blogpost',
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
function roomify_blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('Add a new post to your Blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
