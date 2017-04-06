(function ($) {

Drupal.behaviors.roomify_admin_js = {
  attach: function(context) {
    // Toggle menu sidebar.
    $("#close-sidebar-wrapper").once().click(function(e) {
      e.preventDefault();
      $("body").toggleClass("toggled");
    });

    // Toggle menu sidebar
    $('#close-sidebar-icon').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });

    // Toggle menu sidebar.
    $(".roomify-sidebar-menu-toggle").once().click(function(e) {
      e.preventDefault();
      $("body").toggleClass("toggled");
    });

    // Add a class to the tabs to push right.
    if ($('.tabs.primary a').hasClass('pushed-right')) {
      $('.tabs.primary a.pushed-right').parent().addClass('pushed-right-tab');
    }

    // Toggle Title and description o images fields.
    $('.property-gallery-show-text').once().click(function(e) {
      e.preventDefault();
      $(this).parent().parent().find('.property-gallery-text').toggle('show');
      $(this).text($(this).text() == Drupal.t("Title and Description") ? Drupal.t("Close"): Drupal.t("Title and Description"));
    });

  }
};


Drupal.behaviors.roomifyAdminimalAccordian = {
  attach: function(context) {

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
