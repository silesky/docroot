<?php
/**
 * @file
 * pmba.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pmba_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pmba_node_info() {
  $items = array(
    'pmba_career_accordion' => array(
      'name' => t('PMBA Career Accordion'),
      'base' => 'node_content',
      'description' => t('PMBA Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pmba_career_capital' => array(
      'name' => t('PMBA Career Capital'),
      'base' => 'node_content',
      'description' => t('PMBA Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pmba_freeman_learning' => array(
      'name' => t('PMBA Freeman Learning'),
      'base' => 'node_content',
      'description' => t('PMBA Freeman Learning content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pmba_influential_network' => array(
      'name' => t('PMBA Influential Network'),
      'base' => 'node_content',
      'description' => t('PMBA Influential Network content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pmba_network_accordion' => array(
      'name' => t('PMBA Network Accordion'),
      'base' => 'node_content',
      'description' => t('PMBA Network Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
