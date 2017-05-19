(function ($) {
  Drupal.entity_edit_protection = {};
  var click = false; // Allow Submit/Edit button
  var edit = false; // Dirty form flag

  Drupal.behaviors.entityEditProtection = {
    attach: function (context) {
      // If they leave an input field, assume they changed it. The wildcard catches entity and entityform fields.
      $('[id*=form] :input').each(function () {
        $(this).blur(function () {
          edit = true;
        });
      });

      // Let all form submit buttons through. The wildcard catches entity and entityform fields.
      $('[id*=form] input[type="submit"]').each(function () {
        $(this).addClass('.entity-edit-protection-processed');
        $(this).click(function () {
          click = true;
        });
      });

      // Catch all links and buttons EXCEPT for '#' links
      $('a, button, input[type="submit"]:not(.entity-edit-protection-processed)').each(function () {
        $(this).click(function () {
          // return when a '#' link is clicked so as to skip the
          // window.onbeforeunload function
          if (edit && $(this).attr('href') != '#') {
            return 0;
          }
        });
      });

      $('ul.tabs a').click(function() {
        // Add CKEditor support
        if (typeof (CKEDITOR) != 'undefined' && typeof (CKEDITOR.instances) != 'undefined') {
          for (var i in CKEDITOR.instances) {
            if (CKEDITOR.instances[i].checkDirty()) {
              edit = true;
              break;
            }
          }
        }

        if (edit && !click) {
          var url = $(this).attr('href');

          $('<div></div>').appendTo('body')
          .html('<div><h2>' + Drupal.t('Your changes will be lost if you don’t Save') + '</h2></div>')
          .dialog({
            modal: true,
            title: Drupal.t('Warning'),
            zIndex: 10000,
            autoOpen: true,
            width: 'auto',
            resizable: false,
            dialogClass: 'no-close',
            buttons: [
            {
              text: Drupal.t('Continue without saving'),
              'id': 'btnContinue',
              click: function () {
                click = true;
                window.location.href = url;
              },
            },
            {
              text: Drupal.t('Cancel'),
              'id': 'btnCancel',
              click: function () {
                $(this).dialog('close');
              },
            }],
            close: function (event, ui) {
              $(this).remove();
            }
          });

          return false;
        }
      });
    }
  };
})(jQuery);
