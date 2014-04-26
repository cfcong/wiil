<?php
/**
 * @file
 * jojo_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function jojo_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-jojo_about:http://jojo-haircosmetics-shop.de/jojo/company?lang=en
  $menu_links['menu-menu-jojo_about:http://jojo-haircosmetics-shop.de/jojo/company?lang=en'] = array(
    'menu_name' => 'menu-menu-jojo',
    'link_path' => 'http://jojo-haircosmetics-shop.de/jojo/company?lang=en',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the About page for Jojo.',
      ),
      'identifier' => 'menu-menu-jojo_about:http://jojo-haircosmetics-shop.de/jojo/company?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-jojo_products:http://jojo-haircosmetics-shop.de/jojo/products?lang=en
  $menu_links['menu-menu-jojo_products:http://jojo-haircosmetics-shop.de/jojo/products?lang=en'] = array(
    'menu_name' => 'menu-menu-jojo',
    'link_path' => 'http://jojo-haircosmetics-shop.de/jojo/products?lang=en',
    'router_path' => '',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Products page for Jojo.',
      ),
      'identifier' => 'menu-menu-jojo_products:http://jojo-haircosmetics-shop.de/jojo/products?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-jojo_promotions:http://jojo-haircosmetics-shop.de/jojo/?lang=en
  $menu_links['menu-menu-jojo_promotions:http://jojo-haircosmetics-shop.de/jojo/?lang=en'] = array(
    'menu_name' => 'menu-menu-jojo',
    'link_path' => 'http://jojo-haircosmetics-shop.de/jojo/?lang=en',
    'router_path' => '',
    'link_title' => 'Promotions',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Promotions page for Jojo.',
      ),
      'identifier' => 'menu-menu-jojo_promotions:http://jojo-haircosmetics-shop.de/jojo/?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-jojo_store-locator:http://jojo-haircosmetics-shop.de/jojo/?lang=en
  $menu_links['menu-menu-jojo_store-locator:http://jojo-haircosmetics-shop.de/jojo/?lang=en'] = array(
    'menu_name' => 'menu-menu-jojo',
    'link_path' => 'http://jojo-haircosmetics-shop.de/jojo/?lang=en',
    'router_path' => '',
    'link_title' => 'Store Locator',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Store Locator page for Jojo.',
      ),
      'identifier' => 'menu-menu-jojo_store-locator:http://jojo-haircosmetics-shop.de/jojo/?lang=en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Products');
  t('Promotions');
  t('Store Locator');


  return $menu_links;
}
