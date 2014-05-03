<?php
/**
 * @file
 * jojo_brands_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function jojo_brands_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jojo_brands_slideshow_node_info() {
  $items = array(
    'jojo_colorpure_perfect' => array(
      'name' => t('Jojo - Colorpure Perfect'),
      'base' => 'node_content',
      'description' => t('Custom content type for Colorpure Perfect.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jojo_hairpure' => array(
      'name' => t('Jojo - Hairpure'),
      'base' => 'node_content',
      'description' => t('Custom content type for Jojo - Hairpure'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jojo_hairpure_style' => array(
      'name' => t('Jojo - Hairpure Style'),
      'base' => 'node_content',
      'description' => t('Custom content type for Jojo Hairpure Style.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
