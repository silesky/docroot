<?php
/**
 * @file
 * tulane_academic_years.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tulane_academic_years_taxonomy_default_vocabularies() {
  return array(
    'academic_years' => array(
      'name' => 'Academic Years',
      'machine_name' => 'academic_years',
      'description' => 'Defines academic years (i.e. 2014-2015)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
