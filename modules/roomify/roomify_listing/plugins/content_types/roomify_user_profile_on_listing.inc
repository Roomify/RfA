<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t('Roomify Property Owner Profile'),
  'description' => t("Add property owner's informations."),
  'render callback' => 'roomify_property_owner_profile_render',
  'required context' => new ctools_context_required(t('Roomify Property'), 'roomify_property'),
);

/**
 * Render callback.
 */
function roomify_property_owner_profile_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $property = $pane_context->data;
  $property_title = $property->name;
  $user_image = '';
  $user_info = '';

  // Check for a description to user.
  if ($description = field_get_items('roomify_property', $property, 'field_sp_description')) {
    $user_info = text_summary($description[0]['value'], $description[0]['format'], '160') . '</ br> ' . '<a id="see-more-property-description" href="#tabs-0-property-description-1">' . t('see more') . '</a>';
  }

  // The default image is the featured one. A user image will override this.
  if ($property_image = field_get_items('roomify_property', $property, 'field_sp_featured_image')) {
    $user_image = theme('image_style', array('style_name' => 'square', 'path' => $property_image[0]['uri']));
  }

  $user_name = $property_title;

  if ($owner_id = field_get_items('roomify_property', $property, 'field_sp_owner')) {
    $account = user_load($owner_id[0]['target_id']);

    if ($profile = profile2_load_by_user($account, 'property_owner')) {
      if ($image = field_get_items('profile2', $profile, 'property_owner_image')) {
        $user_image = theme('image_style', array('style_name' => 'square', 'path' => $image[0]['uri']));
      }
      if ($name = field_get_items('profile2', $profile, 'property_owner_name')) {
        $user_name = $name[0]['value'];
      }
      if ($info = field_get_items('profile2', $profile, 'property_owner_short_info')) {
        $user_info = $info[0]['value'];
      }
    }
  }

  $content = '<div class="listing-contact-block-top"><div class="user-image">' . $user_image . '</div>
              <div class="user-contact"><h2 class="user-property-owner-name">' . $user_name . '</h2>
              <div class="user-info">' . $user_info . '</div></div></div>';

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
