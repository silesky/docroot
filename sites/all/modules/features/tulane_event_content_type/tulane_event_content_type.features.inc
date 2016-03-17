<?php
/**
 * @file
 * tulane_event_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tulane_event_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tulane_event_content_type_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Use <em>events</em> to create events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Events will appear in the event calendar, so please be sure to set an accurate date.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
