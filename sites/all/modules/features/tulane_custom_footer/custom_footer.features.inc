<?php
/**
 * @file
 * custom_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function custom_footer_node_info() {
  $items = array(
    'tulane_custom_footer' => array(
      'name' => t('Tulane Custom Footer'),
      'base' => 'node_content',
      'description' => t('Allows different custom footers to appear on the same site for different pages or directories.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
