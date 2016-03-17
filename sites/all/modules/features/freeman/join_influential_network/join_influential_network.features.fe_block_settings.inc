<?php
/**
 * @file
 * join_influential_network.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function join_influential_network_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-0c51f286dab75666185eceb4b7df57b2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0c51f286dab75666185eceb4b7df57b2',
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
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-379015d184b6c91a74b11fb0b651d4a9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '379015d184b6c91a74b11fb0b651d4a9',
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
