<?php

/**
 * @file
 */

$plugin = array(
  'category' => t('Roomify Dashboard'),
  'title' => t('Welocme Message'),
  'render callback' => 'roomify_dashboard_welcome_message_render',
);

/**
 *
 */
function roomify_dashboard_welcome_message_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  global $user;

  $message = '<div class="welcome-dashboard-message">' . t('Hi @user, welcome to your dashboard', array('@user' => $user->name)) . '</div>';
  $content = '';

  // Guest Profile Set.
  if ($profile = profile2_load_by_user($user, 'guest')) {

    $image = field_get_items('profile2', $profile, 'guest_image');
    $picture = array(
      'style_name' => 'square',
      'path' => $image[0]['uri'],
    );

    if (!empty($picture['path'])) {
      $content = '<div class="roomify-welcome-image">' . theme('image_style', $picture) . '</div>';
      $content .= $message;
    }
  }

  // Property Owner profile Set, overrides the guest one.
  if ($profile = profile2_load_by_user($user, 'property_owner')) {

    $image = field_get_items('profile2', $profile, 'property_owner_image');
    $picture = array(
      'style_name' => 'square',
      'path' => $image[0]['uri'],
    );

    if (!empty($picture['path'])) {
      $content = '<div class="roomify-welcome-image">' . theme('image_style', $picture) . '</div>';
      $content .= $message;
    }
  }

  // No Profiles.
  if (empty($content)) {
    $content = $message;
  }

  $block = new stdClass();
  $block->content = $content;

  return $block;
}
