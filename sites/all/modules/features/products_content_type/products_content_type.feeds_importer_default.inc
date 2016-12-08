<?php
/**
 * @file
 * products_content_type.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function products_content_type_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'products';
  $feeds_importer->config = array(
    'name' => 'Products',
    'description' => 'Import nodes from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Short Description',
            'target' => 'field_short_description',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Long Description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Release Date',
            'target' => 'field_release_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Video Url',
            'target' => 'field_video:video_url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Image',
            'target' => 'field_image:uri',
            'file_exists' => '0',
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Region Structure',
            'target' => 'field_region_structure',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Inclusion',
            'target' => 'field_inclusions',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Exclusions',
            'target' => 'field_exclusions',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'GPS X',
            'target' => 'field_gps_x',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'GPS Y',
            'target' => 'field_gps_y',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'ID Requirement',
            'target' => 'field_id_requirements',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'Dress Code',
            'target' => 'field_dress_code',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'Address',
            'target' => 'field_address',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'Local Contact Details',
            'target' => 'field_local_contact_details',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'Important! Please Read',
            'target' => 'field_important_please_read',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'Getting to Instructions',
            'target' => 'field_getting_to_instructions',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'Ticket Exchange',
            'target' => 'field_ticket_exchange',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'Opens',
            'target' => 'field_opens:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'Closes',
            'target' => 'field_closes:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'Opening Times',
            'target' => 'field_opening_times',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'Duration (minutes)',
            'target' => 'field_duration',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'Selfie Sticks Permitted',
            'target' => 'field_selfie_sticks_permitted',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'Photography Permitted',
            'target' => 'field_photography_permitted',
            'unique' => FALSE,
            'language' => 'und',
          ),
          25 => array(
            'source' => 'Categorisation',
            'target' => 'field_categorisation',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          26 => array(
            'source' => 'Most Popular',
            'target' => 'field_most_popular',
            'unique' => FALSE,
            'language' => 'und',
          ),
          27 => array(
            'source' => 'Experts Pick',
            'target' => 'field_experts_pick',
            'unique' => FALSE,
            'language' => 'und',
          ),
          28 => array(
            'source' => 'Perfect for 1st Timer',
            'target' => 'field_perfect_for_1st_timer',
            'unique' => FALSE,
            'language' => 'und',
          ),
          29 => array(
            'source' => 'Combo Ticket',
            'target' => 'field_combo_ticket',
            'unique' => FALSE,
            'language' => 'und',
          ),
          30 => array(
            'source' => 'Skip-The-Line (Faster Entry)',
            'target' => 'field_skip_the_line_faster_entry',
            'unique' => FALSE,
            'language' => 'und',
          ),
          31 => array(
            'source' => 'Saving vs Gate/Direct',
            'target' => 'field_saving_vs_gate_direct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          32 => array(
            'source' => 'Scarcity',
            'target' => 'field_scarcity',
            'unique' => FALSE,
            'language' => 'und',
          ),
          33 => array(
            'source' => 'Flexibility',
            'target' => 'field_flexibility',
            'unique' => FALSE,
            'language' => 'und',
          ),
          34 => array(
            'source' => 'Added Value',
            'target' => 'field_added_value',
            'unique' => FALSE,
            'language' => 'und',
          ),
          35 => array(
            'source' => 'Freebie',
            'target' => 'field_freebie',
            'unique' => FALSE,
            'language' => 'und',
          ),
          36 => array(
            'source' => 'Exclusive',
            'target' => 'field_exclusive',
            'unique' => FALSE,
            'language' => 'und',
          ),
          37 => array(
            'source' => 'Guaranteed Entry',
            'target' => 'field_guaranteed_entry',
            'unique' => FALSE,
            'language' => 'und',
          ),
          38 => array(
            'source' => 'Gate Ready',
            'target' => 'field_gate_ready',
            'unique' => FALSE,
            'language' => 'und',
          ),
          39 => array(
            'source' => 'Printing Requirement',
            'target' => 'field_printing_requirement',
            'unique' => FALSE,
            'language' => 'und',
          ),
          40 => array(
            'source' => 'Health & Safety Completed',
            'target' => 'field_health_safety_completed',
            'unique' => FALSE,
            'language' => 'und',
          ),
          41 => array(
            'source' => 'Availability',
            'target' => 'field_availability',
            'unique' => FALSE,
            'language' => 'und',
          ),
          42 => array(
            'source' => 'Flexibility / Validity',
            'target' => 'field_flexibility_validity',
            'unique' => FALSE,
            'language' => 'und',
          ),
          43 => array(
            'source' => 'Ticket Options',
            'target' => 'field_ticket_options',
            'unique' => FALSE,
            'language' => 'und',
          ),
          44 => array(
            'source' => 'Terms & Conditions',
            'target' => 'field_terms_conditions',
            'unique' => FALSE,
            'language' => 'und',
          ),
          45 => array(
            'source' => 'Confirmation Rule',
            'target' => 'field_confirmation_rule',
            'unique' => FALSE,
            'language' => 'und',
          ),
          46 => array(
            'source' => 'Weather Policy',
            'target' => 'field_weather_policy',
            'unique' => FALSE,
            'language' => 'und',
          ),
          47 => array(
            'source' => 'Cancellation Policy',
            'target' => 'field_cancellation_policy',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'products',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['products'] = $feeds_importer;

  return $export;
}
