(function ($) {

Drupal.behaviors.roomify_admin_js = {
  attach: function(context) {

    // Toggle menu sidebar.
    $("#close-sidebar-wrapper").once().click(function(e) {
      e.preventDefault();
      $("body").toggleClass("toggled");
    });

    // Toggle menu sidebar.
    $(".agency-sidebar-menu-toggle").once().click(function(e) {
      e.preventDefault();
      $("body").toggleClass("toggled");
    });

    // Disable 'My Account' link.
    $('.agency-user-menu .first.last a:first').once().click(function(e) {
      e.preventDefault();
      $(this).parent().children('ul').toggle('show');
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

})(jQuery);
