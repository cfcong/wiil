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

  // Exported menu link: menu-menu-inspira_about:<front>
  $menu_links['menu-menu-inspira_about:<front>'] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the About page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-inspira_products:<front>
  $menu_links['menu-menu-inspira_products:<front>'] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Products page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_products:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-inspira_promotions:<front>
  $menu_links['menu-menu-inspira_promotions:<front>'] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Promotions',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Promotions page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_promotions:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-inspira_store-locator:<front>
  $menu_links['menu-menu-inspira_store-locator:<front>'] = array(
    'menu_name' => 'menu-menu-inspira',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Store Locator',
    'options' => array(
      'attributes' => array(
        'title' => 'Link for the Store Locator page for Inspira.',
      ),
      'identifier' => 'menu-menu-inspira_store-locator:<front>',
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
