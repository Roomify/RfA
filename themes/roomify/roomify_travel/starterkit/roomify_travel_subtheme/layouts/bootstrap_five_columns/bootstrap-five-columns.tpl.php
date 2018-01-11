<div class="<?php print $classes ?> row" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-first-col-wrapper">
    <div class="panel_sl_first_col col-xs-4 col-md-15"> <?php print $content['first']; ?></div>
  </div>
  <div class="panel-second-col-wrapper">
    <div class="panel_sl_second_col col-xs-4 col-md-15"> <?php print $content['second']; ?></div>
  </div>
  <div class="panel-third-col-wrapper">
    <div class="panel_sl_third_col col-xs-4 col-md-15"> <?php print $content['third']; ?></div>
  </div>
  <div class="panel-fourth-col-wrapper">
    <div class="panel_sl_fourth_col col-xs-4 col-xs-offset-2 col-md-offset-0 col-md-15"> <?php print $content['fourth']; ?></div>
  </div>
  <div class="panel-fifth-col-wrapper">
    <div class="panel_sl_fifth_col col-xs-4 col-xs-offset-1 col-md-offset-0 col-md-15"> <?php print $content['fifth']; ?></div>
  </div>
</div>
