<?php
/**
 * @file
 * image_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function image_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function image_slider_node_info() {
  $items = array(
    'image_slider' => array(
      'name' => t('Image Slider'),
      'base' => 'node_content',
      'description' => t('Display image on home page slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
