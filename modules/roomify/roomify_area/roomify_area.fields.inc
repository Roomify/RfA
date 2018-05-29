<?php

/**
 * @file
 */

/**
 * Create Taxonomy Area fields.
 */
function roomify_area_taxonomy_fields() {
  $field_bases = array();

  if (field_read_field('field_area_slideshow') === FALSE) {
    $field_bases['field_area_slideshow'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_slideshow',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'paragraphs',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'paragraphs',
    );
  }

  if (field_read_field('description_field') === FALSE) {
    $field_bases['description_field'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'description_field',
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

  if (field_read_field('field_area_description_blog_post') === FALSE) {
    $field_bases['field_area_description_blog_post'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_description_blog_post',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_area_description_subtitle') === FALSE) {
    $field_bases['field_area_description_subtitle'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_description_subtitle',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_area_title_blog_posts') === FALSE) {
    $field_bases['field_area_title_blog_posts'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_title_blog_posts',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 100,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_area_title_description') === FALSE) {
    $field_bases['field_area_title_description'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_title_description',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 100,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_desc_featured_properities') === FALSE) {
    $field_bases['field_desc_featured_properities'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_desc_featured_properities',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_title_featured_properties') === FALSE) {
    $field_bases['field_title_featured_properties'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_title_featured_properties',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 100,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text',
    );
  }

  if (field_read_field('field_field_link_to_area_blog') === FALSE) {
    $field_bases['field_field_link_to_area_blog'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_field_link_to_area_blog',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'text',
    );
  }

  if (field_read_field('field_area_featured_image') === FALSE) {
    $field_bases['field_area_featured_image'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_featured_image',
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

  if (field_read_field('field_area_short_description') === FALSE) {
    $field_bases['field_area_short_description'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_short_description',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
      ),
      'translatable' => 1,
      'type' => 'text_long',
    );
  }

  if (field_read_field('field_area_location') === FALSE) {
    $field_bases['field_area_location'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_area_location',
      'indexes' => array(
        'bbox' => array(
          0 => 'top',
          1 => 'bottom',
          2 => 'left',
          3 => 'right',
        ),
        'bottom' => array(
          0 => 'bottom',
        ),
        'centroid' => array(
          0 => 'lat',
          1 => 'lon',
        ),
        'geohash' => array(
          0 => 'geohash',
        ),
        'lat' => array(
          0 => 'lat',
        ),
        'left' => array(
          0 => 'left',
        ),
        'lon' => array(
          0 => 'lon',
        ),
        'right' => array(
          0 => 'right',
        ),
        'top' => array(
          0 => 'top',
        ),
      ),
      'locked' => 0,
      'module' => 'geofield',
      'settings' => array(
        'backend' => 'default',
        'entity_translation_sync' => FALSE,
        'profile2_private' => FALSE,
        'srid' => 4326,
      ),
      'translatable' => 0,
      'type' => 'geofield',
    );
  }

  foreach ($field_bases as $field) {
    field_create_field($field);
  }

  $field_instances = array();

  if (field_read_instance('taxonomy_term', 'field_area_slideshow', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_slideshow'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'paragraphs',
          'settings' => array(
            'conditions' => array(),
            'view_mode' => 'full',
          ),
          'type' => 'paragraphs_view',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_slideshow',
      'label' => 'Slideshow',
      'required' => 0,
      'settings' => array(
        'add_mode' => 'select',
        'allowed_bundles' => array(
          '1_column_row' => -1,
          '2_columns_row' => -1,
          '3_columns_row' => -1,
          '4_columns_row' => -1,
          'activity' => -1,
          'block' => -1,
          'blogpost' => -1,
          'image' => -1,
          'image_and_text' => -1,
          'linked_image' => -1,
          'linked_image_and_text' => -1,
          'location_map' => -1,
          'property' => -1,
          'slideshow' => 'slideshow',
          'text' => -1,
        ),
        'bundle_weights' => array(
          '1_column_row' => 2,
          '2_columns_row' => 3,
          '3_columns_row' => 4,
          '4_columns_row' => 5,
          'activity' => 6,
          'block' => 7,
          'blogpost' => 8,
          'image' => 9,
          'image_and_text' => 10,
          'linked_image' => 11,
          'linked_image_and_text' => 12,
          'location_map' => 13,
          'property' => 14,
          'slideshow' => 15,
          'text' => 16,
        ),
        'default_edit_mode' => 'open',
        'entity_translation_sync' => FALSE,
        'title' => 'Paragraph',
        'title_multiple' => 'Paragraphs',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'paragraphs',
        'settings' => array(),
        'type' => 'paragraphs_embed',
        'weight' => 2,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'description_field', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-description_field'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'description_field',
      'label' => 'Description',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => 0,
        'entity_translation_sync' => FALSE,
        'hide_label' => array(
          'entity' => FALSE,
          'page' => FALSE,
        ),
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
        'weight' => -5,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_area_description_blog_post', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_description_blog_post'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_description_blog_post',
      'label' => 'Description Blog Post',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 8,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_area_description_subtitle', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_description_subtitle'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_description_subtitle',
      'label' => 'Subtitle',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 9,
      ),
    );

  }

  if (field_read_instance('taxonomy_term', 'field_area_title_blog_posts', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_title_blog_posts'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_title_blog_posts',
      'label' => 'Title Blog Post',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 7,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_area_title_description', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_title_description'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_title_description',
      'label' => 'Title Description',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 8,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_desc_featured_properities', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_desc_featured_properities'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_desc_featured_properities',
      'label' => 'Description Featured Properties',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 8,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_title_featured_properties', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_title_featured_properties'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_title_featured_properties',
      'label' => 'Title Featured Properties',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 7,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_field_link_to_area_blog', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_field_link_to_area_blog'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_field_link_to_area_blog',
      'label' => 'Link to Area Blog',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 10,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_area_featured_image', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_featured_image'] = array(
      'bundle' => 'location',
      'deleted' => 0,
      'description' => 'This is a general featured image. This won\'t be shown on the area page but it is used to show a link to the area page itself in other pages, such as the homepage.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'conditions' => array(),
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_featured_image',
      'label' => 'Featured Image',
      'required' => 1,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
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
            'homepage_features' => 'homepage_features',
          ),
          'manualcrop_styles_mode' => 'include',
          'manualcrop_thumblist' => 1,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => 2,
      ),
    );

  }

  if (field_read_instance('taxonomy_term', 'field_area_short_description', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_short_description'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'This is a general short description of the area. This won\'t be shown on the area page but it is used as description of some link to the area page itself in other pages, such as the homepage.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(
            'conditions' => array(),
          ),
          'type' => 'text_default',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_short_description',
      'label' => 'Short Description',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'filtered_html' => 'filtered_html',
            'filtered_text' => 'filtered_text',
            'full_html' => 'full_html',
            'landing_page_text' => 'landing_page_text',
            'plain_text' => 'plain_text',
            'rich_text' => 'rich_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'filtered_html' => array(
                'weight' => 0,
              ),
              'filtered_text' => array(
                'weight' => -10,
              ),
              'full_html' => array(
                'weight' => 1,
              ),
              'landing_page_text' => array(
                'weight' => 0,
              ),
              'plain_text' => array(
                'weight' => 10,
              ),
              'rich_text' => array(
                'weight' => -9,
              ),
            ),
          ),
        ),
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 3,
        ),
        'type' => 'text_textarea',
        'weight' => 3,
      ),
    );
  }

  if (field_read_instance('taxonomy_term', 'field_area_location', 'location') === FALSE) {
    $field_instances['taxonomy_term-location-field_area_location'] = array(
      'bundle' => 'location',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Enter the name of the area to localize that in a map.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'conditions' => array(),
            'data' => 'full',
          ),
          'type' => 'geofield_wkt',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_area_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield_gmap',
        'settings' => array(
          'click_to_place_marker' => FALSE,
          'confirm_center_marker' => FALSE,
          'map_type' => 'ROADMAP',
          'marker_draggable' => 0,
          'scrollwheel' => 0,
          'zoom_after_address_change' => TRUE,
        ),
        'type' => 'geofield_gmap',
        'weight' => 3,
      ),
    );
  }

  foreach ($field_instances as $instance) {
    field_create_instance($instance);
  }

  $field_groups = array();

  if (field_group_load_field_group('group_area_description', 'taxonomy_term', 'location', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_area_description|taxonomy_term|location|form';
    $field_group->group_name = 'group_area_description';
    $field_group->entity_type = 'taxonomy_term';
    $field_group->bundle = 'location';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Description';
    $field_group->weight = '1';
    $field_group->children = array(
      0 => 'field_area_title_description',
      1 => 'field_area_description_subtitle',
      2 => 'description_field',
      3 => 'field_area_location',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-area-description field-group-tab',
        'required_fields' => 1,
      ),
    );
    $field_groups['group_area_description|taxonomy_term|location|form'] = $field_group;

  }

  if (field_group_load_field_group('group_area_slideshow', 'taxonomy_term', 'location', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_area_slideshow|taxonomy_term|location|form';
    $field_group->group_name = 'group_area_slideshow';
    $field_group->entity_type = 'taxonomy_term';
    $field_group->bundle = 'location';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Slideshow';
    $field_group->weight = '2';
    $field_group->children = array(
      0 => 'field_area_slideshow',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-area-slideshow field-group-tab',
        'required_fields' => 1,
      ),
    );

    $field_groups['group_area_slideshow|taxonomy_term|location|form'] = $field_group;
  }

  if (field_group_load_field_group('group_area', 'taxonomy_term', 'location', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_area|taxonomy_term|location|form';
    $field_group->group_name = 'group_area';
    $field_group->entity_type = 'taxonomy_term';
    $field_group->bundle = 'location';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->label = 'Blog Posts';
    $field_group->weight = '4';
    $field_group->children = array(
      0 => 'field_area_title_blog_posts',
      1 => 'field_area_description_blog_post',
      2 => 'field_field_link_to_area_blog',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    );

    $field_groups['group_area|taxonomy_term|location|form'] = $field_group;
  }

  if (field_group_load_field_group('group_featured_properties', 'taxonomy_term', 'location', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_featured_properties|taxonomy_term|location|form';
    $field_group->group_name = 'group_featured_properties';
    $field_group->entity_type = 'taxonomy_term';
    $field_group->bundle = 'location';
    $field_group->mode = 'form';
    $field_group->parent_name = '';

    $field_group->label = 'Featured Properties';
    $field_group->weight = '3';
    $field_group->children = array(
      0 => 'field_title_featured_properties',
      1 => 'field_desc_featured_properities',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-properties field-group-tab',
        'required_fields' => 1,
      ),
    );

    $field_groups['group_featured_properties|taxonomy_term|location|form'] = $field_group;
  }

  if (field_group_load_field_group('group_area_general_info', 'taxonomy_term', 'location', 'form') === NULL) {
    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_area_general_info|taxonomy_term|location|form';
    $field_group->group_name = 'group_area_general_info';
    $field_group->entity_type = 'taxonomy_term';
    $field_group->bundle = 'location';
    $field_group->mode = 'form';
    $field_group->parent_name = '';

    $field_group->label = 'General Info';
    $field_group->weight = '-1';
    $field_group->children = array(
      0 => 'field_area_featured_image',
      1 => 'field_area_short_description',
    );
    $field_group->format_type = 'tab';
    $field_group->format_settings = array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-area-general-info field-group-tab',
        'required_fields' => 1,
      ),
    );

    $field_groups['group_area_general_info|taxonomy_term|location|form'] = $field_group;
  }

  foreach ($field_groups as $group) {
    field_group_group_save($group);
  }
}
