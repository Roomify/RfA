(function ($) {

Drupal.behaviors.roomifyConversations = {
  attach: function(context) {

    $('.expand-enquiry').click(function() {
      $('.enquiry').show();

      $('.expand-enquiry').parent().hide();
      $('.hide-enquiry').parent().show();

      return false;
    });

    $('.hide-enquiry').click(function() {
      $('.enquiry').hide();

      $('.expand-enquiry').parent().show();
      $('.hide-enquiry').parent().hide();

      return false;
    });

  }
};

})(jQuery);
