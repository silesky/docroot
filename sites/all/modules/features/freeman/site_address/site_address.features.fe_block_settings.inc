<?php
/**
 * @file
 * site_address.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function site_address_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-site_address-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'site_address-block_1',
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
        'region' => 'footer_first_column',
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
