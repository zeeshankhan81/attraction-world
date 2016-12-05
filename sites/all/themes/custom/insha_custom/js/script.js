(function($, Drupal) {
  Drupal.behaviors.siteCustomJs = {
    attach: function(context, settings) {
     $('.views-exposed-form .form-wrapper.collapsible').addClass('collapsed');
    }
  };
}(jQuery, Drupal));