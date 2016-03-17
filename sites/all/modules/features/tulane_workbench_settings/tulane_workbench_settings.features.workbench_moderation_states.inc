<?php
/**
 * @file
 * tulane_workbench_settings.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function tulane_workbench_settings_workbench_moderation_export_states() {
  $items = array(
    'needs_approval' => array(
      'name' => 'needs_approval',
      'label' => 'Needs Approval',
      'description' => 'Send for Approval',
      'weight' => -8,
    ),
    'ready_to_publish' => array(
      'name' => 'ready_to_publish',
      'label' => 'Ready to Publish',
      'description' => 'Ready to Publish',
      'weight' => -7,
    ),
  );
  return $items;
}
