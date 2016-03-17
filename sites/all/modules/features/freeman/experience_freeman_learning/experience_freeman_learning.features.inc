<?php
/**
 * @file
 * experience_freeman_learning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function experience_freeman_learning_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function experience_freeman_learning_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function experience_freeman_learning_node_info() {
  $items = array(
    'experience_freeman_learning' => array(
      'name' => t('Experience Freeman Learning'),
      'base' => 'node_content',
      'description' => t('Description about Experience Freeman Learning'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
