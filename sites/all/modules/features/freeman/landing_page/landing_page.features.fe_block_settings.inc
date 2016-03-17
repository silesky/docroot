<?php
/**
 * @file
 * landing_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landing_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-02a85a606cea0b5a69681486b45f91b5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '02a85a606cea0b5a69681486b45f91b5',
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
        'region' => 'landing_page_top',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0f9bdf9a4cff45158bf512aad2e4fda1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0f9bdf9a4cff45158bf512aad2e4fda1',
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
        'region' => 'landing_page_middle_left',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-1f426c719029619bc4f095b7f91df11b'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '1f426c719029619bc4f095b7f91df11b',
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
        'region' => 'landing_page_middle_right',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-582ba7e17605a8070e71feca08d3207e'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '582ba7e17605a8070e71feca08d3207e',
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
        'region' => 'landing_page_top_right',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-845aadff70cc2219ebaa297ecca7b674'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '845aadff70cc2219ebaa297ecca7b674',
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
        'region' => 'landing_page_bottom_right',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-e8ddd5eb6ecc7b6ea634f1e8b16fed97'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'e8ddd5eb6ecc7b6ea634f1e8b16fed97',
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
        'region' => 'landing_page_bottom_left',
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
