<?php
/**
 * @file
 * tulane_workbench_settings.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function tulane_workbench_settings_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_approval' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_approval',
      'name' => 'Submit for Approval',
    ),
    'needs_approval:draft' => array(
      'from_name' => 'needs_approval',
      'to_name' => 'draft',
      'name' => 'Reject',
    ),
    'needs_approval:ready_to_publish' => array(
      'from_name' => 'needs_approval',
      'to_name' => 'ready_to_publish',
      'name' => 'Ready to Publish',
    ),
    'needs_review:needs_approval' => array(
      'from_name' => 'needs_review',
      'to_name' => 'needs_approval',
      'name' => 'Submit for Approval',
    ),
    'published:draft' => array(
      'from_name' => 'published',
      'to_name' => 'draft',
      'name' => 'Return to draft',
    ),
    'ready_to_publish:published' => array(
      'from_name' => 'ready_to_publish',
      'to_name' => 'published',
      'name' => 'Publish',
    ),
  );
  return $items;
}
