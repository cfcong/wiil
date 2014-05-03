<?php
/**
 * @file
 * jojo_brands_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jojo_brands_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'colorpure_perfect';
  $view->description = 'Slideshow for Colorpure Perfect';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Colorpure Perfect';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Colorpure Perfect';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['id'] = 'field_jojo_colorpure_perfect';
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['table'] = 'field_data_field_jojo_colorpure_perfect';
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['field'] = 'field_jojo_colorpure_perfect';
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['label'] = '';
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jojo_colorpure_perfect']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Colorpure Perfect - Slide';
  $export['colorpure_perfect'] = $view;

  $view = new view();
  $view->name = 'hairpure';
  $view->description = 'Slideshow for Hairpure';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hairpure';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hairpure';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_jojo_hairpure']['id'] = 'field_jojo_hairpure';
  $handler->display->display_options['fields']['field_jojo_hairpure']['table'] = 'field_data_field_jojo_hairpure';
  $handler->display->display_options['fields']['field_jojo_hairpure']['field'] = 'field_jojo_hairpure';
  $handler->display->display_options['fields']['field_jojo_hairpure']['label'] = '';
  $handler->display->display_options['fields']['field_jojo_hairpure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jojo_hairpure']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jojo_hairpure']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Hairpure - Slide';
  $export['hairpure'] = $view;

  $view = new view();
  $view->name = 'hairpure_style';
  $view->description = 'Slideshow for Hairpure Style';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hairpure Style';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hairpure Style';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['id'] = 'field_jojo_hairpure_style';
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['table'] = 'field_data_field_jojo_hairpure_style';
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['field'] = 'field_jojo_hairpure_style';
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['label'] = '';
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_jojo_hairpure_style']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Hairpure Style - Slide';
  $export['hairpure_style'] = $view;

  return $export;
}
