(function ($) {

Drupal.behaviors.roomifyDashboardHelp = {
  attach: function(context) {
    $(document).ready(function() {
      window.setTimeout(launcher_ready, 100);
      function launcher_ready() {
        $('#launcher').ready(function () {
          if ($('#launcher').width() == null || $('#launcher').width() == 0) {
            window.setTimeout(launcher_ready, 100);
          }
          else {
            $('.help-icon').css('right', ($('#launcher').width() + 20) + 'px');
          }
        });
      };
    });
  }
};

})(jQuery);
