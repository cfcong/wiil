<?php
/**
 * @file
 * inspira_main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function inspira_main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu-inspira.
  $menus['menu-menu-inspira'] = array(
    'menu_name' => 'menu-menu-inspira',
    'title' => 'Menu Inspira',
    'description' => 'Contains the following links for Inspira: About, Products, Promotions, Store Locator',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contains the following links for Inspira: About, Products, Promotions, Store Locator');
  t('Menu Inspira');


  return $menus;
}
