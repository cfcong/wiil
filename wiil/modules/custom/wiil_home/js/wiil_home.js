(function ($) {
  Drupal.behaviors.wiil_home = {
    attach: function (context, settings) {
    	$('.brand_img').hover(
    		function() {
    			$(this).next().attr('style', 'background-color: transparent');
    		},
    		function() {
    			$(this).next().attr('style', 'background-color: lightgrey');
    		}
    	);
    }
  };
})(jQuery);