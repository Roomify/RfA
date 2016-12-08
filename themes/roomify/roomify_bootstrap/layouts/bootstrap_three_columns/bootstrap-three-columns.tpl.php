<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row panel-content-left col-md-4">
    <?php print $content['left']; ?>
  </div>
  <div class="row panel-content-center col-md-4">
    <?php print $content['center']; ?>
  </div>
  <div class="row panel-content-right col-md-4">
    <?php print $content['right']; ?>
  </div>
</div>
