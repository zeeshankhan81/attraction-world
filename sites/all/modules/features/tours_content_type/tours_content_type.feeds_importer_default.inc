<?php
/**
 * @file
 * tours_content_type.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tours_content_type_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'tour_importer';
  $feeds_importer->config = array(
    'name' => 'Tour Importer',
    'description' => 'Import nodes from CSV file.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => 0,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
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
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'body',
            'format' => 'filtered_html',
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Guide',
            'target' => 'field_guide',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Languages',
            'target' => 'field_languages',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Pick Up',
            'target' => 'field_pick_up',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Drop Off',
            'target' => 'field_drop_off',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Starts At',
            'target' => 'field_starts_at',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Ends',
            'target' => 'field_ends',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Slide Images',
            'target' => 'field_slide_images:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tour',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['tour_importer'] = $feeds_importer;

  return $export;
}
