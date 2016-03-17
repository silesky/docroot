<?php
/**
 * @file
 * tulane_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function tulane_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 175x175.
  $styles['175x175'] = array(
    'label' => '175x175',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
    'name' => '175x175',
  );

  return $styles;
}
