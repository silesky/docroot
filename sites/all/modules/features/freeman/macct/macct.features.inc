<?php
/**
 * @file
 * macct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function macct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function macct_node_info() {
  $items = array(
    'macct_career_accordion' => array(
      'name' => t('MACCT Career Accordion'),
      'base' => 'node_content',
      'description' => t('MACCT Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'macct_career_capital' => array(
      'name' => t('MACCT Career Capital'),
      'base' => 'node_content',
      'description' => t('MACCT Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'macct_freeman_learning' => array(
      'name' => t('MACCT Freeman Learning'),
      'base' => 'node_content',
      'description' => t('MACCT Freeman Learning content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'macct_influential_network' => array(
      'name' => t('MACCT Influential Network'),
      'base' => 'node_content',
      'description' => t('MACCT Influential Network content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'macct_network_accordion' => array(
      'name' => t('MACCT Network Accordion'),
      'base' => 'node_content',
      'description' => t('MACCT Network Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
