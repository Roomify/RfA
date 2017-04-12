(function($) {

Drupal.behaviors.roomifyTravelScripts = {
  attach: function (context, settings) {

    $('ul.nav li.dropdown').hover(function() {
      $(this).find('.dropdown-menu').stop(true, true).delay(50).fadeIn(200);
    }, function() {
      $(this).find('.dropdown-menu').stop(true, true).delay(50).fadeOut(200);
    });

    // Toggle menu sidebar
    $('#close-sidebar-icon').once().click(function(e) {
      e.preventDefault();
      $('body').toggleClass('toggled');
    });
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

    // Top level menu links should be clickable.
    $('.navbar .dropdown > a').click(function(){
      location.href = this.href;
    });
 
    // Open Rooms tab after the availability search.
    var hash = window.location.hash.substring(1);
    if (hash == 'property-types') {
      $tabParent = $("[id='" + hash + "']").parent();
      $arr =  $tabParent[0]['id'].split("-");
      $id = $arr[3];
      // Get the index of this tab
      tabIndex = $("li").index($tabParent);
      // Open the appropriate tab
      $('#ui-id-' + $id).click();

      document.getElementById('property-types').scrollIntoView();
    }

    // Open Description tab if user clicks on 'See More'.
    $('.user-info #see-more-property-description').click(function(){
      $( '#ui-id-1' ).click();
    });

    // Hide overlay of slides without a title or a description.
    $('.page-listing .slide__overlay').each(function(i, obj) {
      if ($(this).children('.title:empty').length && $(this).children('.description:empty').length) {
        $(this).closest('.slide__caption').hide();
      }
    });

    // Add an animation based on opacity.
    $('#roomify-main-menu-overlay .closebtn').once().click(function(e) {
      $('#roomify-main-menu-overlay').css('opacity', '0');
    });
    $('.roomify-site-menu .navbar-toggle').once().click(function(e) {
      $('#roomify-main-menu-overlay').css('opacity', '1');
    });

    // Place hamburger and user icons in the center of the header.
    var headerHeight = $('.roomify-header').outerHeight();
    var hamburgerHeight = $('.roomify-header .roomify-site-menu .inner').outerHeight();
    $('.roomify-header .roomify-site-menu').css('top', (headerHeight - hamburgerHeight)/2 );
    $('.roomify-header .roomify-user-menu').css('top', (headerHeight - 28)/2);

    $('.page-availability-search .panel-sl-left-content-wrapper .panel_sl_left .panel-pane.pane-block .pane-title').on('click', function(event) {
      $(this).toggleClass('hidden-content');
      $(this).parent().children('.pane-content').toggle('hide');
    });
  }
};

Drupal.behaviors.roomifyTravelReadMoreElements = {
  attach: function (context, settings) {

    $('.page-listing .view-property-reviews .comment').readmore({
      speed: 75,
      collapsedHeight: 50,
      moreLink: '<a class="collapse-element-link" href="#">' + Drupal.t('Read more') + '</a>',
      lessLink: '<a class="collapse-element-link" href="#">' + Drupal.t('Read less') + '</a>',
    });
    // If the user has another tab open as default we should recreate the readmore.
    tabParent = $('#property-reviews-tab').parent();
    $(tabParent).click(function() {
      $('.page-listing .view-property-reviews .comment').readmore({
        speed: 75,
        collapsedHeight: 50,
        moreLink: '<a class="collapse-element-link" href="#">' + Drupal.t('Read more') + '</a>',
        lessLink: '<a class="collapse-element-link" href="#">' + Drupal.t('Read less') + '</a>',
      });
    });
  }
}

Drupal.behaviors.roomifyTravelAccordian = {
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
