<?php
/**
 * @file
 * blogs_and_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blogs_and_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-blog_news_block-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_news_block-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'tulane' => array(
        'region' => 'news_blog',
        'status' => 1,
        'theme' => 'tulane',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
