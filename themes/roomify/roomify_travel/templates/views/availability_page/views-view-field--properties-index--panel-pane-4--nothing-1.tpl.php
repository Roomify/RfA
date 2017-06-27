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

<?php $query = array(); ?>
<?php $rooms_anchor = ''; ?>

<?php if (isset($_GET['bat_start_date'])): ?>
  <?php $query['bat_start_date'] = $_GET['bat_start_date'];?>
<?php endif; ?>
<?php if (isset($_GET['bat_end_date'])): ?>
  <?php $query['bat_end_date'] = $_GET['bat_end_date'];?>
<?php endif; ?>
<?php if (isset($_GET['group_size'])): ?>
  <?php $query['group_size'] = $_GET['group_size'];?>
<?php endif; ?>

<?php if (!empty($query)) : ?>
  <?php $query_string = (http_build_query($query,'=','&')); ?>
  <!-- Add the Rooms Anchor if it's a Locanda Property -->
  <?php if (isset($row->_entity_properties['entity object']->type) && $row->_entity_properties['entity object']->type == 'locanda_property') : ?>
    <?php $rooms_anchor = 'property-types'; ?>
  <?php endif; ?>
<?php endif; ?>


<?php $link = l(t('Details'),  'listing' . '/' . $row->_entity_properties['property_id'] , array('attributes' => array('class' => 'book-now btn btn-default btn-primary'),'html' => true, 'query' => $query, 'fragment' => $rooms_anchor)); ?>

<?php print $output; ?>
<?php print $link; ?>
