<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-content-top">
    <?php print $content['top']; ?>
  </div>
  <div class="row first-section">
  	<div class="panel_sl_main_left col-md-8">
  		<div class="inner">
  			<?php print $content['main-left']; ?>
  		</div>
  	</div>
  	<div class="panel_sl_main_right col-md-4">
  		<div class="inner">
  			<?php print $content['main-right']; ?>
  		</div>
  	</div>
  </div>

  <div class="row second-section">
    <div class="panel_sl_main_center col-xs-12">
      <div class="inner">
        <?php print $content['main-center']; ?>
      </div>
    </div>
  </div>

  <div class="row third-section">
  	<div class="panel_sl_left col-md-8">
  		<div class="inner">
  			<?php print $content['left']; ?>
  		</div>
  	</div>
  	<div class="panel_sl_right col-md-4">
  		<div class="inner">
  			<?php print $content['right']; ?>
  		</div>
  	</div>
  </div>
  <div class="panel-content-bottom">
    <?php print $content['bottom']; ?>
  </div>
</div>
