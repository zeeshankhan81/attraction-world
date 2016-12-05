<?php
/**
 * @file
 * theatre_content_type.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function theatre_content_type_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'theatre_import';
  $feeds_importer->config = array(
    'name' => 'Theatre import',
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
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Description',
            'target' => 'body',
            'format' => 'filtered_html',
          ),
          3 => array(
            'source' => 'Doors Open',
            'target' => 'field_doors_open:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Curtain Up',
            'target' => 'field_curtain_up:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Starring',
            'target' => 'field_starring',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Interval',
            'target' => 'field_interval',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'theatre',
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
  $export['theatre_import'] = $feeds_importer;

  return $export;
}
