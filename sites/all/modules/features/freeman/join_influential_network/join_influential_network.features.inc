<?php
/**
 * @file
 * join_influential_network.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function join_influential_network_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function join_influential_network_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function join_influential_network_node_info() {
  $items = array(
    'join_influential_network' => array(
      'name' => t('Join influential network'),
      'base' => 'node_content',
      'description' => t('Information related with Join influential network'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'join_influential_network_accordi' => array(
      'name' => t('Join influential network accordion'),
      'base' => 'node_content',
      'description' => t('Information related with Join influential network accordion'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
