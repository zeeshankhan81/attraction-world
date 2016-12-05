<?php
/**
 * @file
 * Include preprocess functions and alter hooks.
 */

/**
 * Implements hook_js_alter().
 */
function insha_custom_js_alter(&$js) {
  if (module_exists('flexslider')) {
    $path = drupal_get_path('module', 'flexslider') . '/assets/js/flexslider.load.js';
    $js[$path]['type'] = 'file';
    $js[$path]['weight'] = 0;
    $js[$path]['every_page'] = TRUE;
    $js[$path]['group'] = JS_LIBRARY;
    $js[$path]['scope'] = 'header';
  }
}
