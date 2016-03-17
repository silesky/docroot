<?php
/**
 * @file
 * faculty_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function faculty_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function faculty_page_node_info() {
  $items = array(
    'faculty' => array(
      'name' => t('Faculty Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Faculty Page'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
