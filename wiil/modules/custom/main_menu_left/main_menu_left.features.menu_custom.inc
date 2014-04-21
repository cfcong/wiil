<?php
/**
 * @file
 * main_menu_left.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function main_menu_left_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-main-menu-left-.
  $menus['menu-main-menu-left-'] = array(
    'menu_name' => 'menu-main-menu-left-',
    'title' => 'Main Menu (Left)',
    'description' => 'Contains the following:

- About
- Products
- Promotions
- Store Locator',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contains the following:

- About
- Products
- Promotions
- Store Locator');
  t('Main Menu (Left)');


  return $menus;
}
