; Roomify for Accommodations distro make file.
core = 7.x
api = 2

defaults[projects][subdir] = contrib


; +++++ Roomify Modules +++++
projects[bat][type] = module
projects[bat][download][type] = git
projects[bat][download][url] = https://github.com/Roomify/bat_drupal.git
projects[bat][download][tag] = 7.x-1.35
projects[bat][subdir] = bat

projects[bat_api][type] = module
projects[bat_api][download][type] = git
projects[bat_api][download][url] = https://github.com/Roomify/bat_api.git
projects[bat_api][download][tag] = 7.x-2.9
projects[bat_api][subdir] = bat

projects[bat_event_state_constraints][type] = module
projects[bat_event_state_constraints][download][type] = git
projects[bat_event_state_constraints][download][url] = https://github.com/Roomify/bat_event_state_constraints.git
projects[bat_event_state_constraints][download][tag] = 1.3
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
projects[roomify_property][download][tag] = 1.31
projects[roomify_property][directory_name] = roomify_property
projects[roomify_property][subdir] = roomify

projects[roomify_channel_connector][type] = module
projects[roomify_channel_connector][download][type] = git
projects[roomify_channel_connector][download][url] = https://github.com/Roomify/roomify_channel_connector_drupal.git
projects[roomify_channel_connector][download][tag] = 1.14
projects[roomify_channel_connector][directory_name] = roomify_channel_connector
projects[roomify_channel_connector][subdir] = roomify

projects[roomify_channel_ical][type] = module
projects[roomify_channel_ical][download][type] = git
projects[roomify_channel_ical][download][url] = https://github.com/Roomify/roomify_channel_ical.git
projects[roomify_channel_ical][download][tag] = 1.8
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
projects[bootstrap][version] = 3.19

; adminimal
projects[adminimal_theme][type] = theme
projects[adminimal_theme][version] = 1.24
; Fix issue with module_filter not being detected.
; See: https://www.drupal.org/node/2763581
projects[adminimal_theme][patch][] = "https://www.drupal.org/files/issues/adminimal_theme_1_24-2763581-34_0.patch"

; +++++ Contrib Modules +++++


projects[addressfield][version] = 1.2

projects[addtoany][version] = 4.15

projects[admin_menu][version] = 3.0-rc5

projects[adminimal_admin_menu][version] = 1.9

projects[administerusersbyrole][version] = 2.0

projects[advagg][version] = 2.33

projects[agrcache][version] = 1.7

projects[autocomplete_deluxe][version] = 2.3
projects[autocomplete_deluxe][patch][] = https://www.drupal.org/files/issues/2554529-respect-disabled.patch
projects[autocomplete_deluxe][patch][] = https://www.drupal.org/files/issues/term_names-2858823-1.patch

projects[background_image_formatter][version] = 1.4

projects[backup_migrate][version] = 3.5

projects[bean][version] = 1.9

projects[better_messages][version] = 1.0-alpha1
projects[better_messages][patch][] = https://www.drupal.org/files/issues/better_messages-fix_jquery_msie-2594311-4.patch

projects[better_formats][version] = 1.0-beta2

projects[cer][type] = module
projects[cer][download][type] = git
projects[cer][download][url] = https://git.drupal.org/project/cer.git
projects[cer][download][revision] = 886048a494a3d3c8fea79564b3a01e00ebed6754

projects[chain_menu_access][version] = 2.0

projects[charts][version] = 2.0-rc1

projects[checklistapi][version] = 1.2

projects[chosen][version] = 2.0

projects[classy_paragraphs][version] = 1.0

projects[colorbox] = 2.13

projects[commerce][version] = 1.14
projects[commerce][patch][] = https://www.drupal.org/files/issues/commerce-delete_line_items_without_products-2261289-4.patch

projects[commerce_addressbook] = 3.0-rc4

projects[commerce_authnet][version] = 1.4

projects[commerce_cart_expiration][version] = 1.4

projects[commerce_checkout_progress][version] = 1.4

projects[commerce_cop][type] = module
projects[commerce_cop][download][type] = git
projects[commerce_cop][download][url] = https://git.drupal.org/project/commerce_cop.git
projects[commerce_cop][download][revision] = 6b8a9ae5c395f6e0d7cc2bcb5616835a2d5a2898
projects[commerce_cop][patch][] = https://www.drupal.org/files/issues/commerce_cop-i18n-integration-2344307-24.patch

projects[commerce_features][version] = 1.1

projects[commerce_fees][version] = 1.0-beta1

projects[commerce_paypal][version] = 2.4

projects[commerce_reports][version] = 4.0-beta2

projects[commerce_checkout_progress][version] = 1.3

projects[commerce_stripe][version] = 1.2

projects[composed_field][version] = 1.0-rc1
projects[composed_field][patch][] = https://www.drupal.org/files/issues/composed_field-check_serialized-1765888-6.patch

projects[composer_manager][version] = 1.8

projects[conditional_fields][version] = 3.0-alpha2

projects[content_menu][version] = 1.0

projects[ctools][version] = 1.14

projects[date][version] = 2.x-dev
projects[date][patch][] = https://www.drupal.org/files/issues/date-input_disabled-1190830-14.patch

projects[date_restrictions][type] = module
projects[date_restrictions][download][type] = git
projects[date_restrictions][download][url] = https://git.drupal.org/project/date_restrictions.git
projects[date_restrictions][download][revision] = e2de47a66ea160aedca3d22fd1ab0ab4a4363af8

projects[date_datepicker_inline][type] = module
projects[date_datepicker_inline][download][type] = git
projects[date_datepicker_inline][download][url] = https://git.drupal.org/project/date_datepicker_inline.git
projects[date_datepicker_inline][download][revision] = c6aa61c6c8247fca72dece2b4bbee13400ee15e6

projects[devel][version] = 1.6

projects[diff][version] = 3.3

projects[dragdropfile][version] = 1.7

projects[elements][version] = 1.5

projects[email][version] = 1.3

projects[entity][version] = 1.9

projects[entitycache][version] = 1.5

projects[entity_background][version] = 1.0-alpha6

projects[entityqueue][version] = 1.5

projects[entity_rules][version] = 1.0-alpha4

projects[entity_translation][version] = 1.0

projects[entity2text][version] = 1.0-alpha3

projects[entityform][version] = 2.0-rc4

projects[entityform_block][version] = 1.3
projects[entityform_block][patch][] = https://www.drupal.org/files/issues/entityform_block-hook_entity_type_delete-exception-2487898-13.patch

projects[entityreference][version] = 1.5

projects[entityreference_prepopulate][version] = 1.7

projects[environment_indicator][version] = 2.8

projects[epsacrop][version] = 2.4

projects[eu_cookie_compliance][version] = 1.17

projects[facebook_tracking_pixel][version] = 1.1

projects[facetapi][version] = 1.5
projects[facetapi][patch][] = https://www.drupal.org/files/issues/facetapi-cur-search-block-not-exported-1469002_2.patch
projects[facetapi][patch][] = https://www.drupal.org/files/issues/facetapi-override_facet_label-1665164-22.patch

projects[facetapi_pretty_paths][version] = 1.4

projects[fast_404][version] = 1.5

projects[fb_likebox][version] = 2.3

projects[features][version] = 2.10

projects[ffc][version] = 1.0-beta2

projects[field_collection][version] = 1.0-beta12

projects[field_group][version] = 1.6

projects[flag][version] = 3.9

projects[fivestar][version] = 2.2

projects[filefield_sources][version] = 1.10

projects[filefield_sources_plupload][version] = 1.1

projects[field_formatter_settings][version] = 1.1

projects[footable][version] = 1.0
projects[footable][patch][] = https://www.drupal.org/files/issues/footable-add_striping_option-2307701-4.patch

projects[file_entity][version] = 2.22

projects[geofield][version] = 2.3

projects[geofield_gmap][version] = 2.0-alpha1
projects[geofield_gmap][patch][] = https://www.drupal.org/files/issues/2018-03-21/geofield_gmap-zoom_after_selecting_address-2562835-4.patch

projects[geolocation][version] = 1.7

projects[geophp][version] = 1.7

projects[getdirections][version] = 3.2

projects[google_analytics][version] = 2.3

projects[google_recaptcha][version] = 1.2

projects[google_tag][version] = 1.0

projects[group][version] = 1.0-beta6
projects[group][patch][] = https://www.drupal.org/files/issues/group-profile2_integration-2701803-1.patch

projects[jquery_update][version] = 3.0-alpha5

projects[job_scheduler][type] = module
projects[job_scheduler][download][type] = git
projects[job_scheduler][download][url] = https://git.drupal.org/project/job_scheduler.git
projects[job_scheduler][download][revision] = 9baaba6bebd34ad6842b1a5292d4d8b32dc9c65c

projects[hreflang][version] = 1.3

projects[hotjar][version] = 1.2

projects[i18n][version] = 1.15

projects[i18nviews][version] = 3.0-alpha1
projects[i18nviews][patch][] = https://www.drupal.org/files/issues/i18nviews-2245917-1-export-translatables-v1.patch

projects[icon][version] = 1.0-beta6

projects[image_link_formatter][version] = 1.1

projects[imageapi_optimize][version] = 1.3

projects[inline_entity_form][version] = 1.8

projects[interval][version] = 1.0

projects[ip2country][version] = 1.4

projects[jquery_colorpicker][version] = 1.3

projects[languageicons][version] = 1.1

projects[leaflet][version] = 1.4

projects[leaflet_more_maps][version] = 1.17

projects[less][version] = 4.0

projects[libraries][version] = 2.3

projects[link][version] = 1.5

projects[jsonlog][version] = 2.1

projects[logintoboggan][version] = 1.5

projects[mailchimp][version] = 3.4

projects[maillog][version] = 1.0-alpha1

projects[mailsystem][type] = module
projects[mailsystem][download][type] = git
projects[mailsystem][download][url] = https://git.drupal.org/project/mailsystem.git
projects[mailsystem][download][revision] = 966e13e7024a428e35dfc1e505ae6a774eb148a2

projects[manualcrop][version] = 1.7

projects[masonry][version] = 3.0-beta1

projects[masonry_views][version] = 3.0

projects[media][version] = 2.19

projects[media_colorbox][version] = 1.0-rc4

projects[menu_admin_per_menu][version] = 1.0
projects[menu_admin_per_menu][patch][] = https://www.drupal.org/files/issues/integrate-menu-translation-suport-2546214-1.patch

projects[menu_token][version] = 1.0-beta7

projects[message][version] = 1.12
projects[message][patch][] = https://www.drupal.org/files/issues/text-sanitized.patch

projects[metatag][version] = 1.25

projects[mimemail][version] = 1.0

projects[module_filter][version] = 2.1

projects[multiupload_filefield_widget][version] = 1.13

projects[multiupload_imagefield_widget][version] = 1.3

projects[override_node_options][version] = 1.13

projects[panels][version] = 3.9

projects[panels_everywhere][version] = 1.0-rc2

projects[panels_bootstrap_layouts][version] = 3.0

projects[panels_tabs][type] = module
projects[panels_tabs][download][type] = git
projects[panels_tabs][download][url] = https://git.drupal.org/project/panels_tabs.git
projects[panels_tabs][download][revision] = 2caec501daab91001712d153398df585ff6c238c
projects[panels_tabs][patch][] = https://www.drupal.org/files/issues/panels_tabs-back_button_support-821334-18.patch

projects[paragraphs][version] = 1.0-rc5
projects[paragraphs][patch][] = https://www.drupal.org/files/issues/paragraphs-ajax.2680101.1.patch
projects[paragraphs][patch][] = https://www.drupal.org/files/issues/paragraphs-entity_translation-2452675-140.patch

projects[paragraphs_id][version] = 1.0-alpha2

projects[paragraphs_pack][version] = 1.0-alpha5

projects[pathauto][version] = 1.3

projects[pathauto_entity][version] = 1.0

projects[pet][type] = module
projects[pet][download][type] = git
projects[pet][download][url] = https://git.drupal.org/project/pet.git
projects[pet][download][revision] = 3a42221335ecf717a6a538e431394afcd7f198c3
projects[pet][patch][] = https://www.drupal.org/files/issues/add-rule-state-and-allow-from-override-2879713-1.patch
projects[pet][patch][] = https://www.drupal.org/files/issues/pet-specify_entity_types_for_tokens-2612754-1.patch
projects[pet][patch][] = https://www.drupal.org/files/issues/multilanguage-support-2727733-6.patch
projects[pet][patch][] = patches/pet_active.patch

projects[plupload][version] = 1.7
; https://www.drupal.org/node/2106583
projects[plupload][patch][] = https://www.drupal.org/files/plupload-cannot-upload-with-not-php-stream-2106583-5.patch

projects[pm_existing_pages][version] = 1.4

projects[popup_field_group][version] = 1.1

projects[popup_message][version] = 1.2
projects[popup_message][patch][] = https://www.drupal.org/files/issues/popup_message-title-not-required-1854924-3.patch

projects[profile2][type] = module
projects[profile2][download][type] = git
projects[profile2][download][url] = https://git.drupal.org/project/profile2.git
projects[profile2][download][revision] = 9a05fc78b5c3c3deb9d41fb8202b523602c80a77
projects[profile2][patch][] = https://www.drupal.org/files/issues/profile2-entity_translation_support-1966640-25_0.patch

projects[publishcontent][version] = 1.3

projects[redirect][version] = 1.0-rc3

projects[references_dialog][version] = 1.0-beta2
projects[references_dialog][patch][] = https://www.drupal.org/files/issues/references_dialog-zindex-2833782-1.patch
projects[references_dialog][patch][] = https://www.drupal.org/files/issues/references_dialog-create_users-2172321.patch
projects[references_dialog][patch][] = https://www.drupal.org/files/issues/creating_user_but-2238801-6.patch

projects[relation][version] = 1.2

projects[robotstxt][version] = 1.3

projects[role_delegation][version] = 1.1

projects[role_export][type] = module
projects[role_export][download][type] = git
projects[role_export][download][url] = https://git.drupal.org/project/role_export.git
projects[role_export][download][revision] = 0aef061b79a1dd0a949d504a238bf8b3f9f41b1b

projects[rules][version] = 2.11

projects[rules_conditional][version] = 1.0-beta2

projects[rrssb][type] = module
projects[rrssb][download][type] = git
projects[rrssb][download][url] = https://git.drupal.org/project/rrssb.git
projects[rrssb][download][revision] = 969397d5331003aa33869b53bd4ac94814f99852

projects[s3fs][version] = 2.4

projects[search_api][version] = 1.24

projects[search_api_db][version] = 1.6
projects[search_api_db][patch][] = https://www.drupal.org/files/issues/2219897-25--facets_for_empty_results.patch

projects[search_api_ranges][type] = module
projects[search_api_ranges][download][type] = git
projects[search_api_ranges][download][url] = https://git.drupal.org/project/search_api_ranges.git
projects[search_api_ranges][download][revision] = c769589f3aa90a7413401169ce520f891bee7e20

projects[search_api_sorts][version] = 1.7

projects[select2][version] = 1.x-dev

projects[seo_checklist][version] = 4.1

projects[services][version] = 3.20

projects[services_api_key_auth][version] = 1.3

projects[session_api][version] = 1.0-rc1

projects[slick][type] = module
projects[slick][download][type] = git
projects[slick][download][url] = https://git.drupal.org/project/slick.git
projects[slick][download][revision] = eba6411910e1adf2d027607f4dbeb294be9ccd4b

projects[slick_views][type] = module
projects[slick_views][download][type] = git
projects[slick_views][download][url] = https://git.drupal.org/project/slick_views.git
projects[slick_views][download][revision] = 96cf95a9a58ace07dd576f24d9183e83fd0b3032

projects[smtp][version] = 1.7

projects[strongarm][version] = 2.0

projects[subuser][version] = 2.0-alpha4

projects[table_element][version] = 1.0-beta4

projects[taxonomy_access_fix][version] = 2.4

projects[timefield][version] = 1.0-alpha2

projects[title][version] = 1.0-alpha9

projects[token][version] = 1.7

projects[userone][version] = 1.0-beta1

projects[uuid][version] = 1.2

projects[variable][version] = 2.5

projects[video][version] = 2.13

projects[video_embed_field][version] = 2.0-beta11

projects[view_unpublished][version] = 1.2

projects[views][version] = 3.20

projects[views_autocomplete_filters][type] = module
projects[views_autocomplete_filters][download][type] = git
projects[views_autocomplete_filters][download][url] = https://git.drupal.org/project/views_autocomplete_filters.git
projects[views_autocomplete_filters][download][revision] = 39443b0b95dbc50151ec0684ff91143a3fcbe6d2

projects[views_bootstrap][type] = module
projects[views_bootstrap][download][type] = git
projects[views_bootstrap][download][url] = https://git.drupal.org/project/views_bootstrap.git
projects[views_bootstrap][download][revision] = eee44d0f4f567aef22f7a4bdb7d64e1a715e6449

projects[views_contextual_filters_or][type] = module
projects[views_contextual_filters_or][download][type] = git
projects[views_contextual_filters_or][download][url] = https://git.drupal.org/project/views_contextual_filters_or.git
projects[views_contextual_filters_or][download][revision] = 42891a0b0057c9b71c6bf59f043cd27efd3ac43e

projects[views_data_export][version] = 3.2

projects[views_date_format_sql][version] = 3.1

projects[views_infinite_scroll][version] = 2.1

projects[views_load_more][version] = 1.5

projects[views_bulk_operations][version] = 3.5

projects[views_megarow][version] = 1.7

projects[views_php][version] = 1.0-alpha3

projects[votingapi][version] = 2.15

projects[vvf][version] = 1.2

projects[wysiwyg][version] = 2.5

projects[xautoload][version] = 5.7

projects[xmlsitemap][type] = module
projects[xmlsitemap][download][type] = git
projects[xmlsitemap][download][url] = https://git.drupal.org/project/xmlsitemap.git
projects[xmlsitemap][download][revision] = eaaf1dd750c17ccca9c58cf40d1cda815b77cbb2
projects[xmlsitemap][patch][] = https://www.drupal.org/files/issues/xmlsitemap-entity-integration-1461670-41.patch

projects[yoast_seo][type] = module
projects[yoast_seo][download][type] = git
projects[yoast_seo][download][url] = https://git.drupal.org/project/yoast_seo.git
projects[yoast_seo][download][revision] = 52cb19ed0281d40c0f5230747bc39d278a3b6a51

projects[zopim][version] = 1.2
projects[zopim][patch][] = https://www.drupal.org/files/issues/zopim-v2-full-script-2090201-5-D7.patch

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

; select2
libraries[select2][directory_name] = select2
libraries[select2][type] = library
libraries[select2][destination] = libraries
libraries[select2][download][type] = get
libraries[select2][download][url] = https://github.com/select2/select2/archive/4.0.3.zip

; ckeditor with plugins for asset module
; To update the link, go to http://ckeditor.com/builder and select the
; Full build of version 4 with the iFrame dialog field plugin, Icy Orange skin and all languages. (optimized version)
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][type] = library
libraries[ckeditor][destination] = libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = https://ckeditor.com/cke4/online-builder/releases/minified/4.9.2/icy_orange/0.9/ckeditor_4.9.2_c3cb8f2a46d0.zip

; colorbox
libraries[colorbox][directory_name] = colorbox
libraries[colorbox][type] = library
libraries[colorbox][destination] = libraries
libraries[colorbox][download][type] = get
libraries[colorbox][download][url] = https://github.com/jackmoore/colorbox/archive/1.x.zip

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
libraries[leaflet][download][url] = http://cdn.leafletjs.com/leaflet/v1.0.3/leaflet.zip

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
libraries[fullcalendar][download][url] = https://github.com/arshaw/fullcalendar/releases/download/v3.9.0/fullcalendar-3.9.0.zip

; scheduler
libraries[scheduler][directory_name] = fullcalendar-scheduler
libraries[scheduler][type] = library
libraries[scheduler][destination] = libraries
libraries[scheduler][download][type] = get
libraries[scheduler][download][url] = https://github.com/fullcalendar/fullcalendar-scheduler/releases/download/v1.9.4/fullcalendar-scheduler-1.9.4.zip

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
