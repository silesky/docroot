<?php
/**
 * @file
 * alumni_success_stories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alumni_success_stories_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alumni_success_stories_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function alumni_success_stories_node_info() {
  $items = array(
    'alumni_success_stories' => array(
      'name' => t('Alumni Success Stories'),
      'base' => 'node_content',
      'description' => t('Content Type to describe alumni stories'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
