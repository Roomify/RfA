<?php

/**
 * @file
 */
?>

<?php if (!empty($offers)) {
  foreach ($offers as $offer) {
    print $offer;
  }
} ?>

<?php print render($current_search); ?>

<?php if ($featured_image !== FALSE) : ?>
  <div class="featured-image">
    <?php print theme('image_style', $featured_image); ?>
  </div>
<?php endif; ?>

<?php print render($form); ?>
