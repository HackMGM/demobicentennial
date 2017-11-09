<?php
/**
 * @file
 * historic_marker.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function historic_marker_taxonomy_default_vocabularies() {
  return array(
    'city' => array(
      'name' => 'City',
      'machine_name' => 'city',
      'description' => 'Cities of Alabama',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'counties' => array(
      'name' => 'Counties',
      'machine_name' => 'counties',
      'description' => 'Counties of Alabama',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'highway' => array(
      'name' => 'Highway',
      'machine_name' => 'highway',
      'description' => 'Markers on a county, state, or federal highway.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'keywords' => array(
      'name' => 'Keywords',
      'machine_name' => 'keywords',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'waymark_codes' => array(
      'name' => 'Waymark Codes',
      'machine_name' => 'waymark_codes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
