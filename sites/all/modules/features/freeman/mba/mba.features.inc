<?php
/**
 * @file
 * mba.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mba_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mba_node_info() {
  $items = array(
    'mba_career_accordion' => array(
      'name' => t('MBA Career Accordion'),
      'base' => 'node_content',
      'description' => t('Mba Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mba_career_capital' => array(
      'name' => t('MBA Career Capital'),
      'base' => 'node_content',
      'description' => t('MBA Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mba_freeman_learning' => array(
      'name' => t('MBA Freeman Learning'),
      'base' => 'node_content',
      'description' => t('MBA Freeman Learning content '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mba_influential_network' => array(
      'name' => t('MBA Influential Network'),
      'base' => 'node_content',
      'description' => t('MBA Influential Network content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mba_network_accordion' => array(
      'name' => t('MBA Network Accordion'),
      'base' => 'node_content',
      'description' => t('MBA Network Accordion'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
