<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <?php if ($css): ?>
    <style type="text/css">
      <?php print $css; ?>
    </style>
    <?php endif; ?>
  </head>

  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="center">
      <div id="main">
        <table style="width:600px;">
          <div class="header" style="background-color: <?php print $header_bg;?>;padding: 30px;width: 600px;display: table;">
            <?php if (theme_get_setting('logo', variable_get('theme_default', NULL))) :?>
              <div class="site-logo">
                <img alt="logo" src="<?php print theme_get_setting('logo', variable_get('theme_default', NULL)); ?>" style="width: 30%;float: left;">
              </div>
            <?php else: ?>
              <div class="site-name">
                <div style="width: 30%;float: left;font-size:20px;color: <?php print $header_color;?>"><?php print variable_get('site_name', "Roomify"); ?></div>
              </div>
            <?php endif; ?>
          </div>
         
         <div class="content" style="font-size: 17px;line-height: 1.6em;color: #555555;padding: 40px 26px;width: 600px;display: table;border-left: 4px solid #ECECEC;border-right: 4px solid #ECECEC;border-top: 4px solid <?php print $header_border;?>;border-bottom: 4px solid <?php print $footer_border;?>;">
            <?php print $body; ?>
          </div>
          <div class="footer" style="padding: 40px 30px;width: 600px;text-align: center;display: table;background: <?php print $footer_bg;?>;">
            <div style="width: 100%;font-size:14px;text-align: center;color: <?php print $footer_color;?>"><?php print $footer_text; ?></div>
          </div>
        </table>
      </div>
    </div>
  </body>
</html>
