<?php
/**
 * @file
 * mme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mme_node_info() {
  $items = array(
    'mme_career_accordion' => array(
      'name' => t('MME Career Accordion'),
      'base' => 'node_content',
      'description' => t('MME Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mme_career_capital' => array(
      'name' => t('MME Career Capital'),
      'base' => 'node_content',
      'description' => t('MME Career Capital'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mme_freeman_learning' => array(
      'name' => t('MME Freeman Learning'),
      'base' => 'node_content',
      'description' => t('MME Freeman Learning content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mme_influential_network' => array(
      'name' => t('MME Influential Network'),
      'base' => 'node_content',
      'description' => t('MME Influential Network content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mme_network_accordion' => array(
      'name' => t('MME Network Accordion'),
      'base' => 'node_content',
      'description' => t('MME Network Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
