<?php
/**
 * @file
 * wiil_home.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function wiil_home_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wiil_home_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'wiil_home-header' => array(
          'module' => 'wiil_home',
          'delta' => 'header',
          'region' => 'header',
          'weight' => '-10',
        ),
        'wiil_home-footer' => array(
          'module' => 'wiil_home',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['wiil_home_page'] = $context;

  return $export;
}
