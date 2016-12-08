<?php

/**
 * @file
 */
?>

<?php print render($top_form); ?>

<br>

<div class="locanda-pricing-calendar open_event_states <?php print $classes; ?> clearfix">

  <?php if (!empty($links)) { ?>
    <div class="calendar-links clearfix">
      <?php foreach ($links as $link) { ?>
        <div><?php print $link; ?></div>
      <?php } ?>
    </div>
  <?php } ?>

  <div class="calendar-set clearfix">
    <div id='calendar' class="month1"></div>
    <div class="help"><?php print t('Default prices have a yellow background. Edit a rate\'s default price by clicking on the rate name, and inputting a new default rate.'); ?><br><?php print t('Overridden prices have a green background. Override prices by selecting a date or range of dates in the calendar, and inputting the new rate. Prices will remain overriden when default rates are changed.'); ?></div>
  </div>

</div>

<br>

<?php print render($bottom_form); ?>
