<?php
/**
 * @file
 * gsb_feature_week_in_the_life_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_week_in_the_life_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_week_in_the_life_ct_node_info() {
  $items = array(
    'week_in_the_life' => array(
      'name' => t('Week In The Life'),
      'base' => 'node_content',
      'description' => t('Describes a week in the life of an MBA student.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
