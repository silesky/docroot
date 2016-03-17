<?php
/**
 * @file
 * tulane_microsite_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tulane_microsite_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tulane_microsite_ct_node_info() {
  $items = array(
    'microsite' => array(
      'name' => t('Microsite'),
      'base' => 'node_content',
      'description' => t('This content type is to be used in conjunction with the main Microsite Theme.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
