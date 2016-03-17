<?php
/**
 * @file
 * earn_career_capital.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function earn_career_capital_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function earn_career_capital_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function earn_career_capital_node_info() {
  $items = array(
    'earn_career_capital' => array(
      'name' => t('Earn Career Capital'),
      'base' => 'node_content',
      'description' => t('Display information in simple description and Accordion format.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'earn_career_capital_accordion' => array(
      'name' => t('Earn Career Capital Accordion'),
      'base' => 'node_content',
      'description' => t('This content type is used for accordion items in Earn Career Capital'),
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
