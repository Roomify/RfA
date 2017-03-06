(function($) {

Drupal.behaviors.roomify_bootstrap = {
  attach: function (context, settings) {
    // Toggle menu sidebar
    $('#close-sidebar-wrapper').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });

    // Toggle menu sidebar.
    $('.roomify-sidebar-menu-toggle').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });

    // Toggle menu sidebar
    $('#close-sidebar-icon').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });

    // Remove anchor that comes from tabs.
    $('.roomify-agency-dashboard .tabs-processed .ui-tabs-anchor').once().click(function(e) {
      return false;
    });

    // Top level menu links should be clickable.
    $('.navbar .dropdown > a').click(function(){
      location.href = this.href;
    });

    // Open Description tab if user clicks on 'See More'.
    $('.user-info #see-more-property-description').click(function(){
      $( '#ui-id-1' ).click();
    });

    // Header color on the locanda listing page should be changed.
    if ($('.page-locanda-listing header .header-row').length) {
      color = $('.page-locanda-listing header .header-row').css( "background-color" );
      color = color.replace(')', ', 0.85)').replace('rgb', 'rgba');
      $('.page-locanda-listing header .header-row').css("background-color", color);
    }
  }
};

})(jQuery);
