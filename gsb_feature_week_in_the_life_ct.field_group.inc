<?php
/**
 * @file
 * gsb_feature_week_in_the_life_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_week_in_the_life_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_first_day|node|week_in_the_life|form';
  $field_group->group_name = 'group_first_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'First Day',
    'weight' => '11',
    'children' => array(
      0 => 'field_witl_day_of_week_1',
      1 => 'field_witl_journal_entry_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_first_day|node|week_in_the_life|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_day|node|week_in_the_life|form';
  $field_group->group_name = 'group_second_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Second Day',
    'weight' => '12',
    'children' => array(
      0 => 'field_witl_day_of_week_2',
      1 => 'field_witl_journal_entry_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_second_day|node|week_in_the_life|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_third_day|node|week_in_the_life|form';
  $field_group->group_name = 'group_third_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Third Day',
    'weight' => '13',
    'children' => array(
      0 => 'field_witl_day_of_week_3',
      1 => 'field_witl_journal_entry_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_third_day|node|week_in_the_life|form'] = $field_group;

  return $export;
}
