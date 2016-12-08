
<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>

<!-- DESCRIPTION -->
<?php $description = ''; ?>
<?php if (isset($row->field_field_area_short_description[0]['raw']['value'])) : ?>
	<?php $description = $row->field_field_area_short_description[0]['raw']['value']; ?>
<?php endif; ?>

<!-- URL TO TERM PAGE -->
<?php $url = drupal_get_path_alias('taxonomy/term/' . $row->tid); ?>

<div class="hovereffect">
 <?php print $output; ?>
   <div class="overlay">
    <a class="overlay-link" href="<?php print url($url);?>">
      <h2><?php print $row->taxonomy_term_data_name; ?></h2>
      <div class="overlay-info"><?php print $description; ?></div>
    </a>
  </div>
</div>
