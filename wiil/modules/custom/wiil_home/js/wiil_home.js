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

(function ($) {
  Drupal.behaviors.wiil_home = {
    attach: function (context, settings) {
        $('.brand_img').hover(
            function() {
                var mainmenu = document.getElementsByClassName("menu");
                $(this).closest('mainmenu').css('visibility', 'visible');
            },
            function() {
                $(this).closest('mainmenu').css('visibility', 'hidden');
            }
        );
    }   
    };
})(jQuery);