<?php

/**
 * @file
 */
?>

<?php print render($top_form); ?>

<br>

<div class="offers-pricing-calendar open_event_states <?php print $classes; ?> clearfix">

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

<br>

<?php print render($bottom_form); ?>
