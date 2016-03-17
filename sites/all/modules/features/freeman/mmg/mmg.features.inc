<?php
/**
 * @file
 * mmg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mmg_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mmg_node_info() {
  $items = array(
    'mmg_career_accordion' => array(
      'name' => t('MMG Career Accordion'),
      'base' => 'node_content',
      'description' => t('MMG Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mmg_career_capital' => array(
      'name' => t('MMG Career Capital'),
      'base' => 'node_content',
      'description' => t('MMG Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mmg_freeman_learning' => array(
      'name' => t('MMG Freeman Learning'),
      'base' => 'node_content',
      'description' => t('MMG Freeman Learning content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mmg_influential_network' => array(
      'name' => t('MMG Influential Network'),
      'base' => 'node_content',
      'description' => t('MMG Influential Network content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mmg_network_accordion' => array(
      'name' => t('MMG Network Accordion'),
      'base' => 'node_content',
      'description' => t('MMG Network Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
