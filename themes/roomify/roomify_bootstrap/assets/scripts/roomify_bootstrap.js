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

Drupal.behaviors.roomifyBootstrapAccordian = {
  attach: function(context) {
  $('.pane-menu-roomify-dashboard-menu .dropdown-toggle').removeAttr('data-toggle');
  $('.pane-menu-roomify-dashboard-menu .dropdown-toggle').removeAttr('data-target');
  $('.pane-menu-roomify-dashboard-menu li').removeClass('dropdown');
  $('.pane-menu-roomify-dashboard-menu .dropdown-toggle').removeClass('dropdown-toggle');
  $('.pane-menu-roomify-dashboard-menu .dropdown-menu').removeClass('dropdown-menu');
  $('.region-sidebar-toggle-menu .pane-menu-roomify-dashboard-menu').attr('id','accordian');
  $("#accordian ul.menu .expanded > a").removeAttr("href").css("cursor","pointer");
  $("#accordian ul.menu .expanded > a").once().click(function(){
    activeItem = $(this).parent().parent().find('.active');
    activeItem.removeClass('active');
    $(this).closest('li').toggleClass('active');
    //slide up all the link lists
    $("#accordian ul ul").slideUp();
    //slide down the link list below the h3 clicked - only if its closed
    if(!$(this).next().is(":visible"))
    {
      $(this).next().slideDown();
    }
  });
 }
};

})(jQuery);
