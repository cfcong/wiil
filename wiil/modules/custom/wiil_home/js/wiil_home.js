(function ($) {
  Drupal.behaviors.wiil_home = {
    attach: function (context, settings) {
    	$('.brand').hover(
    		function() {
    			$(this).attr('style', 'background-color: transparent');
                if($(this).attr('id') == 'brand_1') {
                    $('#brand_1 .brand_menu').attr('style' , 'visibility: inherit');
                    $('#logo_inspira').attr('style', 'background-color: transparent');
                }
                else if($(this).attr('id') == 'brand_2') {
                    $('#brand_2 .brand_menu').attr('style' , 'visibility: inherit');
                    $('#logo_jojo').attr('style', 'background-color: transparent');
                }
    		},
    		function() {
    			$(this).attr('style', 'background-color: lightgrey');
                $('.brand_menu').attr('style' , 'visibility: hidden');
                $('#logo_inspira').attr('style', 'background-color: lightgrey');
                $('#logo_jojo').attr('style', 'background-color: lightgrey');
    		}
    	);
    }
  };
})(jQuery);

/* Google Analytics */
(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

ga('create', 'UA-50386548-1', 'gotpantheon.com');
ga('send', 'pageview');