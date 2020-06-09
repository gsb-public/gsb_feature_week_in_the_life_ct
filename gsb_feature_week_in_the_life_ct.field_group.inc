<?php
/**
 * @file
 * gsb_feature_week_in_the_life_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_week_in_the_life_ct_field_group_info() {
  $field_groups = array();

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
    'weight' => '14',
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
  $field_groups['group_first_day|node|week_in_the_life|form'] = $field_group;

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
    'weight' => '15',
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
  $field_groups['group_second_day|node|week_in_the_life|form'] = $field_group;

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
    'weight' => '16',
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
  $field_groups['group_third_day|node|week_in_the_life|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_first_day|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_first_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_witl_group_days';
  $field_group->data = array(
    'label' => 'First Day',
    'weight' => '2',
    'children' => array(
      0 => 'field_witl_day_of_week_1',
      1 => 'field_witl_journal_entry_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'First Day',
      'instance_settings' => array(
        'classes' => 'witl-days',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_first_day|node|week_in_the_life|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_group_days|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_group_days';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Witl Days group',
    'weight' => '3',
    'children' => array(
      0 => 'group_witl_first_day',
      1 => 'group_witl_second_day',
      2 => 'group_witl_third_day',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Witl Days group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-witl-group-days',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_group_days|node|week_in_the_life|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_listing_wrap|node|week_in_the_life|teaser';
  $field_group->group_name = 'group_witl_listing_wrap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo wrap',
    'weight' => '0',
    'children' => array(
      0 => 'field_image_single_public',
      1 => 'field_year',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo wrap',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-witl-listing-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_listing_wrap|node|week_in_the_life|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_photo_info|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_photo_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo with info',
    'weight' => '0',
    'children' => array(
      0 => 'field_witl_facts',
      1 => 'field_witl_facts_title',
      2 => 'field_witl_post_mba_goals',
      3 => 'title',
      4 => 'group_witl_photo_wrap',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo with info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-witl-photo-info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_photo_info|node|week_in_the_life|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_photo_wrap_mba|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_photo_wrap_mba';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_witl_photo_wrap';
  $field_group->data = array(
    'label' => 'Photo wrap mba',
    'weight' => '27',
    'children' => array(
      0 => 'field_image_single_public',
      1 => 'field_year',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo wrap mba',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-witl-photo-wrap-mba',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_photo_wrap_mba|node|week_in_the_life|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_photo_wrap|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_photo_wrap';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_witl_photo_info';
  $field_group->data = array(
    'label' => 'Photo wrap',
    'weight' => '1',
    'children' => array(
      0 => 'field_witl_under_photo_facts',
      1 => 'group_witl_photo_wrap_mba',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo wrap',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-witl-photo-wrap',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_photo_wrap|node|week_in_the_life|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_second_day|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_second_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_witl_group_days';
  $field_group->data = array(
    'label' => 'Second day',
    'weight' => '3',
    'children' => array(
      0 => 'field_witl_day_of_week_2',
      1 => 'field_witl_journal_entry_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Second day',
      'instance_settings' => array(
        'classes' => 'witl-days',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_second_day|node|week_in_the_life|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_witl_third_day|node|week_in_the_life|default';
  $field_group->group_name = 'group_witl_third_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'week_in_the_life';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_witl_group_days';
  $field_group->data = array(
    'label' => 'Third day',
    'weight' => '4',
    'children' => array(
      0 => 'field_witl_day_of_week_3',
      1 => 'field_witl_journal_entry_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Third day',
      'instance_settings' => array(
        'classes' => 'witl-days',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_witl_third_day|node|week_in_the_life|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('First Day');
  t('Photo with info');
  t('Photo wrap');
  t('Photo wrap mba');
  t('Second Day');
  t('Second day');
  t('Third Day');
  t('Third day');
  t('Witl Days group');

  return $field_groups;
}
