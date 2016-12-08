<?php

/**
 * @file
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <div class="roomify-overlay-item roomify-area-item">
      <div class="hovereffect">
        <?php if (!empty($image)) : ?>
          <?php print theme('image_style', $image); ?>
        <?php endif; ?>
        <div class="overlay">
          <a class="overlay-link" href="<?php print $path;?>">
            <h2> <?php print $name; ?> </h2>
            <div class="overlay-info">
               <?php print $info ?>
            </div>
          </a>
        </div>
      </div>
    </div>
  </div>
</div>
