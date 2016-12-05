<?php
/**
 * @file
 * tours_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tours_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tour_packages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tour Packages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tour Packages';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_guide_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_languages_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_pick_up_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_drop_off_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'main_image_thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Starts At */
  $handler->display->display_options['fields']['field_starts_at']['id'] = 'field_starts_at';
  $handler->display->display_options['fields']['field_starts_at']['table'] = 'field_data_field_starts_at';
  $handler->display->display_options['fields']['field_starts_at']['field'] = 'field_starts_at';
  $handler->display->display_options['fields']['field_starts_at']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Ends */
  $handler->display->display_options['fields']['field_ends']['id'] = 'field_ends';
  $handler->display->display_options['fields']['field_ends']['table'] = 'field_data_field_ends';
  $handler->display->display_options['fields']['field_ends']['field'] = 'field_ends';
  $handler->display->display_options['fields']['field_ends']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tour' => 'tour',
  );
  /* Filter criterion: Content: Guide (field_guide) */
  $handler->display->display_options['filters']['field_guide_tid']['id'] = 'field_guide_tid';
  $handler->display->display_options['filters']['field_guide_tid']['table'] = 'field_data_field_guide';
  $handler->display->display_options['filters']['field_guide_tid']['field'] = 'field_guide_tid';
  $handler->display->display_options['filters']['field_guide_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_guide_tid']['expose']['operator_id'] = 'field_guide_tid_op';
  $handler->display->display_options['filters']['field_guide_tid']['expose']['label'] = 'Guide';
  $handler->display->display_options['filters']['field_guide_tid']['expose']['operator'] = 'field_guide_tid_op';
  $handler->display->display_options['filters']['field_guide_tid']['expose']['identifier'] = 'field_guide_tid';
  $handler->display->display_options['filters']['field_guide_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_guide_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_guide_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_guide_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_guide_tid']['vocabulary'] = 'guide';
  /* Filter criterion: Content: Languages (field_languages) */
  $handler->display->display_options['filters']['field_languages_tid']['id'] = 'field_languages_tid';
  $handler->display->display_options['filters']['field_languages_tid']['table'] = 'field_data_field_languages';
  $handler->display->display_options['filters']['field_languages_tid']['field'] = 'field_languages_tid';
  $handler->display->display_options['filters']['field_languages_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_languages_tid']['expose']['operator_id'] = 'field_languages_tid_op';
  $handler->display->display_options['filters']['field_languages_tid']['expose']['label'] = 'Languages';
  $handler->display->display_options['filters']['field_languages_tid']['expose']['operator'] = 'field_languages_tid_op';
  $handler->display->display_options['filters']['field_languages_tid']['expose']['identifier'] = 'field_languages_tid';
  $handler->display->display_options['filters']['field_languages_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_languages_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_languages_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_languages_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_languages_tid']['vocabulary'] = 'languages';
  /* Filter criterion: Content: Pick Up (field_pick_up) */
  $handler->display->display_options['filters']['field_pick_up_tid']['id'] = 'field_pick_up_tid';
  $handler->display->display_options['filters']['field_pick_up_tid']['table'] = 'field_data_field_pick_up';
  $handler->display->display_options['filters']['field_pick_up_tid']['field'] = 'field_pick_up_tid';
  $handler->display->display_options['filters']['field_pick_up_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pick_up_tid']['expose']['operator_id'] = 'field_pick_up_tid_op';
  $handler->display->display_options['filters']['field_pick_up_tid']['expose']['label'] = 'Pick Up';
  $handler->display->display_options['filters']['field_pick_up_tid']['expose']['operator'] = 'field_pick_up_tid_op';
  $handler->display->display_options['filters']['field_pick_up_tid']['expose']['identifier'] = 'field_pick_up_tid';
  $handler->display->display_options['filters']['field_pick_up_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_pick_up_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_pick_up_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_pick_up_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pick_up_tid']['vocabulary'] = 'pick_up';
  /* Filter criterion: Content: Drop Off (field_drop_off) */
  $handler->display->display_options['filters']['field_drop_off_tid']['id'] = 'field_drop_off_tid';
  $handler->display->display_options['filters']['field_drop_off_tid']['table'] = 'field_data_field_drop_off';
  $handler->display->display_options['filters']['field_drop_off_tid']['field'] = 'field_drop_off_tid';
  $handler->display->display_options['filters']['field_drop_off_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_drop_off_tid']['expose']['operator_id'] = 'field_drop_off_tid_op';
  $handler->display->display_options['filters']['field_drop_off_tid']['expose']['label'] = 'Drop Off';
  $handler->display->display_options['filters']['field_drop_off_tid']['expose']['operator'] = 'field_drop_off_tid_op';
  $handler->display->display_options['filters']['field_drop_off_tid']['expose']['identifier'] = 'field_drop_off_tid';
  $handler->display->display_options['filters']['field_drop_off_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_drop_off_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_drop_off_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_drop_off_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_drop_off_tid']['vocabulary'] = 'drop_off';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'tour-packages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tours';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['tour_packages'] = $view;

  return $export;
}
