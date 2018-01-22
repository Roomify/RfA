<?php
/**
 * @file
 * Theme file to handle HTML5 output.
 *
 * Variables passed:
 * $width
 * $height
 * $files
 * $item
 * $autoplay
 * $autobuffering
 */
?>

<?php
if (!empty($item['thumbnailfile'])) {
  $poster = check_plain($item['thumbnailfile']->url);
  echo '<img src="' . $poster . '" style="display: none;" />';
}
?>

<video preload="auto" autoplay loop muted playsinline style="display: none;">
<?php
foreach ($files as $index => $file) {
  if (strncmp($file->filemime, 'video/', 6) !== 0) {
    continue;
  }

  $filepath = check_plain(file_create_url($file->uri));
?>
  <source src="<?php echo $filepath; ?>" />
<?php } ?>
</video>
