<?php
/**
 * @file
 * tulane_organizations.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tulane_organizations_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_organizations_ref'
  $field_bases['field_organizations_ref'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organizations_ref',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'organizations',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_organizations_type'
  $field_bases['field_organizations_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organizations_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Schools' => 'Schools',
        'Centers & Institutes' => 'Centers & Institutes',
        'Orgs & Cubs' => 'Orgs & Cubs',
        'Offices' => 'Offices',
        'Programs' => 'Programs',
        'Departments' => 'Departments',
        'Services' => 'Services',
        'External' => 'External',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
