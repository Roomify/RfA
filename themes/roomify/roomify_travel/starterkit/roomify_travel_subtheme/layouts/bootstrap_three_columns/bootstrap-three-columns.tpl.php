<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-content-left col-sm-4">
    <?php print $content['left']; ?>
  </div>
  <div class="panel-content-center col-sm-4">
    <?php print $content['center']; ?>
  </div>
  <div class="panel-content-right col-sm-4">
    <?php print $content['right']; ?>
  </div>
</div>
