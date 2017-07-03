<?php

/**
 * @file
 * roomify_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function roomify_search_views_api($module = NULL, $api = NULL) {
  return array(
    "api" => "3.0",
    "path" => drupal_get_path("module", "roomify_search") . '/views',
  );
}

/**
 * Implements hook_default_search_api_index().
 */
function roomify_search_default_search_api_index() {
  $items = array();
  $items['activities_index'] = entity_import('search_api_index', '{
    "name" : "Activities Index",
    "machine_name" : "activities_index",
    "description" : null,
    "server" : "properties",
    "item_type" : "roomify_property",
    "options" : {
      "datasource" : { "bundles" : [
          "single_day_activity_property",
          "multi_day_activity_property",
          "single_day_tour_property",
          "multi_day_tour_property"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_sp_area" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_sp_short_description" : { "type" : "text" },
        "property_bat_type_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "bat_type" },
        "property_id" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['properties_index'] = entity_import('search_api_index', '{
    "name" : "Properties Index",
    "machine_name" : "properties_index",
    "description" : null,
    "server" : "properties",
    "item_type" : "roomify_property",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "average_rating" : { "type" : "decimal" },
        "field_sp_area" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_sp_area_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_sp_owner" : { "type" : "integer", "entity_type" : "user" },
        "field_sp_property_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_sp_short_description" : { "type" : "text" },
        "field_sp_weight" : { "type" : "integer" },
        "name" : { "type" : "text" },
        "priority" : { "type" : "integer" },
        "property_bat_type_reference" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "bat_type" },
        "property_bat_type_reference:field_st_amenities" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "property_bat_type_reference:field_st_bathrooms" : { "type" : "list\\u003Cinteger\\u003E" },
        "property_bat_type_reference:field_st_bedrooms" : { "type" : "list\\u003Cinteger\\u003E" },
        "property_bat_type_reference:field_st_default_price:amount" : { "type" : "list\\u003Cdecimal\\u003E" },
        "property_bat_type_reference:field_st_double_bed" : { "type" : "list\\u003Cinteger\\u003E" },
        "property_bat_type_reference:field_st_max_capacity" : { "type" : "list\\u003Cinteger\\u003E" },
        "property_bat_type_reference:field_st_single_bed" : { "type" : "list\\u003Cinteger\\u003E" },
        "property_bat_type_reference_field_st_max_capacity_asc" : { "type" : "integer" },
        "property_bat_type_reference_field_st_max_capacity_desc" : { "type" : "integer" },
        "property_id" : { "type" : "integer" },
        "search_api_aggregation_1" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "type" : { "type" : "string" },
        "uid" : { "type" : "integer" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : { "property_bat_type_reference:field_st_max_capacity" : {
                "name" : "Type \\u00bb Max Capacity",
                "description" : "Field \\u0022field_st_max_capacity\\u0022.",
                "type" : "integer"
              }
            }
          }
        },
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Price",
                "type" : "min",
                "fields" : [ "property_bat_type_reference:field_st_default_price:amount" ],
                "description" : "A Minimum aggregation of the following fields: Type \\u00bb Default Cost \\u00bb Amount."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "Tokens" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "field_sp_short_description" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "name" : true, "field_sp_short_description" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "name" : true, "field_sp_short_description" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "name" : true, "field_sp_short_description" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function roomify_search_default_search_api_server() {
  $items = array();
  $items['properties'] = entity_import('search_api_server', '{
    "name" : "Properties",
    "machine_name" : "properties",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "always_show_facets" : 1,
      "indexes" : {
        "properties_index" : {
          "property_id" : {
            "table" : "search_api_db_properties_index",
            "column" : "property_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_properties_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "name" : {
            "table" : "search_api_db_properties_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "uid" : {
            "table" : "search_api_db_properties_index",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "property_bat_type_reference" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_sp_owner" : {
            "table" : "search_api_db_properties_index",
            "column" : "field_sp_owner",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_sp_short_description" : {
            "table" : "search_api_db_properties_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_properties_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_max_capacity" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_fie",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_single_bed" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_f_1",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_double_bed" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_f_2",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_bedrooms" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_f_3",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_bathrooms" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_f_4",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_amenities" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_f_5",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_sp_area" : {
            "table" : "search_api_db_properties_index_field_sp_area",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "property_bat_type_reference_field_st_max_capacity_asc" : {
            "table" : "search_api_db_properties_index",
            "column" : "property_bat_type_reference_field_st_max_capacity_asc",
            "type" : "integer",
            "boost" : "1.0"
          },
          "property_bat_type_reference_field_st_max_capacity_desc" : {
            "table" : "search_api_db_properties_index",
            "column" : "property_bat_type_reference_field_st_max_capacity_desc",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_sp_property_type" : {
            "table" : "search_api_db_properties_index",
            "column" : "field_sp_property_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_properties_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "property_bat_type_reference:field_st_default_price:amount" : {
            "table" : "search_api_db_properties_index_property_bat_type_reference_f_6",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_properties_index",
            "column" : "search_api_aggregation_1",
            "type" : "integer",
            "boost" : "1.0"
          },
          "priority" : {
            "table" : "search_api_db_properties_index",
            "column" : "priority",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_sp_area_type" : {
            "table" : "search_api_db_properties_index_field_sp_area_type",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "average_rating" : {
            "table" : "search_api_db_properties_index",
            "column" : "average_rating",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_sp_weight" : {
            "table" : "search_api_db_properties_index",
            "column" : "field_sp_weight",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "activities_index" : {
          "property_id" : {
            "table" : "search_api_db_activities_index",
            "column" : "property_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_activities_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "property_bat_type_reference" : {
            "table" : "search_api_db_activities_index_property_bat_type_reference",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_sp_short_description" : {
            "table" : "search_api_db_activities_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_sp_area" : {
            "table" : "search_api_db_activities_index_field_sp_area",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_activities_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function roomify_search_default_search_api_sort() {
  $items = array();

  $items['properties_index__field_sp_weight'] = entity_import('search_api_sort', '{
    "index_id" : "properties_index",
    "field" : "field_sp_weight",
    "name" : "Default",
    "enabled" : "1",
    "weight" : "-99",
    "identifier" : "properties_index__field_sp_weight",
    "default_sort" : "1",
    "default_sort_no_terms" : "1",
    "default_order" : "asc",
    "options" : { "field_name" : "Weight" },
    "rdf_mapping" : []
  }');
  $items['properties_index__average_rating'] = entity_import('search_api_sort', '{
    "index_id" : "properties_index",
    "field" : "average_rating",
    "name" : "Average rating",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "properties_index__average_rating",
    "default_sort" : "-10",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Average rating" },
    "rdf_mapping" : []
  }');

  $items['properties_index__priority'] = entity_import('search_api_sort', '{
    "index_id" : "properties_index",
    "field" : "priority",
    "name" : "Default",
    "enabled" : "0",
    "weight" : "-96",
    "identifier" : "properties_index__priority",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Priority" },
    "rdf_mapping" : []
  }');
  $items['properties_index__search_api_aggregation_1'] = entity_import('search_api_sort', '{
    "index_id" : "properties_index",
    "field" : "search_api_aggregation_1",
    "name" : "List by price",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "properties_index__search_api_aggregation_1",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "Price" },
    "rdf_mapping" : []
  }');
  return $items;
}
