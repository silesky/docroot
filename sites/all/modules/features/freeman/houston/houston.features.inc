<?php
/**
 * @file
 * houston.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function houston_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function houston_node_info() {
  $items = array(
    'houston_career_accordion' => array(
      'name' => t('Houston Career Accordion'),
      'base' => 'node_content',
      'description' => t('Houston Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'houston_career_capital' => array(
      'name' => t('Houston Career Capital'),
      'base' => 'node_content',
      'description' => t('Houston Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'houston_freeman_learning' => array(
      'name' => t('Houston Freeman Learning'),
      'base' => 'node_content',
      'description' => t('Houston Freeman Learning content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
