
<?php
/**
 * @file views-bootstrap-grid-plugin-style.tpl.php
 * Default simple view template to display Bootstrap Grids.
 *
 *
 * - $columns contains rows grouped by columns.
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 * - $column_type contains a number (default Bootstrap grid system column type).
 * - $class_prefix defines the default prefix to use for column classes.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title ?></h3>
<?php endif ?>

<div id="views-bootstrap-grid-<?php print $id ?>" class="<?php print $classes ?>">
  <?php if ($options['alignment'] == 'horizontal'): ?>
    <?php $i = 0; ?>
    <?php foreach ($items as $row): ?>
      <div class="row">
        <?php foreach ($row['content'] as $column): ?>
          <div class="<?php print $col_classes ?> col-sm-6">
            <?php isset($view->result[$i]->_entity_properties['entity object']->property_id) ? $pid = $view->result[$i]->_entity_properties['entity object']->property_id : $pid = 0;?>
              <?php if ($pid) : ?>
                <?php if (isset($_GET['bat_start_date'])): ?>
                  <?php $query['bat_start_date'] = $_GET['bat_start_date'];?>
                <?php endif; ?>
                <?php if (isset($_GET['bat_end_date'])): ?>
                  <?php $query['bat_end_date'] = $_GET['bat_end_date'];?>
                <?php endif; ?>
                <?php if (isset($_GET['group_size'])): ?>
                  <?php $query['group_size'] = $_GET['group_size'];?>
                <?php endif; ?>
                <?php if (isset($query)) :?>
                  <?php $query_string = (http_build_query($query,'=','&')); ?>
                  <div class="property-row">
                    <a href="<?php print url('listing/' . $pid) . '?' . $query_string; ?>">
                <?php else : ?>
                  <div class="property-row">
                    <a href="/<?php print url('listing/' . $pid); ?>">
                <?php endif; ?>

              <?php endif; ?>

              <?php print $column['content'] ?>

              <?php if($pid) : ?>
              <?php $i++; ?>
              </a></div>

            <?php endif; ?>
          </div>
        <?php endforeach ?>
      </div>
    <?php endforeach ?>

  <?php else: ?>

    <div class="row">
      <?php foreach ($items as $column): ?>
        <div class="col <?php print $class_prefix ?>-<?php print $column_type ?>">

          <?php $i = 0; ?>
          <?php foreach ($column['content'] as $row): ?>
            <?php isset($view->result[$i]->_entity_properties['entity object']->property_id) ? $pid = $view->result[$i]->_entity_properties['entity object']->property_id : $pid = 0;?>
            <?php if ($pid) : ?>
              <?php if (isset($_GET['bat_start_date'])): ?>
                <?php $query['bat_start_date'] = $_GET['bat_start_date'];?>
              <?php endif; ?>
              <?php if (isset($_GET['bat_end_date'])): ?>
                <?php $query['bat_end_date'] = $_GET['bat_end_date'];?>
              <?php endif; ?>
              <?php if (isset($_GET['group_size'])): ?>
                <?php $query['group_size'] = $_GET['group_size'];?>
              <?php endif; ?>
              <?php if (isset($query)) :?>
                <?php $query_string = (http_build_query($query,'=','&')); ?>
                <div class="property-row">
                  <a href="<?php print url('listing/' . $pid) . '?' . $query_string; ?>">
              <?php else : ?>
                <div class="property-row">
                  <a href="<?php print url('listing/' . $pid); ?>">
              <?php endif; ?>

            <?php endif; ?>

            <?php print $row['content'] ?>

            <?php if($pid) : ?>
              <?php $i++; ?>
              </a></div>
            <?php endif; ?>
          <?php endforeach ?>
        </div>
      <?php endforeach ?>
    </div>

  <?php endif ?>
</div>
