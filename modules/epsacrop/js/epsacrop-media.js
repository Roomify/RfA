(function ($) {
//This behavior handles the EPSA Crop button on content create and edit
//It is necessary in order to have the button immediately after an image is added, because the file data is not available to PHP when the form is built
//The file information on newly-added images must be obtained via Ajax
Drupal.behaviors.EPSACropMediaElement = {
  attach: function (context, settings) {
    // For each widget (in case of multi-entry)
    $('.media-widget', context, settings).once('epsaCropLaunch', function () {
      var epsaDialogSettings = settings.epsacrop_dialog;
      var epsaButton = $('.manage-crop', this);
      // Handle media widgets with an unlimited cardinality.
      if ($(this).parent('td').length === 1) {
        epsaButton = $(this).parents('tr').find('.manage-crop');
      }
      var fidField = $('.fid', this); //fid field is added by the media module media_element_process()
      fidField.hide();

      // Hide the manage crop button if there is no file data yet.
      if (fidField.val() == 0) {
        epsaButton.hide();
      }

      // When someone clicks the link to manage EPSA crops
      epsaButton.bind('click', function (e) {
        e.preventDefault();
        var elem = $(this).parents('.media-widget');
        // Handle media widgets with an unlimited cardinality.
        if ($(this).parent('td').length === 1) {
          elem = $(this).parents('tr').find('.media-widget');
        }
        var fileInfo = epsaDialogSettings[elem.attr('id')];
        var fid = fidField.val();
        if(!fileInfo.fid || fileInfo.fid != fid) {
          //if no file info or file has been replaced, get if via ajax using the fid
          $.get(Drupal.settings.basePath +'?q=crop/ajaxinfo/' + fid, function(data) {
            if(data.url && data.height && data.width) {
              fileInfo.fid = fid;
              fileInfo.url = data.url;
              fileInfo.size = [ data.width, data.height ];
              Drupal.EPSACrop.dialog(fileInfo.entity_type, fileInfo.field_name, fileInfo.bundle, fileInfo.fid, fileInfo.url, fileInfo.size);
            }
          });
        }
        else {
          Drupal.EPSACrop.dialog(fileInfo.entity_type, fileInfo.field_name, fileInfo.bundle, fileInfo.fid, fileInfo.url, fileInfo.size);
        }
      });

      // Show or hide manage crop button if the field has a file or not.
      $('.fid', this).bind('change', function() {
        if ($(this).val() == 0) {
          epsaButton.hide();
        }
        else {
          epsaButton.show();
        }
      });

    });
  }
}

Drupal.behaviors.EPSACropMediaElement.helper = {
  attach: function (context, settings) {

  }
}

})(jQuery);
