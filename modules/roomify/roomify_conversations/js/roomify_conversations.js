(function ($) {

Drupal.behaviors.roomifyConversations = {
  attach: function(context) {

    $('.expand-enquiry').click(function() {
      $('.enquiry').toggle();
      return false;
    });

  }
};

})(jQuery);
