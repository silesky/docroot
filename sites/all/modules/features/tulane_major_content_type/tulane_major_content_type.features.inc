<?php
/**
 * @file
 * tulane_major_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tulane_major_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tulane_major_content_type_node_info() {
  $items = array(
    'major' => array(
      'name' => t('Major'),
      'base' => 'node_content',
      'description' => t('Major'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
