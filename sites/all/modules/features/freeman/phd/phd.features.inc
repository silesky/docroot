<?php
/**
 * @file
 * phd.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phd_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function phd_node_info() {
  $items = array(
    'phd_career_accordion' => array(
      'name' => t('PhD Career Accordion'),
      'base' => 'node_content',
      'description' => t('PhD Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'phd_career_capital' => array(
      'name' => t('PhD Career Capital'),
      'base' => 'node_content',
      'description' => t('PhD Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'phd_freeman_learning' => array(
      'name' => t('PhD Freeman Learning'),
      'base' => 'node_content',
      'description' => t('PhD Freeman Learning content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'phd_influential_network' => array(
      'name' => t('PhD Influential Network'),
      'base' => 'node_content',
      'description' => t('PhD Influential Network'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
