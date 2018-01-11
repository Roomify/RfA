<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-content-top">
    <?php print $content['top']; ?>
  </div>
  <div class="panel-content-wrapper">
    <div class="panel_sl_content col-sm-12"><?php print $content['middle'];?></div>
    <div class="panel_sl_content-2 col-sm-12"><div class="inner"><?php print $content['middle-second'];?></div></div>
  </div>
  <div class="panel-content-bottom">
    <?php print $content['bottom']; ?>
  </div>
</div>
