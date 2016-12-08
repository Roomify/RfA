; Roomify for Accommodations distro make file.
core = 7.x
api = 2

defaults[projects][subdir] = contrib


; +++++ Roomify Modules +++++
projects[bat][type] = module
projects[bat][download][type] = git
projects[bat][download][url] = https://github.com/Roomify/bat_drupal.git
projects[bat][download][tag] = 7.x-1.14
projects[bat][subdir] = bat

projects[bat_api][type] = module
projects[bat_api][download][type] = git
projects[bat_api][download][url] = https://github.com/Roomify/bat_api.git
projects[bat_api][download][tag] = 7.x-2.3
projects[bat_api][subdir] = bat

projects[bat_event_state_constraints][type] = module
projects[bat_event_state_constraints][download][type] = git
projects[bat_event_state_constraints][download][url] = https://github.com/Roomify/bat_event_state_constraints.git
projects[bat_event_state_constraints][download][tag] = 1.2
projects[bat_event_state_constraints][subdir] = bat

projects[roomify_rate][type] = module
projects[roomify_rate][download][type] = git
projects[roomify_rate][download][url] = https://github.com/Roomify/roomify_rate.git
projects[roomify_rate][download][tag] = 1.7
projects[roomify_rate][directory_name] = roomify_rate
projects[roomify_rate][subdir] = roomify

projects[roomify_property][type] = module
projects[roomify_property][download][type] = git
projects[roomify_property][download][url] = https://github.com/Roomify/roomify_property.git
projects[roomify_property][download][tag] = 1.16
projects[roomify_property][directory_name] = roomify_property
projects[roomify_property][subdir] = roomify

projects[roomify_channel_connector][type] = module
projects[roomify_channel_connector][download][type] = git
projects[roomify_channel_connector][download][url] = https://github.com/Roomify/roomify_channel_connector_drupal.git
projects[roomify_channel_connector][download][tag] = 1.09
projects[roomify_channel_connector][directory_name] = roomify_channel_connector
projects[roomify_channel_connector][subdir] = roomify

projects[roomify_channel_ical][type] = module
projects[roomify_channel_ical][download][type] = git
projects[roomify_channel_ical][download][url] = https://github.com/Roomify/roomify_channel_ical.git
projects[roomify_channel_ical][download][tag] = 1.2
projects[roomify_channel_ical][directory_name] = roomify_channel_ical
projects[roomify_channel_ical][subdir] = roomify

projects[better_db_updates][type] = module
projects[better_db_updates][download][type] = git
projects[better_db_updates][download][url] = https://github.com/Roomify/better_db_updates.git
projects[better_db_updates][download][tag] = 7.x-1.1
projects[better_db_updates][subdir] = contrib

; +++++ Themes +++++

; bootstrap
projects[bootstrap][type] = theme
projects[bootstrap][version] = 3.8

; adminimal
projects[adminimal_theme][type] = theme
projects[adminimal_theme][version] = 1.24

; +++++ Contrib Modules +++++


projects[addressfield][version] = 1.2

projects[addtoany][version] = 4.12

projects[admin_menu][version] = 3.0-rc5

projects[adminimal_admin_menu][version] = 1.7

projects[agrcache][version] = 1.7

projects[autocomplete_deluxe][version] = 2

projects[backup_migrate][version] = 3.1
projects[backup_migrate][patch][] = https://www.drupal.org/files/issues/backup_migrate-fix_constructor_for_future_version_php-2623598-5-7.x.patch

projects[bean][version] = 1.9

projects[better_messages][version] = 1.0-alpha1
projects[better_messages][patch][] = https://www.drupal.org/files/issues/better_messages-fix_jquery_msie-2594311-4.patch

projects[better_formats][version] = 1.0-beta2

projects[cer][type] = module
projects[cer][download][type] = git
projects[cer][download][url] = https://git.drupal.org/project/cer.git
projects[cer][download][revision] = 68f4b2043ab1b200da4e21d506924d7cd332b67f
projects[cer][patch][] = https://www.drupal.org/files/issues/cer-cer-field-collection-issues-2352783-3.patch

projects[charts][version] = 2.0-rc1

projects[chosen][version] = 2.0

projects[classy_paragraphs][version] = 1.0

projects[commerce][version] = 1.13
projects[commerce][patch][] = https://www.drupal.org/files/issues/commerce-delete_line_items_without_products-2261289-4.patch
projects[commerce][patch][] = https://www.drupal.org/files/issues/commerce-georgian_lari-2256853-6.patch

projects[commerce_authnet][version] = 1.4

projects[commerce_cart_expiration][version] = 1.4

projects[commerce_checkout_progress][version] = 1.4

projects[commerce_cop][version] = "1.0-beta2"

projects[commerce_features][version] = 1.1

projects[commerce_fees][version] = 1.0-beta1

projects[commerce_paypal][version] = 2.3

projects[commerce_reports][version] = 4.0-beta2

projects[commerce_checkout_progress][version] = 1.3

projects[commerce_stripe][version] = 1.0

projects[composed_field][version] = 1.0-rc1
projects[composed_field][patch][] = https://www.drupal.org/files/issues/composed_field-check_serialized-1765888-6.patch

projects[composer_manager][version] = 1.8

projects[conditional_fields][version] = 3.0-alpha2

projects[content_menu][version] = 1.0

projects[ctools][version] = 1.11

; NB: the views field handlers patch is merged - shouldn't be needed as of version 2.10 of date.
projects[date][version] = 2.9
projects[date][patch][] = https://www.drupal.org/files/issues/date-allow_entering_of_custom_date_format_in_views_field_handlers-1504202-14.patch
projects[date][patch][] = https://www.drupal.org/files/issues/date-fix_undefine_in_date_text_element_process-2339119-14.patch

projects[date_restrictions][version] = 1.x-dev

projects[date_datepicker_inline][type] = module
projects[date_datepicker_inline][download][type] = git
projects[date_datepicker_inline][download][url] = https://git.drupal.org/project/date_datepicker_inline.git
projects[date_datepicker_inline][download][revision] = c6aa61c6c8247fca72dece2b4bbee13400ee15e6

projects[devel][version] = 1.5

projects[diff][type] = module
projects[diff][download][type] = git
projects[diff][download][url] = https://git.drupal.org/project/diff.git
projects[diff][download][revision] = e0124a16c40a2fbd6eb6fe7d540c53cbb6fd5a94

projects[dragdropfile][version] = 1.7

projects[editablefields][type] = module
projects[editablefields][download][type] = git
projects[editablefields][download][url] = https://git.drupal.org/project/editablefields.git
projects[editablefields][download][revision] = 9c618d43974476db8a94ba7dcc4bf59df0b28363
projects[editablefields][patch][] = https://www.drupal.org/files/editablefields.undefined-index.1233688-20.patch
projects[editablefields][patch][] = https://www.drupal.org/files/issues/editablefields-php7-compatibility-2686329-1.patch

projects[elements][version] = 1.4

projects[email][version] = 1.3

projects[entity][version] = 1.8

projects[entitycache][version] = 1.5

projects[entity_background][version] = 1.0-alpha6

projects[entityqueue][version] = 1.1

projects[entity_rules][version] = 1.0-alpha4

projects[entity_translation][version] = 1.0-beta5

projects[entity2text][version] = 1.0-alpha3

projects[entityform][type] = module
projects[entityform][download][type] = git
projects[entityform][download][url] = https://git.drupal.org/project/entityform.git
projects[entityform][download][revision] = ab5057c2080416fc8099bd8c33e063caafe27d57

projects[entityform_block][version] = 1.3
projects[entityform_block][patch][] = https://www.drupal.org/files/issues/entityform_block-hook_entity_type_delete-exception-2487898-13.patch

projects[entityreference][version] = 1.2

projects[entityreference_prepopulate][version] = 1.6

projects[environment_indicator][version] = 2.8

projects[eu_cookie_compliance][version] = 1.14

projects[facetapi][version] = 1.5
projects[facetapi][patch][] = https://www.drupal.org/files/issues/facetapi-cur-search-block-not-exported-1469002_2.patch
projects[facetapi][patch][] = https://www.drupal.org/files/issues/facetapi-override_facet_label-1665164-22.patch

projects[facetapi_pretty_paths][version] = 1.4

projects[fast_404][version] = 1.5

projects[fb_likebox][version] = 2.2

projects[features][version] = 2.10

projects[ffc][version] = 1.0-beta2

projects[field_collection][version] = 1.0-beta11

projects[field_group][type] = module
projects[field_group][download][type] = git
projects[field_group][download][url] = https://git.drupal.org/project/field_group.git
projects[field_group][download][revision] = 0a5404d623d0bec355d81a9646f2b7de93b958e4

projects[flag][version] = 3.9

projects[fivestar][version] = 2.1

projects[filefield_sources][version] = 1.10

projects[filefield_sources_plupload][version] = 1.1

projects[field_formatter_settings][version] = 1.1

projects[footable][version] = 1.0
projects[footable][patch][] = https://www.drupal.org/files/issues/footable-add_striping_option-2307701-4.patch

projects[file_entity][version] = 2.0-beta3

projects[geofield][version] = 2.3

projects[geofield_gmap][version] = 2.x-dev
projects[geofield_gmap][patch][] = https://www.drupal.org/files/issues/geofield_gmap-zoom_after_selecting_address-2562835-1.patch

projects[geolocation][version] = 1.6

projects[geophp][version] = 1.7

projects[getdirections][version] = 3.2

projects[google_analytics][version] = 2.2

projects[google_tag][version] = 1.0

projects[group][version] = 1.0-beta6
projects[group][patch][] = https://www.drupal.org/files/issues/group-profile2_integration-2701803-1.patch

projects[jquery_update][version] = 3.0-alpha3

projects[job_scheduler][version] = 2.x-dev

projects[i18n][version] = 1.14

projects[i18nviews][version] = 3.0-alpha1
projects[i18nviews][patch][] = https://www.drupal.org/files/issues/i18nviews-2245917-1-export-translatables-v1.patch

projects[icon][version] = 1.0-beta6

projects[image_link_formatter][version] = 1.0

projects[imageapi_optimize][version] = 1.2

projects[inline_entity_form][version] = 1.8

projects[interval][version] = 1.0

projects[ip2country][version] = 1.4

projects[jquery_colorpicker][version] = 1.2

projects[languageicons][version] = 1.1

projects[leaflet][version] = 1.3

projects[leaflet_more_maps][version] = 1.16

projects[less][version] = 4.0

projects[libraries][version] = 2.3

projects[link][version] = 1.4

projects[jsonlog][version] = 2.1

projects[logintoboggan][version] = 1.5

projects[mailchimp][version] = 3.4

projects[maillog][version] = 1.0-alpha1

projects[mailsystem][type] = module
projects[mailsystem][download][type] = git
projects[mailsystem][download][url] = https://git.drupal.org/project/mailsystem.git
projects[mailsystem][download][revision] = 966e13e7024a428e35dfc1e505ae6a774eb148a2

projects[manualcrop][type] = module
projects[manualcrop][download][type] = git
projects[manualcrop][download][url] = https://git.drupal.org/project/manualcrop.git
projects[manualcrop][download][revision] = c30ea7983068f945351e7b9523d8b68768c41a17

projects[masonry][version] = 3.0-beta1

projects[masonry_views][version] = 3.0

projects[media][version] = 2.0-beta5

projects[menu_admin_per_menu][version] = 1.0
projects[menu_admin_per_menu][patch][] = https://www.drupal.org/files/issues/integrate-menu-translation-suport-2546214-1.patch

projects[message][version] = 1.12
projects[message][patch][] = https://www.drupal.org/files/issues/text-sanitized.patch

projects[metatag][version] = 1.17

projects[mimemail][version] = 1.0-beta4

projects[module_filter][version] = 2.0

projects[override_node_options][version] = 1.13

projects[panels][version] = 3.8

projects[panels_everywhere][version] = 1.0-rc2

projects[panels_bootstrap_layouts][version] = 3.0

projects[panels_tabs][type] = module
projects[panels_tabs][download][type] = git
projects[panels_tabs][download][url] = https://git.drupal.org/project/panels_tabs.git
projects[panels_tabs][download][revision] = 2caec501daab91001712d153398df585ff6c238c
projects[panels_tabs][patch][] = https://www.drupal.org/files/issues/panels_tabs-back_button_support-821334-18.patch

projects[paragraphs][version] = 1.0-rc4

projects[paragraphs_id][version] = 1.0-alpha2

projects[paragraphs_pack][version] = 1.0-alpha5

projects[pathauto][version] = 1.3

projects[pathauto_entity][version] = 1.0

projects[pet][version] = 1.0-rc1
projects[pet][patch][] = https://www.drupal.org/files/pet-add-rules-state-2092195-1.patch
projects[pet][patch][] = https://www.drupal.org/files/issues/pet-specify_entity_types_for_tokens-2612754-1.patch
projects[pet][patch][] = https://www.drupal.org/files/issues/multilanguage-support-2727733-5.patch

projects[plupload][version] = 1.7
; https://www.drupal.org/node/2106583
projects[plupload][patch][] = https://www.drupal.org/files/plupload-cannot-upload-with-not-php-stream-2106583-5.patch

projects[pm_existing_pages][version] = 1.4

projects[popup_field_group][version] = 1.0

projects[profile2][type] = module
projects[profile2][download][type] = git
projects[profile2][download][url] = https://git.drupal.org/project/profile2.git
projects[profile2][download][revision] = 9a05fc78b5c3c3deb9d41fb8202b523602c80a77

projects[publishcontent][version] = 1.3

projects[redirect][version] = 1.0-rc3

projects[robotstxt][version] = 1.3

projects[role_delegation][version] = 1.1

projects[role_export][version] = 1.x-dev

projects[rules][version] = 2.9

projects[rules_conditional][version] = 1.0-beta2

projects[rrssb][type] = module
projects[rrssb][download][type] = git
projects[rrssb][download][url] = https://git.drupal.org/project/rrssb.git
projects[rrssb][download][revision] = 969397d5331003aa33869b53bd4ac94814f99852

projects[s3fs][version] = 2.4

projects[search_api][version] = 1.20

projects[search_api_db][type] = module
projects[search_api_db][download][type] = git
projects[search_api_db][download][url] = https://git.drupal.org/project/search_api_db.git
projects[search_api_db][download][revision] = 4e30fb20b8c99634ba5b26b0d87f48e997d482a8
projects[search_api_db][patch][] = https://www.drupal.org/files/issues/2219897-25--facets_for_empty_results.patch

projects[search_api_ranges][type] = module
projects[search_api_ranges][download][type] = git
projects[search_api_ranges][download][url] = https://git.drupal.org/project/search_api_ranges.git
projects[search_api_ranges][download][revision] = abbfa9bd6698d6fe5dca2f77bac94aedeed4da5f

projects[search_api_sorts][version] = 1.6

projects[services][version] = 3.17

projects[services_api_key_auth][version] = 1.2

projects[session_api][version] = 1.0-rc1

projects[slick][type] = module
projects[slick][download][type] = git
projects[slick][download][url] = https://git.drupal.org/project/slick.git
projects[slick][download][revision] = 6189680926f15e66146dcb2457de5d709cb47ef5

projects[slick_views][type] = module
projects[slick_views][download][type] = git
projects[slick_views][download][url] = https://git.drupal.org/project/slick_views.git
projects[slick_views][download][revision] = 96cf95a9a58ace07dd576f24d9183e83fd0b3032

projects[smtp][version] = 1.3

projects[strongarm][version] = 2.0

projects[table_element][version] = 1.0-beta4

projects[taxonomy_access_fix][version] = 2.3

projects[timefield][version] = 1.0-alpha2

projects[title][version] = 1.0-alpha8

projects[token][version] = 1.6

projects[userone][version] = 1.0-beta1

projects[uuid][version] = 1.0-beta1

projects[variable][version] = 2.5

projects[view_unpublished][version] = 1.2

projects[views][version] = 3.14

projects[views_autocomplete_filters][version] = 1.x-dev

projects[views_bootstrap][type] = module
projects[views_bootstrap][download][type] = git
projects[views_bootstrap][download][url] = https://git.drupal.org/project/views_bootstrap.git
projects[views_bootstrap][download][revision] = eee44d0f4f567aef22f7a4bdb7d64e1a715e6449

projects[views_contextual_filters_or][type] = module
projects[views_contextual_filters_or][download][type] = git
projects[views_contextual_filters_or][download][url] = https://git.drupal.org/project/views_contextual_filters_or.git
projects[views_contextual_filters_or][download][revision] = 42891a0b0057c9b71c6bf59f043cd27efd3ac43e

projects[views_data_export][version] = 3.1

projects[views_date_format_sql][version] = 3.1

projects[views_load_more][version] = 1.5

projects[views_bulk_operations][version] = 3.3

projects[views_megarow][version] = 1.6

projects[views_php][version] = 1.0-alpha3

projects[votingapi][version] = 2.12

projects[vvf][version] = 1.2

projects[wysiwyg][type] = module
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][url] = https://git.drupal.org/project/wysiwyg.git
projects[wysiwyg][download][revision] = 18deb5ab9cc5255822a7d336891d043d35e660d2

projects[xautoload][version] = 5.7

projects[xmlsitemap][version] = 2.3


; +++++ Libraries +++++

; backbone
libraries[backbone][directory_name] = backbone
libraries[backbone][type] = library
libraries[backbone][destination] = libraries
libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/documentcloud/backbone/archive/1.0.0.zip

; chosen
libraries[chosen][directory_name] = chosen
libraries[chosen][type] = library
libraries[chosen][destination] = libraries
libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.6.2/chosen_v1.6.2.zip

; ckeditor with plugins for asset module
; To update the link, go to http://ckeditor.com/builder and select the
; Full build of version 4 with the iFrame dialog field plugin, Icy Orange skin and all languages. (optimized version)
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][type] = library
libraries[ckeditor][destination] = libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://ckeditor.com/online-builder/releases/minified/4.6.0/icy_orange/0.9/ckeditor_4.6.0_16a8f32d4ec0.zip

; imagesLoaded for masonry.
libraries[imagesloaded][directory_name] = imagesloaded
libraries[imagesloaded][type] = library
libraries[imagesloaded][destination] = libraries
libraries[imagesloaded][download][type] = get
libraries[imagesloaded][download][url] = http://imagesloaded.desandro.com/imagesloaded.pkgd.min.js

; imagesLoaded.
libraries[jquery.imagesloaded][download][type] = file
libraries[jquery.imagesloaded][download][url] = https://github.com/desandro/imagesloaded/archive/v2.1.2.tar.gz
libraries[jquery.imagesloaded][download][subtree] = imagesloaded-2.1.2
libraries[jquery.imagesloaded][destination] = libraries

; imgAreaSelect.
libraries[jquery.imgareaselect][download][type] = file
libraries[jquery.imgareaselect][download][url] = https://github.com/odyniec/imgareaselect/archive/v0.9.11-rc.1.tar.gz
libraries[jquery.imgareaselect][download][subtree] = imgareaselect-0.9.11-rc.1
libraries[jquery.imgareaselect][destination] = libraries

; jcrop
libraries[Jcrop][download][type] = file
libraries[Jcrop][download][url] = http://github.com/tapmodo/Jcrop/archive/v0.9.12.zip
libraries[Jcrop][directory_name] = Jcrop
libraries[Jcrop][type] = library
libraries[Jcrop][destination] = libraries

; json2
libraries[json2][download][type] = file
libraries[json2][download][url] = https://github.com/Roomify/JSON-js/archive/master.zip
libraries[json2][directory_name] = json2
libraries[json2][type] = library
libraries[json2][destination] = libraries

; leaflet
libraries[leaflet][directory_name] = leaflet
libraries[leaflet][type] = library
libraries[leaflet][destination] = libraries
libraries[leaflet][download][type] = get
libraries[leaflet][download][url] = http://cdn.leafletjs.com/leaflet/v0.7.7/leaflet.zip

; less.php
libraries[less.php][directory_name] = less.php
libraries[less.php][type] = library
libraries[less.php][destination] = libraries
libraries[less.php][download][type] = get
libraries[less.php][download][url] = https://github.com/oyejorge/less.php/releases/download/v1.7.0.4/less.php_1.7.0.4.zip

; mailchimp
libraries[mailchimp][directory_name] = mailchimp
libraries[mailchimp][type] = library
libraries[mailchimp][destination] = libraries
libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = https://bitbucket.org/mailchimp/mailchimp-api-php/get/2.0.6.zip

; masonry
libraries[masonry][directory_name] = masonry
libraries[masonry][type] = library
libraries[masonry][destination] = libraries
libraries[masonry][download][type] = get
libraries[masonry][download][url] = http://cdnjs.cloudflare.com/ajax/libs/masonry/4.1.1/masonry.pkgd.min.js

; modernizr
libraries[modernizr][directory_name] = modernizr
libraries[modernizr][type] = library
libraries[modernizr][destination] = libraries
libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip

; plupload
libraries[plupload][directory_name] = plupload
libraries[plupload][type] = library
libraries[plupload][destination] = libraries
libraries[plupload][download][type] = get
libraries[plupload][download][url] = https://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][patch][] = https://www.drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-21.patch

; fullcalendar
libraries[fullcalendar][directory_name] = fullcalendar
libraries[fullcalendar][type] = library
libraries[fullcalendar][destination] = libraries
libraries[fullcalendar][download][type] = get
libraries[fullcalendar][download][url] = https://github.com/arshaw/fullcalendar/releases/download/v3.0.1/fullcalendar-3.0.1.zip

; scheduler
libraries[scheduler][directory_name] = fullcalendar-scheduler
libraries[scheduler][type] = library
libraries[scheduler][destination] = libraries
libraries[scheduler][download][type] = get
libraries[scheduler][download][url] = https://github.com/fullcalendar/fullcalendar-scheduler/releases/download/v1.4.0/fullcalendar-scheduler-1.4.0.zip

; stripe-php
libraries[stripe-php][download][type] = file
libraries[stripe-php][download][url] = https://github.com/stripe/stripe-php/archive/v1.18.0.zip
libraries[stripe-php][directory_name] = stripe-php
libraries[stripe-php][type] = "library"
libraries[stripe-php][patch][] = "patches/stripe_support_tls_1_2.patch"

; rrssb
libraries[rrssb][directory_name] = rrssb
libraries[rrssb][type] = library
libraries[rrssb][destination] = libraries
libraries[rrssb][download][type] = get
libraries[rrssb][download][url] = https://github.com/kni-labs/rrssb/archive/1.8.1.zip

; slick
libraries[slick][download][type] = file
libraries[slick][download][url] = https://github.com/kenwheeler/slick/archive/1.6.0.zip
libraries[slick][directory_name] = slick
libraries[slick][type] = library

; underscore
libraries[underscore][directory_name] = underscore
libraries[underscore][type] = library
libraries[underscore][destination] = libraries
libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/documentcloud/underscore/archive/1.6.0.zip

; jquery.timepicker
libraries[jquery.timepicker][directory_name] = jquery.timepicker
libraries[jquery.timepicker][type] = library
libraries[jquery.timepicker][destination] = libraries
libraries[jquery.timepicker][download][type] = get
libraries[jquery.timepicker][download][url] = https://fgelinas.com/code/timepicker/releases/jquery-ui-timepicker-0.3.3.zip

; footable
libraries[FooTable][directory_name] = FooTable
libraries[FooTable][type] = library
libraries[FooTable][destination] = libraries
libraries[FooTable][download][type] = get
libraries[FooTable][download][url] = https://github.com/fooplugins/FooTable/archive/2.0.3.zip

; awssdk
libraries[awssdk2][directory_name] = awssdk2
libraries[awssdk2][type] = library
libraries[awssdk2][destination] = libraries
libraries[awssdk2][download][type] = get
libraries[awssdk2][download][url] = https://github.com/aws/aws-sdk-php/releases/download/2.7.25/aws.zip
