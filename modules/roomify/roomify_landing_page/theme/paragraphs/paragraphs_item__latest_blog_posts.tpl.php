<?php

/**
 * @file
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (isset($field_cta_row_title)): ?>
    <div class="field-name-field-cta-row-title">
      <h1><?php print $field_cta_row_title[0]['value']; ?></h1>
    </div>
  <?php endif; ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $blog_posts; ?>
    <?php if ($link_to_blog_page): ?>
      <div class="roomify-link-to-blog-page">
        <?php print l(t('View Blog'), 'blog'); ?>
      </div>
    <?php endif; ?>
  </div>
</div>
