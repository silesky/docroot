<?php
/**
 * @file
 * new_orleans_is_your_campus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function new_orleans_is_your_campus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function new_orleans_is_your_campus_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
