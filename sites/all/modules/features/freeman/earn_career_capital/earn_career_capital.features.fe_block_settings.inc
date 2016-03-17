<?php
/**
 * @file
 * earn_career_capital.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function earn_career_capital_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-ea78af8180ab19710a22d2b22c2514e7'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'ea78af8180ab19710a22d2b22c2514e7',
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

  $export['views-earn_career_capital-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'earn_career_capital-block_1',
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
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
