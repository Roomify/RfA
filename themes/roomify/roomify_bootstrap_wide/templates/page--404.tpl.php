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

<div class="site-container">

<!-- Language Switcher -->
<div class="roomify-language-switcher">
  <?php $block = module_invoke('locale', 'block_view', 'language'); ?>
  <?php print $block['content']; ?>
</div>

<header role="banner">
	<div class="header-row">
		
      <?php if ($logo): ?>
        <div class="logo">
	        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
	          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
	        </a>
        </div>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
        <a class="header-name" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation']) || !empty($page['sidebar_toggle_menu'])): ?>
        <!-- Sidebar menu button -->
        <button type="button" class="roomify-sidebar-user-icon navbar-toggle sidebar-menu-toggle roomify-sidebar-menu-toggle" data-target=".navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
        </button>
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      <?php endif; ?>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation']) || !empty($page['sidebar_toggle_menu'])): ?>
      <div class="navbar navbar-collapse collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <!-- Link to open sidebar menu -->
          <span class="roomify-sidebar-link">
            <a class="roomify-sidebar-menu-toggle" href="javascript:void(0)">
              <!-- PRINT SVG USER ICON -->
              <?php print(file_get_contents($directory . '/assets/images/user.svg')); ?>
            </a>
          </span>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
	</div>
</header>


<div class="roomify-error-page 404-error-text">
	<div class="title"><?php print t('Page Not Found'); ?></div>
	<div class="text"><?php print t('We are sorry but what you are looking for is not here'); ?></div>
</div>	  
	  



<?php if (!empty($page['footer'])): ?>
  <footer class="footer">
		<div class="footer-row">
			<?php print render($page['footer']); ?>
		</div>
  </footer>
<?php  endif; ?>

</div>
