<?php

/**
 * Implementation of hook_default_values_values().
 */
function collaborativeforms_example_default_values_values() {
  $export = array();
  $values = new stdClass;
  $values->disabled = FALSE; /* Edit this to true to make a default values disabled initially */
  $values->api_version = 1;
  $values->name = 'gender';
  $values->description = 'Gender';
  $values->data = array(
    0 => array(
      'value' => 'f',
      'label' => 'Female',
      'weight' => '-2',
    ),
    1 => array(
      'value' => 'm',
      'label' => 'Male',
      'weight' => '-1',
    ),
  );

  $export['gender'] = $values;
  return $export;
}
