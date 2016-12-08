(function($, Drupal) {
  Drupal.behaviors.siteCustomJs = {
    attach: function(context, settings) {
      $('.views-exposed-form .form-wrapper.collapsible').removeClass('collapsed');
      $('.region-sidebar div.block h2').click(function() {
      	$(this).parent().toggleClass('collapsed');
        $(this).parent().find('div.content').slideToggle();
      });
    }
  };
}(jQuery, Drupal));