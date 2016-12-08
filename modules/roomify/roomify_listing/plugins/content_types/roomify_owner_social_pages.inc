<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Roomify'),
  'title' => t("Roomify owner's social pages"),
  'description' => t("Add property owner's social pages."),
  'render callback' => 'roomify_property_owner_social_pages_render',
  'required context' => new ctools_context_required(t('Roomify Property'), 'roomify_property'),
);

/**
 * Render callback.
 */
function roomify_property_owner_social_pages_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $property = $pane_context->data;

  $content = '<div class="property-owner-social-pages">';

  $social_pages = array();

  if ($owner_id = field_get_items('roomify_property', $property, 'field_sp_owner')) {
    $account = user_load($owner_id[0]['target_id']);

    $all_buttons = rsp_settings(TRUE);

    if ($profile = profile2_load_by_user($account, 'property_owner')) {
      $social_pages = array();
      if ($facebook = field_get_items('profile2', $profile, 'property_owner_facebook_page')) {
        $social_pages['facebook'] = $all_buttons['facebook'];
        $social_pages['facebook']['link'] = $facebook[0]['url'];
      }
      if ($twitter = field_get_items('profile2', $profile, 'property_owner_twitter_page')) {
        $social_pages['twitter'] = $all_buttons['twitter'];
        $social_pages['twitter']['link'] = $twitter[0]['url'];
      }
      if ($pinterest = field_get_items('profile2', $profile, 'property_owner_pinterest_page')) {
        $social_pages['pinterest'] = $all_buttons['pinterest'];
        $social_pages['pinterest']['link'] = $pinterest[0]['url'];
      }
      if ($google = field_get_items('profile2', $profile, 'property_owner_google_page')) {
        $social_pages['googleplus'] = $all_buttons['googleplus'];
        $social_pages['googleplus']['link'] = $google[0]['url'];
      }
      if ($instagram = field_get_items('profile2', $profile, 'property_owner_instagram_page')) {
        $social_pages['instagram'] = $all_buttons['instagram'];
        $social_pages['instagram']['link'] = $instagram[0]['url'];
      }
      if ($youtube = field_get_items('profile2', $profile, 'property_owner_youtube_page')) {
        $social_pages['youtube'] = $all_buttons['youtube'];
        $social_pages['youtube']['link'] = $youtube[0]['url'];
      }
    }

    if (!empty($social_pages)) {
      foreach ($social_pages as $key => $button) {

        $link = $button['link'];
        $content .= '<li class="rsp-social-icon rsp-' . $key . '"><a href="' . $link . '"><span class="rsp-icon">' . $button['svg'] . ' </span></a></li>';
      }
    }
  }

  $content .= '</div>';

  // Use location address if we don't have any social page to show.
  if (empty($social_pages)) {
    if ($location = field_get_items('roomify_property', $property, 'field_sp_address')) {
      $content = $location[0]['value'];
    }
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
