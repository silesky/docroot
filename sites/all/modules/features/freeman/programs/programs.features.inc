<?php
/**
 * @file
 * programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function programs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function programs_node_info() {
  $items = array(
    'programs' => array(
      'name' => t('Programs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Programs'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
