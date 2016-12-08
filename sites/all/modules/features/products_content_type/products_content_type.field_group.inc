<?php
/**
 * @file
 * products_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function products_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_filters|node|products|form';
  $field_group->group_name = 'group_filters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filters',
    'weight' => '4',
    'children' => array(
      0 => 'field_selfie_sticks_permitted',
      1 => 'field_photography_permitted',
      2 => 'field_categorisation',
      3 => 'field_most_popular',
      4 => 'field_experts_pick',
      5 => 'field_perfect_for_1st_timer',
      6 => 'field_combo_ticket',
      7 => 'field_skip_the_line_faster_entry',
      8 => 'field_saving_vs_gate_direct',
      9 => 'field_scarcity',
      10 => 'field_flexibility',
      11 => 'field_added_value',
      12 => 'field_freebie',
      13 => 'field_exclusive',
      14 => 'field_guaranteed_entry',
      15 => 'field_gate_ready',
      16 => 'field_printing_requirement',
      17 => 'field_health_safety_completed',
      18 => 'field_availability',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-filters field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_filters|node|products|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructions|node|products|form';
  $field_group->group_name = 'group_instructions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instructions',
    'weight' => '3',
    'children' => array(
      0 => 'field_region_structure',
      1 => 'field_inclusions',
      2 => 'field_exclusions',
      3 => 'field_getting_to_instructions',
      4 => 'field_gps_x',
      5 => 'field_gps_y',
      6 => 'field_address',
      7 => 'field_ticket_exchange',
      8 => 'field_local_contact_details',
      9 => 'field_id_requirements',
      10 => 'field_dress_code',
      11 => 'field_important_please_read',
      12 => 'field_opens',
      13 => 'field_closes',
      14 => 'field_opening_times',
      15 => 'field_duration',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-instructions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_instructions|node|products|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|products|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_short_description',
      2 => 'field_release_date',
      3 => 'field_ticket',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main|node|products|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|products|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_video',
      1 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_media|node|products|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy|node|products|form';
  $field_group->group_name = 'group_policy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'products';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy',
    'weight' => '5',
    'children' => array(
      0 => 'field_terms_conditions',
      1 => 'field_confirmation_rule',
      2 => 'field_flexibility_validity',
      3 => 'field_weather_policy',
      4 => 'field_cancellation_policy',
      5 => 'field_ticket_options',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-policy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_policy|node|products|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Filters');
  t('Instructions');
  t('Main');
  t('Media');
  t('Policy');

  return $field_groups;
}
