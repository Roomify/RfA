<?php

/**
 * @file
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      $image = array(
        'style_name' => 'homepage_features',
        'path' => $featured_image['uri'],
      );
    ?>
    <div class="roomify-overlay-item paragraph-property ">
      <div class="hovereffect">
        <?php print theme('image_style', $image); ?>
        <div class="overlay">
          <?php if ($property_type == 'casa_property' || $property_type == 'locanda_property') { ?>
            <a class="overlay-link" href="<?php print url('listing/' . $property_id); ?>">
              <h2> <?php print $property_name; ?> </h2>
              <div class="overlay-info">
                 <div class="property-description"><?php print $description; ?></div>
                 <div class="property-types"><?php print $types; ?></div>
              </div>
            </a>
          <?php } else { ?>
            <a class="overlay-link" href="<?php print url('activity/' . $property_id); ?>">
              <h2> <?php print $property_name; ?> </h2>
              <div class="overlay-info">
                 <div class="property-description"><?php print $description; ?></div>
              </div>
            </a>
          <?php } ?>
        </div>
      </div>
    </div>
  </div>
</div>
