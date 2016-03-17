<?php
/**
 * @file
 * tulane_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tulane_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 8,
    'machine_name' => '',
  );

  // Exported role: alumni.
  $roles['alumni'] = array(
    'name' => 'alumni',
    'weight' => 3,
    'machine_name' => 'alumni',
  );

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 4,
    'machine_name' => 'author',
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 7,
    'machine_name' => 'developer',
  );

  // Exported role: faculty.
  $roles['faculty'] = array(
    'name' => 'faculty',
    'weight' => 5,
    'machine_name' => 'faculty',
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 6,
    'machine_name' => 'publisher',
  );

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => 2,
    'machine_name' => 'student',
  );

  return $roles;
}
