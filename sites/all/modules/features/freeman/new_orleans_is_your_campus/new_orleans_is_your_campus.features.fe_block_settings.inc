<?php
/**
 * @file
 * new_orleans_is_your_campus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function new_orleans_is_your_campus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-19589f303e8a9f21a4f1f9f550145d0a'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '19589f303e8a9f21a4f1f9f550145d0a',
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
        'region' => 'home_middle',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
