<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_search_views_data_alter(&$data) {
  $data['search_api_index_properties_index']['property_types'] = array(
    'field' => array(
      'title' => t('Types List'),
      'help' => t('Display all types with info.'),
      'handler' => 'roomify_search_handler_type_property_types',
    ),
  );
  $data['search_api_index_properties_index']['starting_type_price'] = array(
    'field' => array(
      'title' => t('Starging Room Price'),
      'help' => t('Lowest room price of this property.'),
      'handler' => 'roomify_search_handler_starting_type_price',
    ),
  );
  $data['search_api_index_properties_index']['participating_offer'] = array(
    'field' => array(
      'title' => t('Offers joined'),
      'help' => t('Returns offers where the property participates.'),
      'handler' => 'roomify_search_handler_offers_list',
    ),
  );
  $data['search_api_index_properties_index']['roomify_search_handler_beds_largest_room'] = array(
    'field' => array(
      'title' => t('N. of single beds of the largest Room'),
      'help' => t('Find the room of this property with the biggest number of single beds'),
      'handler' => 'roomify_search_handler_beds_largest_room',
    ),
  );
  $data['search_api_index_properties_index']['roomify_search_handler_double_beds_largest_room'] = array(
    'field' => array(
      'title' => t('N. of double beds of the largest Room'),
      'help' => t('Find the room of this property with the biggest number of double beds'),
      'handler' => 'roomify_search_handler_double_beds_largest_room',
    ),
  );
  $data['search_api_index_properties_index']['roomify_search_handler_bathrooms_largest_room'] = array(
    'field' => array(
      'title' => t('N. of Bathrooms of the largest Room'),
      'help' => t('Find the room of this property with the biggest number of bathrooms'),
      'handler' => 'roomify_search_handler_bathrooms_largest_room',
    ),
  );
  $data['taxonomy_term_data']['roomify_area_blogposts'] = array(
    'field' => array(
      'title' => t('Area blogposts'),
      'help' => t('A list of posts of this area'),
      'handler' => 'roomify_search_handler_area_blogposts',
    ),
  );
  $data['search_api_index_properties_index']['roomify_search_handler_property_capacity'] = array(
    'field' => array(
      'title' => t('The Property Capacity'),
      'help' => t('A sum of the capacities of the single room types.'),
      'handler' => 'roomify_search_handler_property_capacity',
    ),
  );
  $data['search_api_index_properties_index']['roomify_search_handler_reviews_number'] = array(
    'field' => array(
      'title' => t('Number of reviews'),
      'help' => t('Number of reviews of the property'),
      'handler' => 'roomify_search_handler_reviews_number',
    ),
  );
}
