<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function collaborativeforms_example_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "followup" && $api == "default_followup_followup") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "values" && $api == "default_values_list") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function collaborativeforms_example_node_info() {
  $items = array(
    'followup' => array(
      'name' => t('Follow-up'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Follow-up'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'subject' => array(
      'name' => t('Subject'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Record number'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
