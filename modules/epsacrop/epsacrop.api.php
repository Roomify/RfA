<?php
/**
 * @file
 * Hooks provided by the epsacrop.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * This hook is invoked from epsacrop_crop_image() before the image will be updated.
 *
 * @param object $image
 *   Image object.
 *
 * @param array $settings
 *   Image settings.
 *
 * @param array $coords
 *   Image coords.
 *
 * @param string $style_name
 *   Styles name.
 */
function hook_epsacrop_crop_image_presave($image, $settings, $coords, $style_name) {
}

/**
 * This hook is invoked from epsacrop_crop_image() when the image was updated.
 *
 * @param object $image
 *   Image object.
 *
 * @param array $settings
 *   Image settings.
 *
 * @param array $coords
 *   Image coords.
 *
 * @param string $style_name
 *   Styles name.
 */
function hook_epsacrop_crop_image_postsave($image, $settings, $coords, $style_name) {
}

/**
 * @} End of "addtogroup hooks".
 */
