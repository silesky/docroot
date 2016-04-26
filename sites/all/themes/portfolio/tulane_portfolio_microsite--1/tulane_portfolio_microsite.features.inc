<?php
/**
 * @file
 * tulane_portfolio_microsite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tulane_portfolio_microsite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tulane_portfolio_microsite_node_info() {
  $items = array(
    'calendar_microsite' => array(
      'name' => t('Microsite calendar page'),
      'base' => 'node_content',
      'description' => t('like a content page, but has a grid-style layout for calendar events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'content_microsite' => array(
      'name' => t('Microsite content page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
