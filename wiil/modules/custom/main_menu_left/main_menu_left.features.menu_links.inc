<?php
/**
 * @file
 * main_menu_left.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function main_menu_left_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-left-_about:<front>
  $menu_links['menu-main-menu-left-_about:<front>'] = array(
    'menu_name' => 'menu-main-menu-left-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for About page.',
      ),
      'identifier' => 'menu-main-menu-left-_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-left-_products:<front>
  $menu_links['menu-main-menu-left-_products:<front>'] = array(
    'menu_name' => 'menu-main-menu-left-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for Products page.',
      ),
      'identifier' => 'menu-main-menu-left-_products:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-left-_promotions:<front>
  $menu_links['menu-main-menu-left-_promotions:<front>'] = array(
    'menu_name' => 'menu-main-menu-left-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Promotions',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for Promotions page.',
      ),
      'identifier' => 'menu-main-menu-left-_promotions:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-main-menu-left-_store-locator:<front>
  $menu_links['menu-main-menu-left-_store-locator:<front>'] = array(
    'menu_name' => 'menu-main-menu-left-',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Store Locator',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for Store Locator page.',
      ),
      'identifier' => 'menu-main-menu-left-_store-locator:<front>',
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
