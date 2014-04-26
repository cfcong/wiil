<?php
/**
 * @file
 * jojo_main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function jojo_main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-jojo.
  $menus['menu-menu-jojo'] = array(
    'menu_name' => 'menu-menu-jojo',
    'title' => 'Menu Jojo',
    'description' => 'Contains the following links for Jojo: About, Products, Promotions, Store Locator',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contains the following links for Jojo: About, Products, Promotions, Store Locator');
  t('Menu Jojo');


  return $menus;
}
