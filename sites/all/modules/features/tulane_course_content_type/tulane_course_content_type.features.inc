<?php
/**
 * @file
 * tulane_course_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tulane_course_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tulane_course_content_type_node_info() {
  $items = array(
    'tulane_course' => array(
      'name' => t('Tulane Course'),
      'base' => 'node_content',
      'description' => t('Course Content Type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Add a new course form'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
