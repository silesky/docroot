<?php
/**
 * @file
 * landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landing_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function landing_page_node_info() {
  $items = array(
    'landing_page_authors' => array(
      'name' => t('Landing Page Authors'),
      'base' => 'node_content',
      'description' => t('Content type for authors of landing pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landing_page_left_information' => array(
      'name' => t('Landing Page Left Information'),
      'base' => 'node_content',
      'description' => t('Content information related with landing page left block'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landing_page_quotes' => array(
      'name' => t('Landing Page Quotes'),
      'base' => 'node_content',
      'description' => t('This content type have quote of landing pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landing_page_right_information' => array(
      'name' => t('Landing Page Right Information'),
      'base' => 'node_content',
      'description' => t('Content specific to landing page right section'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
