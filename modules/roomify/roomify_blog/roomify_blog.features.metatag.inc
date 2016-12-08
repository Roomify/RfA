<?php

/**
 * @file
 * roomify_blog.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function roomify_blog_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:blog.
  $config['node:blog'] = array(
    'instance' => 'node:blog',
    'disabled' => FALSE,
    'config' => array(
      'og:image' => array(
        'value' => '[node:field-featured-image:file:url]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field-featured-image:file:url]',
      ),
    ),
  );

  return $config;
}
