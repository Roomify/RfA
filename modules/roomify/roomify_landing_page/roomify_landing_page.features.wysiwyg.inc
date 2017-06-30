<?php

/**
 * @file
 * roomify_landing_page.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function roomify_landing_page_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: landing_page_text.
  $profiles['landing_page_text'] = array(
    'format' => 'landing_page_text',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
        ),
        'glyphicons' => array(
          'Glyphicons' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'roomify_adminimal_theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'forcePasteAsPlainText' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 0,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'version' => '4.7.1.08ffd39',
    ),
    'name' => 'formatlanding_page_text',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
