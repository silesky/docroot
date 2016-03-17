<?php
/**
 * @file
 * tulane_display_modes.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function tulane_display_modes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'homepage';
  $ds_view_mode->label = 'Homepage';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'file' => 'file',
    'user' => 'user',
  );
  $export['homepage'] = $ds_view_mode;

  return $export;
}
