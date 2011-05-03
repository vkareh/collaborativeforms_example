<?php

/**
 * Implementation of hook_strongarm().
 */
function collaborativeforms_example_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_followup';
  $strongarm->value = '1';

  $export['ant_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_followup';
  $strongarm->value = '[field_followup_subject-nid] [field_followup_date-date]';

  $export['ant_pattern_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_subject';
  $strongarm->value = '';

  $export['ant_pattern_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_followup';
  $strongarm->value = 0;

  $export['ant_php_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_subject';
  $strongarm->value = 0;

  $export['ant_php_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_subject';
  $strongarm->value = '0';

  $export['ant_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_field_defs_expose_followup';
  $strongarm->value = 'enabled';

  $export['cck_field_defs_expose_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_field_defs_expose_subject';
  $strongarm->value = 'enabled';

  $export['cck_field_defs_expose_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_followup';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '2',
    'author' => '3',
    'options' => '4',
    'menu' => '-2',
    'book' => '1',
    'path' => '6',
    'detailed_question' => '0',
    'og_nodeapi' => '-1',
    'print' => '5',
  );

  $export['content_extra_weights_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_subject';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '4',
    'author' => '5',
    'options' => '6',
    'menu' => '0',
    'book' => '3',
    'path' => '7',
    'detailed_question' => '2',
    'og_nodeapi' => '1',
    'print' => '8',
  );

  $export['content_extra_weights_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_followup';
  $strongarm->value = 0;

  $export['content_profile_use_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_subject';
  $strongarm->value = 0;

  $export['content_profile_use_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_followup';
  $strongarm->value = 0;

  $export['enable_revisions_page_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_subject';
  $strongarm->value = 0;

  $export['enable_revisions_page_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_buttons_followup';
  $strongarm->value = 0;

  $export['multistep_buttons_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_buttons_subject';
  $strongarm->value = 1;

  $export['multistep_buttons_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_default_followup';
  $strongarm->value = 'multistep';

  $export['multistep_default_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_default_subject';
  $strongarm->value = 'multistep';

  $export['multistep_default_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_expose_followup';
  $strongarm->value = 'disabled';

  $export['multistep_expose_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_expose_subject';
  $strongarm->value = 'disabled';

  $export['multistep_expose_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_author_followup';
  $strongarm->value = '0';

  $export['multistep_extra_author_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_author_subject';
  $strongarm->value = '1';

  $export['multistep_extra_author_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_book_followup';
  $strongarm->value = '0';

  $export['multistep_extra_book_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_book_subject';
  $strongarm->value = '1';

  $export['multistep_extra_book_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_menu_followup';
  $strongarm->value = '0';

  $export['multistep_extra_menu_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_menu_subject';
  $strongarm->value = '1';

  $export['multistep_extra_menu_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_og_nodeapi_followup';
  $strongarm->value = '0';

  $export['multistep_extra_og_nodeapi_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_og_nodeapi_subject';
  $strongarm->value = '1';

  $export['multistep_extra_og_nodeapi_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_options_followup';
  $strongarm->value = '0';

  $export['multistep_extra_options_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_options_subject';
  $strongarm->value = '1';

  $export['multistep_extra_options_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_path_followup';
  $strongarm->value = '0';

  $export['multistep_extra_path_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_path_subject';
  $strongarm->value = '1';

  $export['multistep_extra_path_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_print_followup';
  $strongarm->value = '0';

  $export['multistep_extra_print_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_print_subject';
  $strongarm->value = '1';

  $export['multistep_extra_print_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_revision_information_followup';
  $strongarm->value = '0';

  $export['multistep_extra_revision_information_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_revision_information_subject';
  $strongarm->value = '1';

  $export['multistep_extra_revision_information_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_title_followup';
  $strongarm->value = '1';

  $export['multistep_extra_title_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_extra_title_subject';
  $strongarm->value = '1';

  $export['multistep_extra_title_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_steps_followup';
  $strongarm->value = '0';

  $export['multistep_steps_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'multistep_steps_subject';
  $strongarm->value = '1';

  $export['multistep_steps_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_followup';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_followup';
  $strongarm->value = 'group_post_wiki';

  $export['og_content_type_usage_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_subject';
  $strongarm->value = 'group_post_wiki';

  $export['og_content_type_usage_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_followup';
  $strongarm->value = '';

  $export['og_max_groups_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_subject';
  $strongarm->value = '';

  $export['og_max_groups_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_followup';
  $strongarm->value = 1;

  $export['print_display_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_subject';
  $strongarm->value = 1;

  $export['print_display_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_followup';
  $strongarm->value = 0;

  $export['print_display_urllist_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_subject';
  $strongarm->value = 0;

  $export['print_display_urllist_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_followup';
  $strongarm->value = 0;

  $export['show_diff_inline_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_subject';
  $strongarm->value = 0;

  $export['show_diff_inline_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_followup';
  $strongarm->value = 0;

  $export['show_preview_changes_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_subject';
  $strongarm->value = 0;

  $export['show_preview_changes_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_comp_followup';
  $strongarm->value = 'each';

  $export['unique_field_comp_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_comp_subject';
  $strongarm->value = 'each';

  $export['unique_field_comp_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_fields_followup';
  $strongarm->value = array();

  $export['unique_field_fields_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_fields_subject';
  $strongarm->value = array(
    0 => 'title',
  );

  $export['unique_field_fields_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_scope_followup';
  $strongarm->value = 'type';

  $export['unique_field_scope_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_scope_subject';
  $strongarm->value = 'type';

  $export['unique_field_scope_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_show_matches_followup';
  $strongarm->value = array();

  $export['unique_field_show_matches_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'unique_field_show_matches_subject';
  $strongarm->value = array(
    0 => 'show_matches',
  );

  $export['unique_field_show_matches_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_followup';
  $strongarm->value = '0';

  $export['upload_followup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_subject';
  $strongarm->value = '0';

  $export['upload_subject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_field_sync_views_subject';
  $strongarm->value = array(
    0 => 'export:default',
  );

  $export['views_field_sync_views_subject'] = $strongarm;
  return $export;
}
