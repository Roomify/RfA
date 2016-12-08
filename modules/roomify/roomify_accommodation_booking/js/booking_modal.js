(function ($) {

/**
 * Roomify Booking Modal JS.
 */
Drupal.behaviors.roomifyBookingModal = {
  attach: function(context) {
    if ($('div.ctools-modal-content #bat-booking-form').length) {
      $('div#modalContent div.ctools-modal-content').addClass("roomify-accommodations-booking-form");
    }
  }
};

})(jQuery);
