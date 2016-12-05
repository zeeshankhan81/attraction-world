<?php
/**
 * @file
 * products_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function products_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
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
    'field_region_structure_tid' => array(
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
    'field_inclusions_tid' => array(
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
    'field_exclusions_tid' => array(
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
    'field_selfie_sticks_permitted_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_photography_permitted_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_most_popular_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_combo_ticket_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_exclusive_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_experts_pick_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_flexibility_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_freebie_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_guaranteed_entry_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_perfect_for_1st_timer_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_saving_vs_gate_direct_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_scarcity_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_added_value_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
    'field_gate_ready_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_short_description']['id'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['table'] = 'field_data_field_short_description';
  $handler->display->display_options['fields']['field_short_description']['field'] = 'field_short_description';
  $handler->display->display_options['fields']['field_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_short_description']['element_label_colon'] = FALSE;
  /* Field: Content: Release Date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['settings'] = array(
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
    'products' => 'products',
  );
  /* Filter criterion: Content: Region Structure (field_region_structure) */
  $handler->display->display_options['filters']['field_region_structure_tid']['id'] = 'field_region_structure_tid';
  $handler->display->display_options['filters']['field_region_structure_tid']['table'] = 'field_data_field_region_structure';
  $handler->display->display_options['filters']['field_region_structure_tid']['field'] = 'field_region_structure_tid';
  $handler->display->display_options['filters']['field_region_structure_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_structure_tid']['expose']['operator_id'] = 'field_region_structure_tid_op';
  $handler->display->display_options['filters']['field_region_structure_tid']['expose']['label'] = 'Region Structure';
  $handler->display->display_options['filters']['field_region_structure_tid']['expose']['operator'] = 'field_region_structure_tid_op';
  $handler->display->display_options['filters']['field_region_structure_tid']['expose']['identifier'] = 'field_region_structure_tid';
  $handler->display->display_options['filters']['field_region_structure_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_structure_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_structure_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_structure_tid']['vocabulary'] = 'region_structure';
  /* Filter criterion: Content: Inclusions (field_inclusions) */
  $handler->display->display_options['filters']['field_inclusions_tid']['id'] = 'field_inclusions_tid';
  $handler->display->display_options['filters']['field_inclusions_tid']['table'] = 'field_data_field_inclusions';
  $handler->display->display_options['filters']['field_inclusions_tid']['field'] = 'field_inclusions_tid';
  $handler->display->display_options['filters']['field_inclusions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inclusions_tid']['expose']['operator_id'] = 'field_inclusions_tid_op';
  $handler->display->display_options['filters']['field_inclusions_tid']['expose']['label'] = 'Inclusions';
  $handler->display->display_options['filters']['field_inclusions_tid']['expose']['operator'] = 'field_inclusions_tid_op';
  $handler->display->display_options['filters']['field_inclusions_tid']['expose']['identifier'] = 'field_inclusions_tid';
  $handler->display->display_options['filters']['field_inclusions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_inclusions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_inclusions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inclusions_tid']['vocabulary'] = 'inclusions';
  /* Filter criterion: Content: Exclusions (field_exclusions) */
  $handler->display->display_options['filters']['field_exclusions_tid']['id'] = 'field_exclusions_tid';
  $handler->display->display_options['filters']['field_exclusions_tid']['table'] = 'field_data_field_exclusions';
  $handler->display->display_options['filters']['field_exclusions_tid']['field'] = 'field_exclusions_tid';
  $handler->display->display_options['filters']['field_exclusions_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exclusions_tid']['expose']['operator_id'] = 'field_exclusions_tid_op';
  $handler->display->display_options['filters']['field_exclusions_tid']['expose']['label'] = 'Exclusions';
  $handler->display->display_options['filters']['field_exclusions_tid']['expose']['operator'] = 'field_exclusions_tid_op';
  $handler->display->display_options['filters']['field_exclusions_tid']['expose']['identifier'] = 'field_exclusions_tid';
  $handler->display->display_options['filters']['field_exclusions_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_exclusions_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exclusions_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exclusions_tid']['vocabulary'] = 'exclusions';
  /* Filter criterion: Content: Selfie Sticks Permitted (field_selfie_sticks_permitted) */
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['id'] = 'field_selfie_sticks_permitted_value';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['table'] = 'field_data_field_selfie_sticks_permitted';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['field'] = 'field_selfie_sticks_permitted_value';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['expose']['operator_id'] = 'field_selfie_sticks_permitted_value_op';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['expose']['label'] = 'Selfie Sticks Permitted';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['expose']['operator'] = 'field_selfie_sticks_permitted_value_op';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['expose']['identifier'] = 'field_selfie_sticks_permitted_value';
  $handler->display->display_options['filters']['field_selfie_sticks_permitted_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Photography Permitted (field_photography_permitted) */
  $handler->display->display_options['filters']['field_photography_permitted_value']['id'] = 'field_photography_permitted_value';
  $handler->display->display_options['filters']['field_photography_permitted_value']['table'] = 'field_data_field_photography_permitted';
  $handler->display->display_options['filters']['field_photography_permitted_value']['field'] = 'field_photography_permitted_value';
  $handler->display->display_options['filters']['field_photography_permitted_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_photography_permitted_value']['expose']['operator_id'] = 'field_photography_permitted_value_op';
  $handler->display->display_options['filters']['field_photography_permitted_value']['expose']['label'] = 'Photography Permitted';
  $handler->display->display_options['filters']['field_photography_permitted_value']['expose']['operator'] = 'field_photography_permitted_value_op';
  $handler->display->display_options['filters']['field_photography_permitted_value']['expose']['identifier'] = 'field_photography_permitted_value';
  $handler->display->display_options['filters']['field_photography_permitted_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Most Popular (field_most_popular) */
  $handler->display->display_options['filters']['field_most_popular_value']['id'] = 'field_most_popular_value';
  $handler->display->display_options['filters']['field_most_popular_value']['table'] = 'field_data_field_most_popular';
  $handler->display->display_options['filters']['field_most_popular_value']['field'] = 'field_most_popular_value';
  $handler->display->display_options['filters']['field_most_popular_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_most_popular_value']['expose']['operator_id'] = 'field_most_popular_value_op';
  $handler->display->display_options['filters']['field_most_popular_value']['expose']['label'] = 'Most Popular';
  $handler->display->display_options['filters']['field_most_popular_value']['expose']['operator'] = 'field_most_popular_value_op';
  $handler->display->display_options['filters']['field_most_popular_value']['expose']['identifier'] = 'field_most_popular_value';
  $handler->display->display_options['filters']['field_most_popular_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Combo Ticket (field_combo_ticket) */
  $handler->display->display_options['filters']['field_combo_ticket_value']['id'] = 'field_combo_ticket_value';
  $handler->display->display_options['filters']['field_combo_ticket_value']['table'] = 'field_data_field_combo_ticket';
  $handler->display->display_options['filters']['field_combo_ticket_value']['field'] = 'field_combo_ticket_value';
  $handler->display->display_options['filters']['field_combo_ticket_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_combo_ticket_value']['expose']['operator_id'] = 'field_combo_ticket_value_op';
  $handler->display->display_options['filters']['field_combo_ticket_value']['expose']['label'] = 'Combo Ticket';
  $handler->display->display_options['filters']['field_combo_ticket_value']['expose']['operator'] = 'field_combo_ticket_value_op';
  $handler->display->display_options['filters']['field_combo_ticket_value']['expose']['identifier'] = 'field_combo_ticket_value';
  $handler->display->display_options['filters']['field_combo_ticket_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Exclusive (field_exclusive) */
  $handler->display->display_options['filters']['field_exclusive_value']['id'] = 'field_exclusive_value';
  $handler->display->display_options['filters']['field_exclusive_value']['table'] = 'field_data_field_exclusive';
  $handler->display->display_options['filters']['field_exclusive_value']['field'] = 'field_exclusive_value';
  $handler->display->display_options['filters']['field_exclusive_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_exclusive_value']['expose']['operator_id'] = 'field_exclusive_value_op';
  $handler->display->display_options['filters']['field_exclusive_value']['expose']['label'] = 'Exclusive';
  $handler->display->display_options['filters']['field_exclusive_value']['expose']['operator'] = 'field_exclusive_value_op';
  $handler->display->display_options['filters']['field_exclusive_value']['expose']['identifier'] = 'field_exclusive_value';
  $handler->display->display_options['filters']['field_exclusive_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Experts Pick (field_experts_pick) */
  $handler->display->display_options['filters']['field_experts_pick_value']['id'] = 'field_experts_pick_value';
  $handler->display->display_options['filters']['field_experts_pick_value']['table'] = 'field_data_field_experts_pick';
  $handler->display->display_options['filters']['field_experts_pick_value']['field'] = 'field_experts_pick_value';
  $handler->display->display_options['filters']['field_experts_pick_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_experts_pick_value']['expose']['operator_id'] = 'field_experts_pick_value_op';
  $handler->display->display_options['filters']['field_experts_pick_value']['expose']['label'] = 'Experts Pick';
  $handler->display->display_options['filters']['field_experts_pick_value']['expose']['operator'] = 'field_experts_pick_value_op';
  $handler->display->display_options['filters']['field_experts_pick_value']['expose']['identifier'] = 'field_experts_pick_value';
  $handler->display->display_options['filters']['field_experts_pick_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Flexibility (field_flexibility) */
  $handler->display->display_options['filters']['field_flexibility_value']['id'] = 'field_flexibility_value';
  $handler->display->display_options['filters']['field_flexibility_value']['table'] = 'field_data_field_flexibility';
  $handler->display->display_options['filters']['field_flexibility_value']['field'] = 'field_flexibility_value';
  $handler->display->display_options['filters']['field_flexibility_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_flexibility_value']['expose']['operator_id'] = 'field_flexibility_value_op';
  $handler->display->display_options['filters']['field_flexibility_value']['expose']['label'] = 'Flexibility';
  $handler->display->display_options['filters']['field_flexibility_value']['expose']['operator'] = 'field_flexibility_value_op';
  $handler->display->display_options['filters']['field_flexibility_value']['expose']['identifier'] = 'field_flexibility_value';
  $handler->display->display_options['filters']['field_flexibility_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Freebie (field_freebie) */
  $handler->display->display_options['filters']['field_freebie_value']['id'] = 'field_freebie_value';
  $handler->display->display_options['filters']['field_freebie_value']['table'] = 'field_data_field_freebie';
  $handler->display->display_options['filters']['field_freebie_value']['field'] = 'field_freebie_value';
  $handler->display->display_options['filters']['field_freebie_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_freebie_value']['expose']['operator_id'] = 'field_freebie_value_op';
  $handler->display->display_options['filters']['field_freebie_value']['expose']['label'] = 'Freebie';
  $handler->display->display_options['filters']['field_freebie_value']['expose']['operator'] = 'field_freebie_value_op';
  $handler->display->display_options['filters']['field_freebie_value']['expose']['identifier'] = 'field_freebie_value';
  $handler->display->display_options['filters']['field_freebie_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Guaranteed Entry (field_guaranteed_entry) */
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['id'] = 'field_guaranteed_entry_value';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['table'] = 'field_data_field_guaranteed_entry';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['field'] = 'field_guaranteed_entry_value';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['expose']['operator_id'] = 'field_guaranteed_entry_value_op';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['expose']['label'] = 'Guaranteed Entry';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['expose']['operator'] = 'field_guaranteed_entry_value_op';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['expose']['identifier'] = 'field_guaranteed_entry_value';
  $handler->display->display_options['filters']['field_guaranteed_entry_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Perfect for 1st Timer (field_perfect_for_1st_timer) */
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['id'] = 'field_perfect_for_1st_timer_value';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['table'] = 'field_data_field_perfect_for_1st_timer';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['field'] = 'field_perfect_for_1st_timer_value';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['expose']['operator_id'] = 'field_perfect_for_1st_timer_value_op';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['expose']['label'] = 'Perfect for 1st Timer';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['expose']['operator'] = 'field_perfect_for_1st_timer_value_op';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['expose']['identifier'] = 'field_perfect_for_1st_timer_value';
  $handler->display->display_options['filters']['field_perfect_for_1st_timer_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Saving vs Gate/Direct (field_saving_vs_gate_direct) */
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['id'] = 'field_saving_vs_gate_direct_value';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['table'] = 'field_data_field_saving_vs_gate_direct';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['field'] = 'field_saving_vs_gate_direct_value';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['expose']['operator_id'] = 'field_saving_vs_gate_direct_value_op';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['expose']['label'] = 'Saving vs Gate/Direct';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['expose']['operator'] = 'field_saving_vs_gate_direct_value_op';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['expose']['identifier'] = 'field_saving_vs_gate_direct_value';
  $handler->display->display_options['filters']['field_saving_vs_gate_direct_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Scarcity (field_scarcity) */
  $handler->display->display_options['filters']['field_scarcity_value']['id'] = 'field_scarcity_value';
  $handler->display->display_options['filters']['field_scarcity_value']['table'] = 'field_data_field_scarcity';
  $handler->display->display_options['filters']['field_scarcity_value']['field'] = 'field_scarcity_value';
  $handler->display->display_options['filters']['field_scarcity_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scarcity_value']['expose']['operator_id'] = 'field_scarcity_value_op';
  $handler->display->display_options['filters']['field_scarcity_value']['expose']['label'] = 'Scarcity';
  $handler->display->display_options['filters']['field_scarcity_value']['expose']['operator'] = 'field_scarcity_value_op';
  $handler->display->display_options['filters']['field_scarcity_value']['expose']['identifier'] = 'field_scarcity_value';
  $handler->display->display_options['filters']['field_scarcity_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Added Value (field_added_value) */
  $handler->display->display_options['filters']['field_added_value_value']['id'] = 'field_added_value_value';
  $handler->display->display_options['filters']['field_added_value_value']['table'] = 'field_data_field_added_value';
  $handler->display->display_options['filters']['field_added_value_value']['field'] = 'field_added_value_value';
  $handler->display->display_options['filters']['field_added_value_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_added_value_value']['expose']['operator_id'] = 'field_added_value_value_op';
  $handler->display->display_options['filters']['field_added_value_value']['expose']['label'] = 'Added Value';
  $handler->display->display_options['filters']['field_added_value_value']['expose']['operator'] = 'field_added_value_value_op';
  $handler->display->display_options['filters']['field_added_value_value']['expose']['identifier'] = 'field_added_value_value';
  $handler->display->display_options['filters']['field_added_value_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Gate Ready (field_gate_ready) */
  $handler->display->display_options['filters']['field_gate_ready_value']['id'] = 'field_gate_ready_value';
  $handler->display->display_options['filters']['field_gate_ready_value']['table'] = 'field_data_field_gate_ready';
  $handler->display->display_options['filters']['field_gate_ready_value']['field'] = 'field_gate_ready_value';
  $handler->display->display_options['filters']['field_gate_ready_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gate_ready_value']['expose']['operator_id'] = 'field_gate_ready_value_op';
  $handler->display->display_options['filters']['field_gate_ready_value']['expose']['label'] = 'Gate Ready';
  $handler->display->display_options['filters']['field_gate_ready_value']['expose']['operator'] = 'field_gate_ready_value_op';
  $handler->display->display_options['filters']['field_gate_ready_value']['expose']['identifier'] = 'field_gate_ready_value';
  $handler->display->display_options['filters']['field_gate_ready_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'products';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['products'] = $view;

  return $export;
}
