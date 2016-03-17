<?php
/**
 * @file
 * emba.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function emba_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function emba_node_info() {
  $items = array(
    'emba_career_accordion' => array(
      'name' => t('EMBA Career Accordion'),
      'base' => 'node_content',
      'description' => t('EMBA Career Accordion content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'emba_career_capital' => array(
      'name' => t('EMBA Career Capital'),
      'base' => 'node_content',
      'description' => t('EMBA Career Capital content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'emba_freeman_learning' => array(
      'name' => t('EMBA Freeman Learning'),
      'base' => 'node_content',
      'description' => t('EMBA Freeman Learning'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'emba_influential_network' => array(
      'name' => t('EMBA Influential Network'),
      'base' => 'node_content',
      'description' => t('EMBA Influential Network content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
