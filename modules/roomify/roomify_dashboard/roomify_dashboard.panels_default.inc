<?php

/**
 * @file
 * roomify_dashboard.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function roomify_dashboard_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_manage_activity';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - Manage Activity';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Manage Activity';
  $display->uuid = '658a99e4-6d7c-4b6b-bbcb-71468ab192d2';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_manage_activity';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_manage_activity'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_manage_configuration';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - Manage Configuration';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Manage Configuration';
  $display->uuid = '068d670f-ce91-4ecd-93a8-49aceaee56bb';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_manage_configuration';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-928065e5-43c9-42a9-a05a-dcbc1c4b9dec';
  $pane->panel = 'middle';
  $pane->type = 'quick_setup';
  $pane->subtype = 'quick_setup';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify quick setup',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'quick-setup',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '928065e5-43c9-42a9-a05a-dcbc1c4b9dec';
  $display->content['new-928065e5-43c9-42a9-a05a-dcbc1c4b9dec'] = $pane;
  $display->panels['middle'][0] = 'new-928065e5-43c9-42a9-a05a-dcbc1c4b9dec';
  $pane = new stdClass();
  $pane->pid = 'new-bf69f759-8f9c-4d3b-801c-20ad8c9582de';
  $pane->panel = 'middle';
  $pane->type = 'manage_users';
  $pane->subtype = 'manage_users';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer users',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-users',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bf69f759-8f9c-4d3b-801c-20ad8c9582de';
  $display->content['new-bf69f759-8f9c-4d3b-801c-20ad8c9582de'] = $pane;
  $display->panels['middle'][1] = 'new-bf69f759-8f9c-4d3b-801c-20ad8c9582de';
  $pane = new stdClass();
  $pane->pid = 'new-69892792-f3ee-4757-b6c4-c38dc41ec893';
  $pane->panel = 'middle';
  $pane->type = 'manage_global_addons';
  $pane->subtype = 'manage_global_addons';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create commerce_product entities of bundle add_on',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-store',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '69892792-f3ee-4757-b6c4-c38dc41ec893';
  $display->content['new-69892792-f3ee-4757-b6c4-c38dc41ec893'] = $pane;
  $display->panels['middle'][2] = 'new-69892792-f3ee-4757-b6c4-c38dc41ec893';
  $pane = new stdClass();
  $pane->pid = 'new-28869fc8-427c-4f8f-b2c5-e84a16e161b0';
  $pane->panel = 'middle';
  $pane->type = 'configure_social_sharing';
  $pane->subtype = 'configure_social_sharing';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify_social_profiles',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-social-pages',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '28869fc8-427c-4f8f-b2c5-e84a16e161b0';
  $display->content['new-28869fc8-427c-4f8f-b2c5-e84a16e161b0'] = $pane;
  $display->panels['middle'][3] = 'new-28869fc8-427c-4f8f-b2c5-e84a16e161b0';
  $pane = new stdClass();
  $pane->pid = 'new-5598cdf6-0689-43ce-91e5-ccddb265e4dd';
  $pane->panel = 'middle';
  $pane->type = 'manage_social_feeds';
  $pane->subtype = 'manage_social_feeds';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify_social_feeds',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Roomify Social Feeds enabled',
          'php' => 'return module_exists(\'roomify_social_feeds\');
      ',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-social-feeds',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5598cdf6-0689-43ce-91e5-ccddb265e4dd';
  $display->content['new-5598cdf6-0689-43ce-91e5-ccddb265e4dd'] = $pane;
  $display->panels['middle'][4] = 'new-5598cdf6-0689-43ce-91e5-ccddb265e4dd';
  $pane = new stdClass();
  $pane->pid = 'new-39e47d92-bb86-47d6-b265-d8ba8bf5dec3';
  $pane->panel = 'middle';
  $pane->type = 'administer_footer';
  $pane->subtype = 'administer_footer';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify footer',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-footer',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '39e47d92-bb86-47d6-b265-d8ba8bf5dec3';
  $display->content['new-39e47d92-bb86-47d6-b265-d8ba8bf5dec3'] = $pane;
  $display->panels['middle'][5] = 'new-39e47d92-bb86-47d6-b265-d8ba8bf5dec3';
  $pane = new stdClass();
  $pane->pid = 'new-5e305a2d-f471-4ea1-a4f2-1419c6167ed5';
  $pane->panel = 'middle';
  $pane->type = 'configure_payment_methods';
  $pane->subtype = 'configure_payment_methods';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer payment methods',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-fees',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '5e305a2d-f471-4ea1-a4f2-1419c6167ed5';
  $display->content['new-5e305a2d-f471-4ea1-a4f2-1419c6167ed5'] = $pane;
  $display->panels['middle'][6] = 'new-5e305a2d-f471-4ea1-a4f2-1419c6167ed5';
  $pane = new stdClass();
  $pane->pid = 'new-8ee7c330-3463-436b-9448-2972b4d1c25a';
  $pane->panel = 'middle';
  $pane->type = 'configure_google_analytics';
  $pane->subtype = 'configure_google_analytics';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '8ee7c330-3463-436b-9448-2972b4d1c25a';
  $display->content['new-8ee7c330-3463-436b-9448-2972b4d1c25a'] = $pane;
  $display->panels['middle'][7] = 'new-8ee7c330-3463-436b-9448-2972b4d1c25a';
  $pane = new stdClass();
  $pane->pid = 'new-daf6dbcd-a6c4-477c-bda2-7ea2e2cff614';
  $pane->panel = 'middle';
  $pane->type = 'configure_terms_conditions';
  $pane->subtype = 'configure_terms_conditions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-terms-conditions',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'daf6dbcd-a6c4-477c-bda2-7ea2e2cff614';
  $display->content['new-daf6dbcd-a6c4-477c-bda2-7ea2e2cff614'] = $pane;
  $display->panels['middle'][8] = 'new-daf6dbcd-a6c4-477c-bda2-7ea2e2cff614';
  $pane = new stdClass();
  $pane->pid = 'new-42e98450-77b3-4ec4-a6be-cbae39b3baf6';
  $pane->panel = 'middle';
  $pane->type = 'global_booking_settings';
  $pane->subtype = 'global_booking_settings';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-booking-settings',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '42e98450-77b3-4ec4-a6be-cbae39b3baf6';
  $display->content['new-42e98450-77b3-4ec4-a6be-cbae39b3baf6'] = $pane;
  $display->panels['middle'][9] = 'new-42e98450-77b3-4ec4-a6be-cbae39b3baf6';
  $pane = new stdClass();
  $pane->pid = 'new-5a329b0f-589c-4fe6-aaba-f785da3d88ba';
  $pane->panel = 'middle';
  $pane->type = 'commerce_settings';
  $pane->subtype = 'commerce_settings';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'configure store',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-commerce-settings',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '5a329b0f-589c-4fe6-aaba-f785da3d88ba';
  $display->content['new-5a329b0f-589c-4fe6-aaba-f785da3d88ba'] = $pane;
  $display->panels['middle'][10] = 'new-5a329b0f-589c-4fe6-aaba-f785da3d88ba';
  $pane = new stdClass();
  $pane->pid = 'new-dc53d564-bd88-4021-b7e0-45a55e77fc37';
  $pane->panel = 'middle';
  $pane->type = 'global_site_settings';
  $pane->subtype = 'global_site_settings';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify global site settings',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-global-site-settings',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'dc53d564-bd88-4021-b7e0-45a55e77fc37';
  $display->content['new-dc53d564-bd88-4021-b7e0-45a55e77fc37'] = $pane;
  $display->panels['middle'][11] = 'new-dc53d564-bd88-4021-b7e0-45a55e77fc37';
  $pane = new stdClass();
  $pane->pid = 'new-c7847f38-6771-4b66-93b6-71925893a244';
  $pane->panel = 'middle';
  $pane->type = 'configure_channel_management';
  $pane->subtype = 'configure_channel_management';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'configure channel management',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-channel-management-settings',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'c7847f38-6771-4b66-93b6-71925893a244';
  $display->content['new-c7847f38-6771-4b66-93b6-71925893a244'] = $pane;
  $display->panels['middle'][12] = 'new-c7847f38-6771-4b66-93b6-71925893a244';
  $pane = new stdClass();
  $pane->pid = 'new-97afa7da-509c-4c0f-9006-56d597b3a255';
  $pane->panel = 'middle';
  $pane->type = 'manage_offers';
  $pane->subtype = 'manage_offers';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer offers',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-offers',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '97afa7da-509c-4c0f-9006-56d597b3a255';
  $display->content['new-97afa7da-509c-4c0f-9006-56d597b3a255'] = $pane;
  $display->panels['middle'][13] = 'new-97afa7da-509c-4c0f-9006-56d597b3a255';
  $pane = new stdClass();
  $pane->pid = 'new-f77ddcd1-d533-4658-aa45-af6f481af453';
  $pane->panel = 'middle';
  $pane->type = 'booking_notifications';
  $pane->subtype = 'booking_notifications';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-booking-notifications',
  );
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'f77ddcd1-d533-4658-aa45-af6f481af453';
  $display->content['new-f77ddcd1-d533-4658-aa45-af6f481af453'] = $pane;
  $display->panels['middle'][14] = 'new-f77ddcd1-d533-4658-aa45-af6f481af453';
  $pane = new stdClass();
  $pane->pid = 'new-74db927c-baf5-4dbb-b089-ba502a18719c';
  $pane->panel = 'middle';
  $pane->type = 'manage_global_customer_message';
  $pane->subtype = 'manage_global_customer_message';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify_customer_support',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Roomify Travel Theme',
          'php' => 'return variable_get(\'theme_default\', \'bartik\') == \'roomify_travel\' ? TRUE : FALSE;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-customer-message',
  );
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '74db927c-baf5-4dbb-b089-ba502a18719c';
  $display->content['new-74db927c-baf5-4dbb-b089-ba502a18719c'] = $pane;
  $display->panels['middle'][15] = 'new-74db927c-baf5-4dbb-b089-ba502a18719c';
  $pane = new stdClass();
  $pane->pid = 'new-ce695273-8dce-42bf-930d-9cfc611d1fce';
  $pane->panel = 'middle';
  $pane->type = 'manage_availability_search_form';
  $pane->subtype = 'manage_availability_search_form';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify availability form settings',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-availability-search-form',
  );
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'ce695273-8dce-42bf-930d-9cfc611d1fce';
  $display->content['new-ce695273-8dce-42bf-930d-9cfc611d1fce'] = $pane;
  $display->panels['middle'][16] = 'new-ce695273-8dce-42bf-930d-9cfc611d1fce';
  $pane = new stdClass();
  $pane->pid = 'new-a9cebb8e-85c8-4c57-ab6f-036feeadc2e8';
  $pane->panel = 'middle';
  $pane->type = 'manage_roomify_integrations';
  $pane->subtype = 'manage_roomify_integrations';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer roomify integrations',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'a9cebb8e-85c8-4c57-ab6f-036feeadc2e8';
  $display->content['new-a9cebb8e-85c8-4c57-ab6f-036feeadc2e8'] = $pane;
  $display->panels['middle'][17] = 'new-a9cebb8e-85c8-4c57-ab6f-036feeadc2e8';
  $pane = new stdClass();
  $pane->pid = 'new-4d1d9f67-cdf3-4d9d-b553-612c0e470382';
  $pane->panel = 'middle';
  $pane->type = 'enquiry_form_settings';
  $pane->subtype = 'enquiry_form_settings';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-enquiry-form-settings',
  );
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '4d1d9f67-cdf3-4d9d-b553-612c0e470382';
  $display->content['new-4d1d9f67-cdf3-4d9d-b553-612c0e470382'] = $pane;
  $display->panels['middle'][18] = 'new-4d1d9f67-cdf3-4d9d-b553-612c0e470382';
  $pane = new stdClass();
  $pane->pid = 'new-19328825-2276-4898-b8f3-59e3084e6392';
  $pane->panel = 'middle';
  $pane->type = 'manage_redirects';
  $pane->subtype = 'manage_redirects';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Module Exists',
          'php' => 'return module_exists(\'redirect\');',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer redirects',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '19328825-2276-4898-b8f3-59e3084e6392';
  $display->content['new-19328825-2276-4898-b8f3-59e3084e6392'] = $pane;
  $display->panels['middle'][19] = 'new-19328825-2276-4898-b8f3-59e3084e6392';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_manage_configuration'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_manage_content';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - Manage Content';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Manage Content';
  $display->uuid = '068d670f-ce91-4ecd-93a8-49aceaee56bb';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_manage_content';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6db8d18d-9bf4-4270-99db-c3cbc146bc32';
  $pane->panel = 'middle';
  $pane->type = 'manage_site_pages';
  $pane->subtype = 'manage_site_pages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content overview',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-site-pages',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6db8d18d-9bf4-4270-99db-c3cbc146bc32';
  $display->content['new-6db8d18d-9bf4-4270-99db-c3cbc146bc32'] = $pane;
  $display->panels['middle'][0] = 'new-6db8d18d-9bf4-4270-99db-c3cbc146bc32';
  $pane = new stdClass();
  $pane->pid = 'new-1dac02d2-69bb-4f4d-aac4-a252d1d2b03e';
  $pane->panel = 'middle';
  $pane->type = 'add_new_content';
  $pane->subtype = 'add_new_content';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create blog content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-new-content',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1dac02d2-69bb-4f4d-aac4-a252d1d2b03e';
  $display->content['new-1dac02d2-69bb-4f4d-aac4-a252d1d2b03e'] = $pane;
  $display->panels['middle'][1] = 'new-1dac02d2-69bb-4f4d-aac4-a252d1d2b03e';
  $pane = new stdClass();
  $pane->pid = 'new-d6a613be-d8a2-41ba-b49f-4beeb7409555';
  $pane->panel = 'middle';
  $pane->type = 'manage_featured_properties';
  $pane->subtype = 'manage_featured_properties';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'update featured_properties entityqueue',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Entityqueue moduule exists',
          'php' => 'return module_exists(\'entityqueue\');',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-featured-properties',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd6a613be-d8a2-41ba-b49f-4beeb7409555';
  $display->content['new-d6a613be-d8a2-41ba-b49f-4beeb7409555'] = $pane;
  $display->panels['middle'][2] = 'new-d6a613be-d8a2-41ba-b49f-4beeb7409555';
  $pane = new stdClass();
  $pane->pid = 'new-79c5e3ab-418c-4caf-86ad-fa3849ca24fe';
  $pane->panel = 'middle';
  $pane->type = 'manage_featured_areas';
  $pane->subtype = 'manage_featured_areas';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Entityqueue module exists',
          'php' => 'return module_exists(\'entityqueue\');',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'update featured_areas entityqueue',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-featured-areas',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '79c5e3ab-418c-4caf-86ad-fa3849ca24fe';
  $display->content['new-79c5e3ab-418c-4caf-86ad-fa3849ca24fe'] = $pane;
  $display->panels['middle'][3] = 'new-79c5e3ab-418c-4caf-86ad-fa3849ca24fe';
  $pane = new stdClass();
  $pane->pid = 'new-504ba91e-41d6-4179-8c16-536ca59daaf9';
  $pane->panel = 'middle';
  $pane->type = 'manage_main_menu';
  $pane->subtype = 'manage_main_menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer menu',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '504ba91e-41d6-4179-8c16-536ca59daaf9';
  $display->content['new-504ba91e-41d6-4179-8c16-536ca59daaf9'] = $pane;
  $display->panels['middle'][4] = 'new-504ba91e-41d6-4179-8c16-536ca59daaf9';
  $pane = new stdClass();
  $pane->pid = 'new-7f4d6b5a-bb9f-464a-a04d-7a71bc6530df';
  $pane->panel = 'middle';
  $pane->type = 'manage_email_templates';
  $pane->subtype = 'manage_email_templates';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer previewable email templates',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'email-templates',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7f4d6b5a-bb9f-464a-a04d-7a71bc6530df';
  $display->content['new-7f4d6b5a-bb9f-464a-a04d-7a71bc6530df'] = $pane;
  $display->panels['middle'][5] = 'new-7f4d6b5a-bb9f-464a-a04d-7a71bc6530df';
  $pane = new stdClass();
  $pane->pid = 'new-844c2d8f-abf6-4f2d-9187-facb3f1b8efd';
  $pane->panel = 'middle';
  $pane->type = 'manage_contact_form_submissions';
  $pane->subtype = 'manage_contact_form_submissions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view any entityform',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-entityforms',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '844c2d8f-abf6-4f2d-9187-facb3f1b8efd';
  $display->content['new-844c2d8f-abf6-4f2d-9187-facb3f1b8efd'] = $pane;
  $display->panels['middle'][6] = 'new-844c2d8f-abf6-4f2d-9187-facb3f1b8efd';
  $pane = new stdClass();
  $pane->pid = 'new-7db426a5-6360-4d79-a9e7-4819d0553089';
  $pane->panel = 'middle';
  $pane->type = 'manage_taxonomy';
  $pane->subtype = 'manage_taxonomy';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit terms in 1',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-taxonomies',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '7db426a5-6360-4d79-a9e7-4819d0553089';
  $display->content['new-7db426a5-6360-4d79-a9e7-4819d0553089'] = $pane;
  $display->panels['middle'][7] = 'new-7db426a5-6360-4d79-a9e7-4819d0553089';
  $pane = new stdClass();
  $pane->pid = 'new-4f116ae6-0c4b-42ba-b065-4de7f9c60fed';
  $pane->panel = 'middle';
  $pane->type = 'manage_users_profiles';
  $pane->subtype = 'manage_users_profiles';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer profiles',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-profile',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4f116ae6-0c4b-42ba-b065-4de7f9c60fed';
  $display->content['new-4f116ae6-0c4b-42ba-b065-4de7f9c60fed'] = $pane;
  $display->panels['middle'][8] = 'new-4f116ae6-0c4b-42ba-b065-4de7f9c60fed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_manage_content'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_manage_groups';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - Manage Groups';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a72725f3-2765-4d78-b1c9-811b010dd006';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_manage_groups';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51e5d8f6-18ae-4e81-8b6b-bf5362c0e08d';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'roomify_groups';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '51e5d8f6-18ae-4e81-8b6b-bf5362c0e08d';
  $display->content['new-51e5d8f6-18ae-4e81-8b6b-bf5362c0e08d'] = $pane;
  $display->panels['middle'][0] = 'new-51e5d8f6-18ae-4e81-8b6b-bf5362c0e08d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_manage_groups'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_manage_listings';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - Manage Listing(s)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
    ),
    'bottom' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Manage Listing(s)';
  $display->uuid = '068d670f-ce91-4ecd-93a8-49aceaee56bb';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_manage_listings';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9137507-7293-4c8c-908f-04afa59d98e9';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f9137507-7293-4c8c-908f-04afa59d98e9';
  $display->content['new-f9137507-7293-4c8c-908f-04afa59d98e9'] = $pane;
  $display->panels['bottom'][0] = 'new-f9137507-7293-4c8c-908f-04afa59d98e9';
  $pane = new stdClass();
  $pane->pid = 'new-8ffeffea-c47c-4076-a037-3cfe69a1c2cb';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8ffeffea-c47c-4076-a037-3cfe69a1c2cb';
  $display->content['new-8ffeffea-c47c-4076-a037-3cfe69a1c2cb'] = $pane;
  $display->panels['bottom'][1] = 'new-8ffeffea-c47c-4076-a037-3cfe69a1c2cb';
  $pane = new stdClass();
  $pane->pid = 'new-b0580cd8-a363-4f9a-b3cf-5789c72b2236';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b0580cd8-a363-4f9a-b3cf-5789c72b2236';
  $display->content['new-b0580cd8-a363-4f9a-b3cf-5789c72b2236'] = $pane;
  $display->panels['bottom'][2] = 'new-b0580cd8-a363-4f9a-b3cf-5789c72b2236';
  $pane = new stdClass();
  $pane->pid = 'new-c1540d0a-81a4-4053-b5a2-05444a2f8072';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties-dashboard_properties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1540d0a-81a4-4053-b5a2-05444a2f8072';
  $display->content['new-c1540d0a-81a4-4053-b5a2-05444a2f8072'] = $pane;
  $display->panels['left'][0] = 'new-c1540d0a-81a4-4053-b5a2-05444a2f8072';
  $pane = new stdClass();
  $pane->pid = 'new-59251ef4-2fae-4692-9d2e-2450d3902c55';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '59251ef4-2fae-4692-9d2e-2450d3902c55';
  $display->content['new-59251ef4-2fae-4692-9d2e-2450d3902c55'] = $pane;
  $display->panels['right'][0] = 'new-59251ef4-2fae-4692-9d2e-2450d3902c55';
  $pane = new stdClass();
  $pane->pid = 'new-4aa067b3-ce90-42e4-b337-f07cf8c34c1a';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_conversations-owner_conversations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4aa067b3-ce90-42e4-b337-f07cf8c34c1a';
  $display->content['new-4aa067b3-ce90-42e4-b337-f07cf8c34c1a'] = $pane;
  $display->panels['right'][1] = 'new-4aa067b3-ce90-42e4-b337-f07cf8c34c1a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_manage_listings'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_manage_travel';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - Manage Travel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Manage Travel';
  $display->uuid = '068d670f-ce91-4ecd-93a8-49aceaee56bb';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_manage_travel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c2b0f52f-f4d8-4f81-906e-dcf0b02c36cc';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_guest_stays-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid_1' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2b0f52f-f4d8-4f81-906e-dcf0b02c36cc';
  $display->content['new-c2b0f52f-f4d8-4f81-906e-dcf0b02c36cc'] = $pane;
  $display->panels['bottom'][0] = 'new-c2b0f52f-f4d8-4f81-906e-dcf0b02c36cc';
  $pane = new stdClass();
  $pane->pid = 'new-ab075b92-2ea0-4158-8b7f-829e219db544';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_conversations-guest_conversations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'conversation_guest_user_ref_target_id' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab075b92-2ea0-4158-8b7f-829e219db544';
  $display->content['new-ab075b92-2ea0-4158-8b7f-829e219db544'] = $pane;
  $display->panels['left'][0] = 'new-ab075b92-2ea0-4158-8b7f-829e219db544';
  $pane = new stdClass();
  $pane->pid = 'new-4d451995-a3d1-4a52-aa01-5e0dfd80031f';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'favorite_properties-block_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'favorites_view_access',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4d451995-a3d1-4a52-aa01-5e0dfd80031f';
  $display->content['new-4d451995-a3d1-4a52-aa01-5e0dfd80031f'] = $pane;
  $display->panels['right'][0] = 'new-4d451995-a3d1-4a52-aa01-5e0dfd80031f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_manage_travel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard_welcome';
  $mini->category = '';
  $mini->admin_title = 'Dashboard - My Account';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Account Settings';
  $display->uuid = '068d670f-ce91-4ecd-93a8-49aceaee56bb';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard_welcome';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b94b4f6f-c957-4951-b964-dbce245bd4a3';
  $pane->panel = 'middle';
  $pane->type = 'your_account';
  $pane->subtype = 'your_account';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-account',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b94b4f6f-c957-4951-b964-dbce245bd4a3';
  $display->content['new-b94b4f6f-c957-4951-b964-dbce245bd4a3'] = $pane;
  $display->panels['middle'][0] = 'new-b94b4f6f-c957-4951-b964-dbce245bd4a3';
  $pane = new stdClass();
  $pane->pid = 'new-88df49ef-a368-491e-b1b7-98fa342c1f57';
  $pane->panel = 'middle';
  $pane->type = 'property_owner_profile';
  $pane->subtype = 'property_owner_profile';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit own property_owner profile',
        ),
        'context' => 'requiredcontext_user_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-profile',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '88df49ef-a368-491e-b1b7-98fa342c1f57';
  $display->content['new-88df49ef-a368-491e-b1b7-98fa342c1f57'] = $pane;
  $display->panels['middle'][1] = 'new-88df49ef-a368-491e-b1b7-98fa342c1f57';
  $pane = new stdClass();
  $pane->pid = 'new-42ef107c-ab2f-453b-8eff-375ee79c4160';
  $pane->panel = 'middle';
  $pane->type = 'my_guest_profile';
  $pane->subtype = 'my_guest_profile';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'edit own guest profile',
        ),
        'context' => 'requiredcontext_user_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-profile',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '42ef107c-ab2f-453b-8eff-375ee79c4160';
  $display->content['new-42ef107c-ab2f-453b-8eff-375ee79c4160'] = $pane;
  $display->panels['middle'][2] = 'new-42ef107c-ab2f-453b-8eff-375ee79c4160';
  $pane = new stdClass();
  $pane->pid = 'new-b9989b6e-573d-4c14-b916-0dbbcb7bc8ed';
  $pane->panel = 'middle';
  $pane->type = 'logout';
  $pane->subtype = 'logout';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'manage-logout',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9989b6e-573d-4c14-b916-0dbbcb7bc8ed';
  $display->content['new-b9989b6e-573d-4c14-b916-0dbbcb7bc8ed'] = $pane;
  $display->panels['middle'][3] = 'new-b9989b6e-573d-4c14-b916-0dbbcb7bc8ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard_welcome'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'dashboard';
  $mini->category = '';
  $mini->admin_title = 'Dashboard';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'middle' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '20fe9837-d709-4737-af0b-1e80f706e764';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'dashboard';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5e8c5646-e41f-4572-98fa-80eca55aa284';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'properties-dashboard_properties';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-properties-tab"></span>Your Properties',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-properties',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e8c5646-e41f-4572-98fa-80eca55aa284';
  $display->content['new-5e8c5646-e41f-4572-98fa-80eca55aa284'] = $pane;
  $display->panels['top'][0] = 'new-5e8c5646-e41f-4572-98fa-80eca55aa284';
  $pane = new stdClass();
  $pane->pid = 'new-c5c041b4-926d-44c9-89a8-209c83dde263';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'conversations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_user_1',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-conversations-tab"></span>Conversations',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-conversations',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c5c041b4-926d-44c9-89a8-209c83dde263';
  $display->content['new-c5c041b4-926d-44c9-89a8-209c83dde263'] = $pane;
  $display->panels['top'][1] = 'new-c5c041b4-926d-44c9-89a8-209c83dde263';
  $pane = new stdClass();
  $pane->pid = 'new-ca4af337-73f4-4ba2-a2df-15172b0902f0';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_guest_stays-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'Is a Guest',
          'php' => 'global $user;
  return in_array(\'guest\', $user->roles);',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'arguments' => array(
      'uid_1' => '%user:uid',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-stays-tab"></span>My Stays',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-stays',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ca4af337-73f4-4ba2-a2df-15172b0902f0';
  $display->content['new-ca4af337-73f4-4ba2-a2df-15172b0902f0'] = $pane;
  $display->panels['top'][2] = 'new-ca4af337-73f4-4ba2-a2df-15172b0902f0';
  $pane = new stdClass();
  $pane->pid = 'new-e5acf8e5-2d72-4acb-95d7-58cb7ee5ef6d';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'bookings';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'requiredcontext_user_1',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-bookings-tab"></span>Bookings',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-bookings',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e5acf8e5-2d72-4acb-95d7-58cb7ee5ef6d';
  $display->content['new-e5acf8e5-2d72-4acb-95d7-58cb7ee5ef6d'] = $pane;
  $display->panels['top'][3] = 'new-e5acf8e5-2d72-4acb-95d7-58cb7ee5ef6d';
  $pane = new stdClass();
  $pane->pid = 'new-cbbdfb91-f894-4357-a338-cc6ca4644e11';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'reviews';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-reviews-tab"></span>Reviews',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'cbbdfb91-f894-4357-a338-cc6ca4644e11';
  $display->content['new-cbbdfb91-f894-4357-a338-cc6ca4644e11'] = $pane;
  $display->panels['top'][4] = 'new-cbbdfb91-f894-4357-a338-cc6ca4644e11';
  $pane = new stdClass();
  $pane->pid = 'new-d2851759-9d5b-4367-9bab-6bd877387e8a';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'favorite_properties-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span id="dashboard-favorites-tab"></span>Favorites',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd2851759-9d5b-4367-9bab-6bd877387e8a';
  $display->content['new-d2851759-9d5b-4367-9bab-6bd877387e8a'] = $pane;
  $display->panels['top'][5] = 'new-d2851759-9d5b-4367-9bab-6bd877387e8a';
  $pane = new stdClass();
  $pane->pid = 'new-c58443f0-5efd-440c-916a-c5b8bcbdc63d';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'roomify_groups';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'roomify_accommodations_group_dashboard exists',
          'php' => 'return module_exists(\'roomify_accommodations_group_dashboard\');',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '<span class="dashboard-group-tab"></span> Groups',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c58443f0-5efd-440c-916a-c5b8bcbdc63d';
  $display->content['new-c58443f0-5efd-440c-916a-c5b8bcbdc63d'] = $pane;
  $display->panels['top'][6] = 'new-c58443f0-5efd-440c-916a-c5b8bcbdc63d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['dashboard'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'conversations';
  $mini->category = '';
  $mini->admin_title = 'Conversations';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'default' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Conversations';
  $display->uuid = '84e9b88a-aa00-4cf6-9d0e-8dac99338e70';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'conversations';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ea2e6343-f037-4670-9cc4-85a3f1f68190';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_conversations-owner_conversations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Conversations as Owner',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ea2e6343-f037-4670-9cc4-85a3f1f68190';
  $display->content['new-ea2e6343-f037-4670-9cc4-85a3f1f68190'] = $pane;
  $display->panels['top'][0] = 'new-ea2e6343-f037-4670-9cc4-85a3f1f68190';
  $pane = new stdClass();
  $pane->pid = 'new-0d10d361-a026-431c-89a7-c41a5a370d89';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_conversations-guest_conversations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'conversation_guest_user_ref_target_id' => '%user:uid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Conversations as Guest',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0d10d361-a026-431c-89a7-c41a5a370d89';
  $display->content['new-0d10d361-a026-431c-89a7-c41a5a370d89'] = $pane;
  $display->panels['top'][1] = 'new-0d10d361-a026-431c-89a7-c41a5a370d89';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ea2e6343-f037-4670-9cc4-85a3f1f68190';
  $mini->display = $display;
  $export['conversations'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'bookings';
  $mini->category = '';
  $mini->admin_title = 'Bookings';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'select',
      'uid' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'bottom' => NULL,
      'top' => NULL,
    ),
    'top' => array(
      'style' => '-1',
    ),
    'middle' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd298efa5-e488-47b5-a1db-ced9f73a98cf';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'bookings';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4004d4ed-8c7c-43e9-8507-8a8121f92ca8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Future Bookings',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4004d4ed-8c7c-43e9-8507-8a8121f92ca8';
  $display->content['new-4004d4ed-8c7c-43e9-8507-8a8121f92ca8'] = $pane;
  $display->panels['middle'][0] = 'new-4004d4ed-8c7c-43e9-8507-8a8121f92ca8';
  $pane = new stdClass();
  $pane->pid = 'new-c105c145-21ec-4c30-9300-f62b0f23f295';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c105c145-21ec-4c30-9300-f62b0f23f295';
  $display->content['new-c105c145-21ec-4c30-9300-f62b0f23f295'] = $pane;
  $display->panels['middle'][1] = 'new-c105c145-21ec-4c30-9300-f62b0f23f295';
  $pane = new stdClass();
  $pane->pid = 'new-d6a51157-6567-42f8-898a-f75fefac287e';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view the availability global calendar',
        ),
        'context' => 'requiredcontext_user_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Global Calendar',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a class="button" href="/admin/bat/config/availability-calendar">Global Calendar</a>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd6a51157-6567-42f8-898a-f75fefac287e';
  $display->content['new-d6a51157-6567-42f8-898a-f75fefac287e'] = $pane;
  $display->panels['top'][0] = 'new-d6a51157-6567-42f8-898a-f75fefac287e';
  $pane = new stdClass();
  $pane->pid = 'new-33e395d7-fff0-4348-9217-0025358fe484';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_bookings-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '%user:uid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '33e395d7-fff0-4348-9217-0025358fe484';
  $display->content['new-33e395d7-fff0-4348-9217-0025358fe484'] = $pane;
  $display->panels['top'][1] = 'new-33e395d7-fff0-4348-9217-0025358fe484';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-33e395d7-fff0-4348-9217-0025358fe484';
  $mini->display = $display;

  $export['bookings'] = $mini;

  return $export;
}
