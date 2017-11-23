<?php
/**
* @file
* Main page template.
*/
?>

<?php $path = explode('/', current_path());?>
<?php $is_dashboard = FALSE; ?>
<?php if (($path[0] == 'user') && (count($path) == 2)): ?>
  <?php $is_dashboard = TRUE; ?>
<?php endif; ?>


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


<div id="branding" class="clearfix">

  <?php $back_home = '<span class="glyphicon glyphicon-home"></span>' . l(t('Home'), '/') ?>
  <?php $back_dashboard = '<span class="glyphicon glyphicon-dashboard"></span>' . l(t('Dashboard'), 'user') ?>

  <?php print render($title_prefix); ?>
  <div class="roomify-administration-title">
    <h1 class="page-title"><?php print $back_home . ' - ' . $back_dashboard?></h1>
  </div>
  <?php print render($title_suffix); ?>

  <!-- AGENCY SIDEBAR MENU -->
  <div class="roomify-user-menu">
    <a class="roomify-sidebar-menu-toggle" href="javascript:void(0)"></a>
  </div>

</div>


<?php if ($messages): ?>
  <div id="console" class="clearfix roomify-admin-messages"><?php print $messages; ?></div>
<?php endif; ?>

<?php if ($primary_local_tasks && !$is_dashboard): ?>
  <div class="roomify-primary-local-tasks">
    <?php print render($primary_local_tasks); ?>
  </div>
<?php endif; ?>

<div id="page">
  <?php if ($title): ?>
    <?php if (!$is_dashboard): ?>
      <h1 class="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
  <?php endif; ?>
  <div id="content" class="clearfix">
    <div class="element-invisible"><a id="main-content"></a></div>

  <?php if ($page['help']): ?>
    <div id="help">
      <?php print render($page['help']); ?>
    </div>
  <?php endif; ?>

  <?php if (isset($page['content_before'])): ?>
    <div id="content-before">
      <?php print render($page['content_before']); ?>
    </div>
  <?php endif; ?>

  <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

  <div id="content-wrapper">

    <?php if (isset($page['sidebar_left'])): ?>
      <div id="sidebar-left">
        <?php print render($page['sidebar_left']); ?>
      </div>
    <?php endif; ?>

    <div id="main-content">
      <?php print render($page['content']); ?>
    </div>

    <?php if (isset($page['sidebar_right'])): ?>
      <div id="sidebar-right">
        <?php print render($page['sidebar_right']); ?>
      </div>
    <?php endif; ?>
  
  </div>

  <?php if (isset($page['content_after'])): ?>
    <div id="content-after">
      <?php print render($page['content_after']); ?>
    </div>
  <?php endif; ?>

  </div>

  <div id="footer">
    <?php print $feed_icons; ?>
  </div>

</div>
