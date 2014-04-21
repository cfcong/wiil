<?php
/**
 * @file
 * wiil_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wiil_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
