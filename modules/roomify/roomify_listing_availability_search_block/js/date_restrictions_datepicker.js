(function ($) {

  Drupal.behaviors.DateRestrictionsDatePopup = {
    attach: function (context) {
      $('.date-restrictions-datepicker').each(function() {
        if ((this.id in Drupal.settings.datePopup)) {
          Drupal.settings.datePopup[this.id].settings.beforeShowDay = dateRestrictionsCheckDate;
        }
      });
    }
  };

  function dateRestrictionsCheckDate(date) {
    var minDate = new Date($(this).datepicker("option", "minDate"));
    var maxDate = new Date($(this).datepicker("option", "maxDate"));

    // Extract and normalize date parts.
    var day = ('0' + date.getDate().toString()).slice(-2);
    var month = ('0' + (date.getMonth() + 1).toString()).slice(-2)
    var year = date.getFullYear();

    // We will work internally with yyyy-mm-dd.
    date = year + '-' + month + '-' + day;

    // Index for results cache.
    var index = year + '-' + month;

    var allowedValues = Drupal.settings.datePopup[this.id].settings.allowedValues[index];

    if (allowedValues != undefined) {
      if (allowedValues.indexOf(date) == -1) {
        if (minDate <= new Date(date) && (new Date(date) < maxDate || isNaN(maxDate))) {
          $(this).datepicker("option", "maxDate", date);
        }

        return [false, ''];
      }
      return [true, ''];
    }

    if (minDate <= new Date(date) && (new Date(date) < maxDate || isNaN(maxDate))) {
      $(this).datepicker("option", "maxDate", date);
    }

    return [false, ''];
  }

})(jQuery);
