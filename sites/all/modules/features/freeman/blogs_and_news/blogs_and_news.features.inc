<?php
/**
 * @file
 * blogs_and_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blogs_and_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blogs_and_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blogs_and_news_node_info() {
  $items = array(
    'blog_news_feed' => array(
      'name' => t('Blog & News Feed'),
      'base' => 'node_content',
      'description' => t('Blog & News feed import content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
