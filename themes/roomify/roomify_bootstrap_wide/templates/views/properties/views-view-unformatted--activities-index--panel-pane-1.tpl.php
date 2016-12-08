<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php $i = 0; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php isset($view->result[$i]->_entity_properties['entity object']->property_id) ? $pid = $view->result[$i]->_entity_properties['entity object']->property_id : $pid = 0;?>
  <?php if ($pid) : ?>
    <?php if (isset($_GET['activity_start_date'])): ?>
      <?php $query['bat_start_date'] = $_GET['bat_start_date'];?>
    <?php endif; ?>
    <?php if (isset($_GET['group_size'])): ?>
      <?php $query['group_size'] = $_GET['group_size'];?>
    <?php endif; ?>

    <?php if (isset($query)) :?>
      <?php $query_string = (http_build_query($query,'=','&')); ?>
      <div class="property-row">
        <a href="<?php print url('activity' . '/' . $pid) . '?' . $query_string;?>">
    <?php else : ?>
      <div class="property-row">
        <a href="<?php print url('activity' . '/' . $pid);?>">
    <?php endif; ?>

  <?php endif; ?>

  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>

  <?php if($pid) : ?>
    </a></div>
  <?php endif; ?>
  <?php $i++; ?>
<?php endforeach; ?>
