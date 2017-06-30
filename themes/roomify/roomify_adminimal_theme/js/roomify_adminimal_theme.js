(function ($) {

Drupal.behaviors.roomify_admin_js = {
  attach: function(context) {
    // Toggle menu sidebar.
    $('#close-sidebar-wrapper').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });

    // Toggle menu sidebar
    $('#close-sidebar-icon').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });

    // Toggle menu sidebar.
    $('.roomify-sidebar-menu-toggle').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
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

    // Let's remove the wave effect class on links in tables that have a reference dialog.
    // It breaks the popup title.
    if (('table tbody td a.references-dialog-activate.waves-effect').length > 0) {
      $('table tbody td a.references-dialog-activate.waves-effect').removeClass('waves-effect');
    }
  }
};

Drupal.behaviors.roomifyAdminimalaccordion = {
  attach: function(context) {
    $('.region-sidebar-toggle-menu .pane-menu-roomify-dashboard-menu').attr('id', 'accordion');

    $('#accordion ul.menu .expanded > a').removeAttr('href').css('cursor', 'pointer');

    $('#accordion ul.menu .expanded > a').once().click(function(e) {
      $('#accordion ul ul').slideUp();

      if ($(e.target).parent().is('.active')) {
        $(this).parent().parent().find('.active').removeClass('active');
      }
      else {
        $(this).parent().parent().find('.active').removeClass('active');
        $(this).closest('li').toggleClass('active');
        $(this).next().slideDown();
      }
    });
  }
};

})(jQuery);
