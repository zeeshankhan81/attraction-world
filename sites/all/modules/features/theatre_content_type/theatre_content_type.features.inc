<?php
/**
 * @file
 * theatre_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function theatre_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function theatre_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function theatre_content_type_node_info() {
  $items = array(
    'theatre' => array(
      'name' => t('Theatre'),
      'base' => 'node_content',
      'description' => t('Theatre content will be used to create theatre nodes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
