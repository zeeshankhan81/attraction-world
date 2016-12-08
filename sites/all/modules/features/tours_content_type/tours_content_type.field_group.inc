<?php
/**
 * @file
 * tours_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tours_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructions|node|tour|form';
  $field_group->group_name = 'group_instructions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instructions',
    'weight' => '4',
    'children' => array(
      0 => 'field_guide',
      1 => 'field_languages',
      2 => 'field_pick_up',
      3 => 'field_drop_off',
      4 => 'field_starts_at',
      5 => 'field_ends',
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
  $field_groups['group_instructions|node|tour|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|tour|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_ticket',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-main field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main|node|tour|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|tour|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tour';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_slide_images',
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
  $field_groups['group_media|node|tour|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Instructions');
  t('Main');
  t('Media');

  return $field_groups;
}
