<?php
/**
 * @file
 * inspira_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function inspira_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-menu-inspira_about:http://www.inspira-cosmetics.de/en/about_us/
  $menu_links['menu-menu-inspira_about:http://www.inspira-cosmetics.de/en/about_us/'] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => 'http://www.inspira-cosmetics.de/en/about_us/',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the About page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_about:http://www.inspira-cosmetics.de/en/about_us/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-inspira_products:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/
  $menu_links['menu-menu-inspira_products:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/'] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => 'http://www.inspira-cosmetics.de/en/brands/suisse_absolue/',
    'router_path' => '',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Products page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_products:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-inspira_promotions:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ 
  $menu_links['menu-menu-inspira_promotions:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ '] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => 'http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ ',
    'router_path' => '',
    'link_title' => 'Promotions',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Promotions page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_promotions:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ ',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-inspira_store-locator:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ 
  $menu_links['menu-menu-inspira_store-locator:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ '] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => 'http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ ',
    'router_path' => '',
    'link_title' => 'Store Locator',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Store Locator page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_store-locator:http://www.inspira-cosmetics.de/en/brands/suisse_absolue/ ',
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
