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

    <?php foreach ($items as $row): ?>
      <?php foreach ($row['content'] as $key => $column): ?>
        <div class="<?php print $col_classes ?>">
          <?php print $column['content'] ?>
        </div>

        <?php /* Add clearfix divs if required */ ?>
        <?php if ($options['columns_horizontal'] == -1 && !empty($options['clear_columns']) && $key != 0): ?>
          <?php foreach ($clearfix as $screen => $count): ?>
            <?php if (($key + 1) % $count == 0): ?>
              <div class="clearfix visible-<?php print $screen; ?>-block"></div>
            <?php endif; ?>
          <?php endforeach; ?>
        <?php endif; ?>
      <?php endforeach ?>
    <?php endforeach ?>

  <?php else: ?>

    <div class="row">
      <?php foreach ($items as $column): ?>
        <div class="<?php print $col_classes ?>">
          <?php foreach ($column['content'] as $row): ?>
              <?php print $row['content'] ?>
          <?php endforeach ?>
        </div>
      <?php endforeach ?>
    </div>

  <?php endif ?>
</div>
