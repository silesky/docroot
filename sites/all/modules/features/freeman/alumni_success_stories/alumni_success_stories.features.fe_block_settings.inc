<?php
/**
 * @file
 * alumni_success_stories.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function alumni_success_stories_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-alumni_success_stories-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'alumni_success_stories-block_1',
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
        'region' => 'home_middle_second',
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
