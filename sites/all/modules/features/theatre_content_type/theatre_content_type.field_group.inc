<?php
/**
 * @file
 * theatre_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function theatre_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructions|node|theatre|form';
  $field_group->group_name = 'group_instructions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'theatre';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Instructions',
    'weight' => '2',
    'children' => array(
      0 => 'field_doors_open',
      1 => 'field_curtain_up',
      2 => 'field_starring',
      3 => 'field_interval',
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
  $field_groups['group_instructions|node|theatre|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|theatre|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'theatre';
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
  $field_groups['group_main|node|theatre|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|theatre|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'theatre';
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
  $field_groups['group_media|node|theatre|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Instructions');
  t('Main');
  t('Media');

  return $field_groups;
}
