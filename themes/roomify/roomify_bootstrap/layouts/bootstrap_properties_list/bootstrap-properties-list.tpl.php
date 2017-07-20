<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-content-top">
    <?php print $content['top']; ?>
  </div>
  <div class="panel-content-wrapper">
    <div class="panel_sl_content col-sm-12"><?php print $content['middle'];?></div>
    <div class="highlights">
      <div class="panel_sl_highlight1 col-xs-12 col-sm-4"><div class="inner"><?php print $content['highlight1'];?></div></div>
      <div class="panel_sl_highlight2 col-xs-12 col-sm-4"><div class="inner"><?php print $content['highlight2'];?></div></div>
      <div class="panel_sl_highlight3 col-xs-12 col-sm-4"><div class="inner"><?php print $content['highlight3'];?></div></div>
    </div>
    <div class="panel_sl_content-2 col-sm-12"><div class="inner"><?php print $content['middle-second'];?></div></div>
  </div>
  <div class="panel-content-bottom">
    <?php print $content['bottom']; ?>
  </div>
</div>
