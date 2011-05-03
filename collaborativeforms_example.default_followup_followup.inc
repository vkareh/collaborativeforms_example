<?php

/**
 * Implementation of hook_default_followup_followups().
 */
function collaborativeforms_example_default_followup_followups() {
  $export = array();
  $followup = new stdClass;
  $followup->disabled = FALSE; /* Edit this to true to make a default followup disabled initially */
  $followup->api_version = 1;
  $followup->name = 'standard_followup';
  $followup->description = 'Standard Follow-up';
  $followup->trigger_type = 'subject';
  $followup->trigger_date_field = 'field_subject_base_date';
  $followup->target_type = 'followup';
  $followup->target_reference_field = 'field_followup_subject';
  $followup->target_requires_trigger = TRUE;
  $followup->followup_frequency = '6 months';
  $followup->followup_interval = 1;
  $followup->followup_grace_period = '2 weeks';
  $followup->followup_prevent_gaps = FALSE;
  $followup->status = TRUE;

  $export['standard_followup'] = $followup;
  return $export;
}
