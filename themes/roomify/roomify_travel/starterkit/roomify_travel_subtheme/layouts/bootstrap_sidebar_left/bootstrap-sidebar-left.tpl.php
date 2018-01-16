<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row panel-content-top">
    <?php print $content['top']; ?>
  </div>
  <div class="row panel-sl-left-content-wrapper">
    <div class="panel_sl_left col-md-4"><?php print $content['left']; ?></div>
    <div class="panel_sl_content col-md-8"> <?php print $content['right']; ?></div>
  </div>
  <div class="row panel-content-bottom">
    <?php print $content['bottom']; ?>
  </div>
</div>
