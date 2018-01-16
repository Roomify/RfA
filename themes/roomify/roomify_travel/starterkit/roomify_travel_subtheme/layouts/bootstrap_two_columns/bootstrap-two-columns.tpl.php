<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row panel-content-left col-md-6">
    <?php print $content['left']; ?>
  </div>
  <div class="row panel-content-right col-md-6">
    <?php print $content['right']; ?>
  </div>
</div>
