<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>

<?php $directory = drupal_get_path('theme', 'roomify_travel'); ?>
<!-- The overlay Menu -->
<div id="roomify-main-menu-overlay" class="roomify-overlay">
  <!-- Button to close the overlay navigation -->
  <a href="javascript:void(0)" class="closebtn" onclick="document.getElementById('roomify-main-menu-overlay').style.display = 'none';">&times;</a>

  <!-- Overlay content -->
  <div class="overlay-content">
    <?php 
      $main_menu = menu_tree_output(menu_tree_all_data('main-menu', NULL, 2));
      print drupal_render($main_menu);
    ?>
  </div>
</div>

<!-- Sidebar Content-->
<div id="sidebar-wrapper">
  <div class="sidebar-nav">
    <?php if (!empty($page['sidebar_toggle_menu'])): ?>
      <?php print render($page['sidebar_toggle_menu']); ?>
    <?php endif; ?>
  </div>
</div>
<!-- End Sidebar-->
<div id="close-sidebar-wrapper"></div>

<!-- Language Switcher -->
<?php if ($block = module_invoke('locale', 'block_view', 'language')) : ?>
  <div class="roomify-language-switcher">
    <?php print $block['content']; ?>
  </div>
<?php endif; ?>

<div id="wrap">
  <header id="navbar" role="banner" class="roomify-header <?php print $navbar_classes; ?>">
    <div class="container">
      <div class="navbar-header">
        <div class="roomify-site-menu">
          <div class="inner col-xs-1">
            <button type="button" class="navbar-toggle" onclick='document.getElementById("roomify-main-menu-overlay").style.display = "block";'>
              <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
              <span class="icon-bar"></span>
            </button>
          </div>
        </div>

        <div class="roomify-site-name">
          <div class="inner col-xs-10">
            <?php if ($logo): ?>
              <a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
              </a>
            <?php endif; ?>

            <?php if (!empty($site_name)): ?>
              <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
            <?php endif; ?>
          </div>
        </div>

        <div class="roomify-user-menu">
          <div class="inner col-xs-1">
          <!-- Link to open sidebar menu -->
            <span class="roomify-sidebar-link">
              <a class="roomify-sidebar-menu-toggle" href="javascript:void(0)">
                <!-- PRINT SVG USER ICON -->
                <?php print(file_get_contents($directory . '/assets/images/user.svg')); ?>
              </a>
            </span>
          </div>
        </div>

      </div>
    </div>
  </header>

  <div class="main-container <?php print $container_class; ?>">
    <div class="container">
      <header role="banner" id="page-header">
        <?php if (!empty($site_slogan)): ?>
          <p class="lead"><?php print $site_slogan; ?></p>
        <?php endif; ?>

        <?php print render($page['header']); ?>
      </header> <!-- /#page-header -->

      <div class="row">

        <?php if (!empty($page['sidebar_first'])): ?>
          <aside class="col-sm-3" role="complementary">
            <?php print render($page['sidebar_first']); ?>
          </aside>  <!-- /#sidebar-first -->
        <?php endif; ?>

        <section<?php print $content_column_class; ?>>
          <?php if (!empty($page['highlighted'])): ?>
            <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
            <div class="row">
              <h1 class="page-header"><?php print $title; ?></h1>
            </div>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
          <?php endif; ?>
          <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
          <?php endif; ?>
          <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <?php print render($page['content']); ?>
        </section>

        <?php if (!empty($page['sidebar_second'])): ?>
          <aside class="col-sm-3" role="complementary">
            <?php print render($page['sidebar_second']); ?>
          </aside>  <!-- /#sidebar-second -->
        <?php endif; ?>

      </div>
    </div>
  </div>
</div>

<?php if (!empty($page['footer'])): ?>
  <footer class="footer roomify-footer <?php print $container_class; ?>">
    <div class="container">
      <?php print render($page['footer']); ?>
    </div>
  </footer>
<?php endif; ?>
