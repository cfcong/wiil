<?php
/**
 * @file
 * jojo_brands_slideshow.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function jojo_brands_slideshow_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_jojo---colorpure-perfect:node/add/jojo-colorpure-perfect
  $menu_links['navigation_jojo---colorpure-perfect:node/add/jojo-colorpure-perfect'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/jojo-colorpure-perfect',
    'router_path' => 'node/add/jojo-colorpure-perfect',
    'link_title' => 'Jojo - Colorpure Perfect',
    'options' => array(
      'attributes' => array(
        'title' => 'Custom content type for Colorpure Perfect.',
      ),
      'identifier' => 'navigation_jojo---colorpure-perfect:node/add/jojo-colorpure-perfect',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_jojo---hairpure-style:node/add/jojo-hairpure-style
  $menu_links['navigation_jojo---hairpure-style:node/add/jojo-hairpure-style'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/jojo-hairpure-style',
    'router_path' => 'node/add/jojo-hairpure-style',
    'link_title' => 'Jojo - Hairpure Style',
    'options' => array(
      'attributes' => array(
        'title' => 'Custom content type for Jojo Hairpure Style.',
      ),
      'identifier' => 'navigation_jojo---hairpure-style:node/add/jojo-hairpure-style',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_jojo---hairpure:node/add/jojo-hairpure
  $menu_links['navigation_jojo---hairpure:node/add/jojo-hairpure'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/jojo-hairpure',
    'router_path' => 'node/add/jojo-hairpure',
    'link_title' => 'Jojo - Hairpure',
    'options' => array(
      'attributes' => array(
        'title' => 'Custom content type for Jojo - Hairpure',
      ),
      'identifier' => 'navigation_jojo---hairpure:node/add/jojo-hairpure',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Jojo - Colorpure Perfect');
  t('Jojo - Hairpure');
  t('Jojo - Hairpure Style');


  return $menu_links;
}
