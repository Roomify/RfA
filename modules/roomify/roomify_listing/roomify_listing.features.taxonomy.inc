<?php

/**
 * @file
 * roomify_listing.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function roomify_listing_taxonomy_default_vocabularies() {
  return array(
    'property_type' => array(
      'name' => 'Property Type',
      'machine_name' => 'property_type',
      'description' => 'For categorizing properties - eg. Vacation Rental, BnB, House',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => '1',
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
