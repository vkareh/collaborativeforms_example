<?php

/**
 * Implementation of hook_content_default_fields().
 */
function collaborativeforms_example_content_default_fields() {
  $fields = array();

  // Exported field: field_followup_date
  $fields['followup-field_followup_date'] = array(
    'field_name' => 'field_followup_date',
    'type_name' => 'followup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'values_cck' => '',
    'required_for_pub' => 0,
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'within',
      'na_checkbox_enable' => NULL,
      'na_checkbox_value' => NULL,
      'na_checkbox_label' => NULL,
      'label' => 'Date of follow-up',
      'weight' => '-3',
      'description' => 'Date that the follow-up was done.',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_followup_subject
  $fields['followup-field_followup_subject'] = array(
    'field_name' => 'field_followup_subject',
    'type_name' => 'followup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'subject' => 'subject',
      'faq' => 0,
      'followup' => 0,
      'help' => 0,
      'mass_contact' => 0,
      'news' => 0,
      'page' => 0,
      'profile' => 0,
      'organization' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'values_cck' => '',
    'required_for_pub' => 0,
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'na_checkbox_enable' => NULL,
      'na_checkbox_value' => NULL,
      'na_checkbox_label' => NULL,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_followup_subject][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Subject record',
      'weight' => '-4',
      'description' => 'This field points back to the subject record for which the follow-up was created.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_subject_base_date
  $fields['subject-field_subject_base_date'] = array(
    'field_name' => 'field_subject_base_date',
    'type_name' => 'subject',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'values_cck' => '',
    'required_for_pub' => 0,
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+0',
      'label_position' => 'within',
      'na_checkbox_enable' => NULL,
      'na_checkbox_value' => NULL,
      'na_checkbox_label' => NULL,
      'label' => 'Base date for study',
      'weight' => '-2',
      'description' => 'Initial date when the study for this subject started.',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_subject_dob
  $fields['subject-field_subject_dob'] = array(
    'field_name' => 'field_subject_dob',
    'type_name' => 'subject',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'values_cck' => '',
    'required_for_pub' => 0,
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-100:+0',
      'label_position' => 'within',
      'na_checkbox_enable' => NULL,
      'na_checkbox_value' => NULL,
      'na_checkbox_label' => NULL,
      'label' => 'Date of birth',
      'weight' => '-3',
      'description' => 'Date of birth of the subject.',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_subject_gender
  $fields['subject-field_subject_gender'] = array(
    'field_name' => 'field_subject_gender',
    'type_name' => 'subject',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'values_cck' => 'gender',
    'required_for_pub' => 0,
    'widget' => array(
      'na_checkbox_enable' => '0',
      'na_checkbox_value' => '',
      'na_checkbox_label' => 'N/A',
      'mccr_width' => '1',
      'mccr_row-major' => 0,
      'mccr_indent' => '0',
      'mccr_caption' => '',
      'mccr_column-heading' => '',
      'mccr_row-heading' => '',
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gender',
      'weight' => '-4',
      'description' => 'Gender of the subject.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Base date for study');
  t('Date of birth');
  t('Date of follow-up');
  t('Gender');
  t('Subject record');

  return $fields;
}
