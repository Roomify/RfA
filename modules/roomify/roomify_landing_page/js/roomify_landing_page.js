(function ($) {

Drupal.behaviors.roomifyLandingPage = {
  attach: function(context) {

    // Add a class if the unit has any add-ons options.
    $(".node-type-landing-page .agency-1-column-row").each(function() {
      if ($(this).has('.paragraphs-item-image-and-text').length || $(this).has('.paragraphs-item-linked-image-and-text').length ||
          $(this).has('.paragraphs-item-linked-image').length || $(this).has('.paragraphs-item-image').length || $(this).has('.paragraphs-item-slideshow').length || $(this).has('.paragraphs-item-location-map').length) {
        $(this).parent().addClass('one-column-with-image-item');
      }
    });

    $( ".paragraph-property" ).hover(
      function() {
        $( this ).addClass( "hovered" );
      }, function() {
        $( this ).removeClass( "hovered" );
      }
    );
  }
};

})(jQuery);
