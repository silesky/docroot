<?php
/**
 * @file
 * image_slider.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function image_slider_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-front_image_slider_view-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'front_image_slider_view-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'tulane' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
