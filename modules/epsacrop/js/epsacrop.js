(function($) {
  Drupal.EPSACrop = {
    api: null,
    preset: null,
    delta: null,
    presets: {},
    init: false,
    dialog: function(type_name, field_name, bundle, delta, img, trueSize) {
      $('body').find('#EPSACropDialog').remove().end().append('<div title="' + Drupal.t("Cropping Image") + '" id="EPSACropDialog"></div>');

      // Translatables buttons
      var buttons = {};
      var saveLabel = Drupal.t("Apply crop");
      var cancelLabel = Drupal.t("Cancel");

      // Support multilingual sites with path prefixes. It's either this or
      // support for non-clean URL's, we can't have both.
      var pathPrefix = '?q=';
      if (Drupal.settings.pathPrefix !== undefined && Drupal.settings.pathPrefix != '') {
        pathPrefix = Drupal.settings.pathPrefix;
      }

      buttons[saveLabel] = function() {
        $.post(Drupal.settings.basePath + pathPrefix + 'crop/ajax/put/' + delta, {'coords': JSON.stringify(Drupal.EPSACrop.presets)});
        var field = field_name.replace(/_/g, '-');
        var welem = $('div[id*="' + field + '"]').eq(0);
        if (welem.find('.warning').size() == 0) {
          welem.prepend('<div class="tabledrag-changed-warning messages warning">' + Drupal.t("Changes made in image crops will not be saved until the form is submitted.") + '</div>');
        }
        $(this).dialog('close');
        $('#EPSACropDialog').remove();
      };
      buttons[cancelLabel] = function() {
        $(this).dialog('close');
        $('#EPSACropDialog').remove();
      };

      $('#EPSACropDialog').dialog({
        bgiframe: true,
        height: 600,
        width: 850,
        modal: true,
        draggable: false,
        resizable: false,
        overlay: {
          backgroundColor: '#000',
          opacity: 0.6
        },
        buttons: buttons,
        close: function() {
          $('#EPSACropDialog').remove();
        }
      }).load(Drupal.settings.basePath + pathPrefix + 'crop/dialog/' + type_name + '/' + field_name + '/' + bundle + '/' + delta, function() {
        try {
          var item = $('.epsacrop-presets-menu a[class=selected]');
          var preset = item.attr('id');
          var coords = item.attr('rel').split('x');
          var aspectRatio = item.attr('data-aspect-ratio');
          var bgcolor = item.attr('data-bgcolor');
          var bgopacity = parseFloat(item.attr('data-bgopacity'));

          var w = parseInt(coords[0]);
          var h = parseInt(coords[1]);

          Drupal.EPSACrop.preset = preset;
          if (Drupal.EPSACrop.delta === null || Drupal.EPSACrop.delta !== delta) {
            Drupal.EPSACrop.init = false;
          }
          Drupal.EPSACrop.delta = delta;

          presets = Drupal.EPSACrop.presets || {};
          if (Drupal.EPSACrop.init === false && $('#epsacrop-coords-data').val().length > 0) {
            presets = JSON.parse($('#epsacrop-coords-data').val()) || {};
            Drupal.EPSACrop.init = true;
          }

          if ((typeof presets[delta] == 'object') && (typeof presets[delta][preset] == 'object')) {
            var c = presets[delta][preset];
          }

          // Change the ratio into numeric
          if (aspectRatio.length > 0) {
            if (aspectRatio.split('/').length == 0) {
              ratios = aspectRatio.split('/');
              aspectRatio = parseInt(ratios[0]) / parseInt(ratios[1]);
            }
            else {
              aspectRatio = parseFloat(aspectRatio);
            }
          }

          var target = $('#epsacrop-target');
          target.attr({'src': img});
          var targetWait = $('<p>loading...</p>');
          target.parent().append(targetWait);
          target.load(function() {
            targetWait.hide();
            Drupal.EPSACrop.api = $.Jcrop('#' + target.attr('id'), {
              aspectRatio: (aspectRatio.length > 0) ? aspectRatio : (w / h),
              trueSize: trueSize,
              onSelect: Drupal.EPSACrop.update,
              bgColor: bgcolor,
              bgOpacity: bgopacity,
              keySupport: false // fix the jump scroll
            }); // $.Jcrop
            // animateTo, to avoid one bug from Jcrop I guess,
            // He doesn't calculate the scale with setSelect at the begining, so
            // I add animateTo after initate the API.
            Drupal.EPSACrop.api.animateTo(((typeof c == 'object') ? [c.x, c.y, c.x2, c.y2] : [0, 0, w, h]), function() {
              if (typeof presets[delta] == 'undefined') {
                presets[delta] = {};
              }
              if (typeof presets[delta][preset] == 'undefined') {
                presets[delta][preset] = Drupal.EPSACrop.api.tellSelect();
              }
            });
          });
          Drupal.EPSACrop.presets = presets || {};
        } catch (err) {
          alert(Drupal.t("Error on load : @error", {'@error': err.message}));
        }
      }); // end load
    }, // end dialog
    crop: function(preset) {
      $('.epsacrop-presets-menu a').removeClass('selected');
      $('.epsacrop-presets-menu a#' + preset).addClass('selected');

      var item = $('.epsacrop-presets-menu a[class=selected]');
      var coords = item.attr('rel').split('x');
      var aspectRatio = item.attr('data-aspect-ratio');
      var bgcolor = item.attr('data-bgcolor');
      var bgopacity = parseFloat(item.attr('data-bgopacity'));
      var presets = Drupal.EPSACrop.presets || {};
      var delta = Drupal.EPSACrop.delta;

      var w = parseInt(coords[0]);
      var h = parseInt(coords[1]);

      // Change the ratio in numeric
      if (aspectRatio.length > 0) {
        if (aspectRatio.split('/').length == 0) {
          ratios = aspectRatio.split('/');
          aspectRatio = parseInt(ratios[0]) / parseInt(ratios[1]);
        }
        else {
          aspectRatio = parseFloat(aspectRatio);
        }
      }

      Drupal.EPSACrop.preset = preset;

      if (typeof presets[delta] == 'object' && typeof presets[delta][preset] == 'object') {
        var c = presets[delta][preset];
        Drupal.EPSACrop.api.animateTo([c.x, c.y, c.x2, c.y2]);
      }
      else {
        Drupal.EPSACrop.api.animateTo([0, 0, w, h], function() {
          if (typeof presets[delta] == 'undefined') {
            presets[delta] = {};
          }
          if (typeof presets[delta][preset] == 'undefined') {
            presets[delta][preset] = Drupal.EPSACrop.api.tellSelect();
          }
        });
      }
      Drupal.EPSACrop.api.setOptions({
        aspectRatio: (aspectRatio.length > 0) ? aspectRatio : (w / h),
        bgColor: bgcolor,
        bgOpacity: bgopacity
      });
    },
    update: function(c) {
      var preset = Drupal.EPSACrop.preset;
      var delta = Drupal.EPSACrop.delta;
      var presets = Drupal.EPSACrop.presets || {};

      if (typeof presets[delta] != 'object') {
        presets[delta] = {};
      }

      presets[delta][preset] = c;
      Drupal.EPSACrop.presets = presets;
    }
  };
})(jQuery);
