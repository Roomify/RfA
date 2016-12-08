(function ($) {
// define object
Drupal.CasaPricing = Drupal.CasaPricing || {};
Drupal.CasaPricing.Modal = Drupal.CasaPricing.Modal || {};

$(document).ready(function () {
  $(document).on('click', '.fc-resource-area tr', function () {
    var resourceId = $(this).attr('data-resource-id');
    if (resourceId != undefined && resourceId.match(/^S[0-9]+$/)) {
      Drupal.CasaPricing.Modal(this, resourceId.replace('S', ''));
    }
  });

  $(document).on('mouseenter', '.fc-resource-area tr', function () {
    var resourceId = $(this).attr('data-resource-id');
    if (resourceId != undefined && resourceId.match(/^S[0-9]+$/)) {
      $(this).toggleClass('show-edit');
    }
  });

  $(document).on('mouseleave', '.fc-resource-area tr', function () {
    var resourceId = $(this).attr('data-resource-id');
    if (resourceId != undefined && resourceId.match(/^S[0-9]+$/)) {
      $(this).toggleClass('show-edit');
    }
  });
});

Drupal.behaviors.casa_pricing = {
  attach: function(context) {
    $.datepicker.setDefaults({
      onChangeMonthYear: function() {
        instance = $(this).data("datepicker");

        setTimeout(function() {
          $('.ui-datepicker').addClass('rich-popup');

          $('.ui-datepicker td > *').each(function (idx, elem) {
            var date = $(this).parent().attr('data-year') + '-' + (parseInt($(this).parent().attr('data-month')) + 1) + '-' + (idx + 1);

            var price = '';
            if (instance.settings.prices[date] != undefined) {
              price = instance.settings.prices[date];
            }

            $(this).parent().append('<span class="price">' + price + '</span>');
          });

        }, 10);
      },
      beforeShow: function() {
        // Prevent a negative date range from being selected by updating the
        // end date popup's minDate to the specified start date.
        instance = $(this).data("datepicker");
        if (instance.settings.startDateSelector !== undefined) {
          startDate = $(instance.settings.startDateSelector).val();
          format = instance.settings.dateFormat || $.datepicker._defaults.dateFormat;
          if (startDate !== undefined && startDate !== '') {

            // Parse start date using the datepicker format.
            date = $.datepicker.parseDate(format, startDate);

            if (instance.settings.endDateDays !== undefined) {
              date.setDate(date.getDate() + instance.settings.endDateDays);
            }

            // If this event type is of daily granularity, ensure that the end date
            // must be at least one day greater than the start date.
            if (Drupal.settings.bat.batDateGranularity == 'bat_daily') {
              date = new Date(date.valueOf()+864E5);
            }
            $(this).datepicker('option', 'minDate', date);
            $(this).datepicker('option', 'maxDate', Drupal.settings.datePopup[this.id].settings.maxDate);
          }
        }

        setTimeout(function() {
          $('.ui-datepicker').css('z-index', 12);

          $('.ui-datepicker').addClass('rich-popup');

          $('.ui-datepicker td > *').each(function (idx, elem) {
            var date = $(this).parent().attr('data-year') + '-' + (parseInt($(this).parent().attr('data-month')) + 1) + '-' + (idx + 1);

            var price = '';
            if (instance.settings.prices[date] != undefined) {
              price = instance.settings.prices[date];
            }

            $(this).parent().append('<span class="price">' + price + '</span>');
          });

        }, 10);
      }
    });
  }
};

/**
 * Initialize the modal box.
 */
Drupal.CasaPricing.Modal = function(element, $resource_id) {
  Drupal.CTools.Modal.show('bat-modal-style');

  // The base url (which doesn't change) is used to identify our ajax instance.
  var base = Drupal.settings.basePath + '?q=admin/casa/rates/manage/';

  // Create a drupal ajax object that points to the event form.
  var element_settings = {
    url : base + $resource_id,
    event : 'getResponse',
    progress : { type: 'throbber' }
  };

  // To make all calendars trigger correctly the getResponse event we need to
  // initialize the ajax instance with the global calendar table element.
  var calendars_table = $(element).closest('.fc-resource-area');

  // Create a new instance only once.
  // If it exists just override the url.
  if (Drupal.ajax[base] === undefined) {
    Drupal.ajax[base] = new Drupal.ajax(element_settings.url, calendars_table, element_settings);
  }
  else {
    Drupal.ajax[base].element_settings.url = element_settings.url;
    Drupal.ajax[base].options.url = element_settings.url;
  }
  // We need to trigger the AJAX getResponse manually because the
  // fullcalendar select event is not recognized by Drupal's AJAX.
  $(calendars_table).trigger('getResponse');
};

})(jQuery);
