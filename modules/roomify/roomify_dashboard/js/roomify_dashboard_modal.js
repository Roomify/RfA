(function ($) {

/**
 * Roomify Dashboard Modal JS.
 */
Drupal.behaviors.roomifyDashboardModal = {
  attach: function(context) {

    if ($('div.ctools-modal-content').length) {

      /**
       * Auto modal sizing stuff.
       */
      var winHeight = $(window).height();
      var winWidth = $(window).width();

      // Use the additional pixels for creating the width and height.
      $('div.ctools-modal-content', context).css({
        'min-width': Drupal.CTools.Modal.currentSettings.modalSize.width,
        'min-height': Drupal.CTools.Modal.currentSettings.modalSize.height,
        'width': 'auto',
        'height': 'auto',
        'max-height': (winHeight / 2) * 1.6 + 'px',
        'max-width': (winWidth / 2) * 1.6 + 'px',
        'overflow': 'none'
      });

      $('div#modal-content', context).css({
        'height': 'auto',
        'width': 'auto',
      });

      $('#modalContent').css({'width': 'auto'});
      $('div.ctools-modal-content .modal-content', context).css("overflow", "hidden");

      // Trigger a window resize after 1 milliseconds to ensure that the modal is centered properly.
      setTimeout(function() { $(window).trigger('resize'); }, 1);

      // Trigger a window resize after CKEditor is ready to ensure that the modal is centered properly.
      if (typeof(CKEDITOR) !== 'undefined') {
        CKEDITOR.on('instanceReady', function() { $(window).trigger('resize'); });
      }
    }
  }
};

})(jQuery);
