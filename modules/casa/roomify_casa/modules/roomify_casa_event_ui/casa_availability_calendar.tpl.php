<?php

/**
 * @file
 */
?>

<div class="casa-availability-calendar <?php print $classes; ?> clearfix">

<?php if (!empty($links)) { ?>
  <div class="calendar-links clearfix">
    <?php foreach ($links as $link) { ?>
      <div><?php print $link; ?></div>
    <?php } ?>
  </div>
<?php } ?>

<div class="calendar-set clearfix">
  <div id='calendar' class="month1"></div>
</div>

</div>
