/**
 * @file
 * Used for color settings.
 */

(function ($) {
  Drupal.color = {
    callback: function(context, settings, form, farb, height, width) {
      var form =  $('#system-theme-settings .color-form');

      // Dashboard Form.
      if ( $('#roomify-dashboard-theme-colors-form .color-form').length ) {
        form = '#roomify-dashboard-theme-colors-form .color-form';
      }

      // header
      $('#preview header', form).css('background-color', $('#palette input[name="palette[header]"]', form).val());
    
      // Menu Links
      $('#preview header li a', form).css('color', $('#palette input[name="palette[links]"]', form).val());

      $("#preview header li a").hover(function() {
        $(this, form).css("color", $('#palette input[name="palette[hoverlinks]"]', form).val());
      },function(){
        $(this, form).css("color", $('#palette input[name="palette[links]"]', form).val());
      });

      // User Icon
      $('#preview header .roomify-sidebar-link svg', form).css('fill', $('#palette input[name="palette[links]"]', form).val());

      $("#preview header .roomify-sidebar-link svg").hover(function() {
        $(this, form).css("fill", $('#palette input[name="palette[hoverlinks]"]', form).val());
      },function(){
        $(this, form).css("fill", $('#palette input[name="palette[links]"]', form).val());
      });



      // footer
      $('#preview footer', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());

      $('#preview footer p', form).css('color', $('#palette input[name="palette[text]"]', form).val());
    }
  };

})(jQuery);
