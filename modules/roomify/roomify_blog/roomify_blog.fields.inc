<?php

/**
 * @file
 */

/**
 * Create Roomify Blog fields.
 */
function roomify_blog_create_fields() {
  $field_bases = array();

  if (field_read_field('body') === FALSE) {
    $field_bases['body'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_with_summary',
    );
  }

  if (field_read_field('field_blog_area') === FALSE) {
    $field_bases['field_blog_area'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_blog_area',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'location',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_blog_categories') === FALSE) {
    $field_bases['field_blog_categories'] = array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_blog_categories',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'category',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    );
  }

  if (field_read_field('field_blog_sticky_at_top') === FALSE) {
    $field_bases['field_blog_sticky_at_top'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_blog_sticky_at_top',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    );
  }

  if (field_read_field('field_featured_blogpost') === FALSE) {
    $field_bases['field_featured_blogpost'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_featured_blogpost',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    );
  }

  if (field_read_field('field_featured_image') === FALSE) {
    $field_bases['field_featured_image'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_featured_image',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => 0,
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'profile2_private' => FALSE,
        'uri_scheme' => 'public',
      ),
      'translatable' => 0,
      'type' => 'image',
    );
  }

  if (field_read_field('field_tags') === FALSE) {
    $field_bases['field_tags'] = array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_tags',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('node', 'body', 'blog') === FALSE) {
    $field_instances['node-blog-body'] = array(
      'bundle' => 'blog',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
            'trim_length' => 250,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 1,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 1,
      ),
    );
  }

  if (field_read_instance('node', 'field_blog_area', 'blog') === FALSE) {
    $field_instances['node-blog-field_blog_area'] = array(
      'bundle' => 'blog',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'You may add new Areas, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/location" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => 6,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_blog_area',
      'label' => 'Area',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 10,
      ),
    );
  }

  if (field_read_instance('node', 'field_blog_categories', 'blog') === FALSE) {
    $field_instances['node-blog-field_blog_categories'] = array(
      'bundle' => 'blog',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'You may add new Categories, check out the Manage Taxonomies link on the dashboard or follow <a href="/admin/structure/taxonomy/category" target="_blank">this link</a>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => 7,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_blog_categories',
      'label' => 'Categories',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 14,
      ),
    );
  }

  if (field_read_instance('node', 'field_blog_sticky_at_top', 'blog') === FALSE) {
    $field_instances['node-blog-field_blog_sticky_at_top'] = array(
      'bundle' => 'blog',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_blog_sticky_at_top',
      'label' => 'Sticky at top of lists',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 12,
      ),
    );
  }

  if (field_read_instance('node', 'field_featured_blogpost', 'blog') === FALSE) {
    $field_instances['node-blog-field_featured_blogpost'] = array(
      'bundle' => 'blog',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'Check this post as featured blogpost.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'list_default',
          'weight' => 5,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featured_blogpost',
      'label' => 'Featured Blogpost',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 13,
      ),
    );
  }

  if (field_read_instance('node', 'field_featured_image', 'blog') === FALSE) {
    $field_instances['node-blog-field_featured_image'] = array(
      'bundle' => 'blog',
      'deleted' => 0,
      'description' => '960x540 is the best size to use on blogpost images. Otherwise you should maintain an Aspect Ratio of 2.13.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => 'content',
            'image_style' => 'blog_post_image',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featured_image',
      'label' => 'Featured Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'field_featured_image',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '2800x2800',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'manualcrop_crop_info' => 1,
          'manualcrop_default_crop_area' => 1,
          'manualcrop_enable' => 1,
          'manualcrop_inline_crop' => 0,
          'manualcrop_instant_crop' => 1,
          'manualcrop_instant_preview' => 1,
          'manualcrop_keyboard' => 1,
          'manualcrop_maximize_default_crop_area' => 1,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(
            'roomify_blog_image' => 'roomify_blog_image',
            'roomify_top_blogpost' => 'roomify_top_blogpost',
            'homepage_features' => 'homepage_features',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 1,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 3,
      ),
    );
  }

  if (field_read_instance('node', 'field_tags', 'blog') === FALSE) {
    $field_instances['node-blog-field_tags'] = array(
      'bundle' => 'blog',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter free tags to categorize this post.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tags',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'autocomplete_deluxe',
        'settings' => array(
          'apply_chosen' => '',
          'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
          'delimiter' => '',
          'limit' => 10,
          'min_length' => 0,
          'not_found_message' => 'The tag \'@term\' will be added.',
          'size' => 60,
        ),
        'type' => 'autocomplete_deluxe_taxonomy',
        'weight' => 11,
      ),
    );
  }

  if (field_read_instance('node', 'title_field', 'blog') === FALSE) {
    $field_instances['node-blog-title_field'] = array(
      'bundle' => 'blog',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
        'landing_page_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'title_field',
      'label' => 'Title',
      'required' => TRUE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'hide_label' => array(
          'entity' => FALSE,
          'page' => FALSE,
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => -5,
      ),
    );
  }

  // Translatables.
  t('960x540 is the best size to use on blogpost images. Otherwise you should maintain an Aspect Ratio of 2.13.');
  t('Area');
  t('Body');
  t('Categories');
  t('Enter free tags to categorize this post.');
  t('Featured Blogpost');
  t('Featured Image');
  t('Sticky at top of lists');
  t('Tags');
  t('The last blogpost with this checked will be placed as top blogpost on /blog page.');
  t('Title');

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  $field_groups = array();

  if (field_group_load_field_group('group_blog_body', 'node', 'blog', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_blog_body|node|blog|form';
    $field_group->group_name = 'group_blog_body';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'blog';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Blog Body';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'body',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Blog Body',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-blog-body field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_blog_body|node|blog|form'] = $field_group;
  }

  if (field_group_load_field_group('group_blog_image', 'node', 'blog', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_blog_image|node|blog|form';
    $field_group->group_name = 'group_blog_image';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'blog';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Blog Image';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_featured_image',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Blog Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-blog-image field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_blog_image|node|blog|form'] = $field_group;
  }

  if (field_group_load_field_group('group_categories', 'node', 'blog', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE;
    $field_group->api_version = 1;
    $field_group->identifier = 'group_categories|node|blog|form';
    $field_group->group_name = 'group_categories';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'blog';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Categories and Placement';
    $field_group->weight = '4';
    $field_group->children = array(
      0 => 'field_blog_area',
      1 => 'field_blog_sticky_at_top',
      2 => 'field_featured_blogpost',
      3 => 'field_tags',
      4 => 'field_blog_categories',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'label' => 'Categories and Placement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-categories field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    );
    $field_groups['group_categories|node|blog|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }

  // Translatables.
  t('Body');
  t('Categories and Placement');
  t('Image');
}
