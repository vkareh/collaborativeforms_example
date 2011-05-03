<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function collaborativeforms_example_user_default_permissions() {
  $permissions = array();

  // Exported permission: create followup content
  $permissions['create followup content'] = array(
    'name' => 'create followup content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create subject content
  $permissions['create subject content'] = array(
    'name' => 'create subject content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete any followup content
  $permissions['delete any followup content'] = array(
    'name' => 'delete any followup content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete any subject content
  $permissions['delete any subject content'] = array(
    'name' => 'delete any subject content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete own followup content
  $permissions['delete own followup content'] = array(
    'name' => 'delete own followup content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete own subject content
  $permissions['delete own subject content'] = array(
    'name' => 'delete own subject content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit any followup content
  $permissions['edit any followup content'] = array(
    'name' => 'edit any followup content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit any subject content
  $permissions['edit any subject content'] = array(
    'name' => 'edit any subject content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit own followup content
  $permissions['edit own followup content'] = array(
    'name' => 'edit own followup content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit own subject content
  $permissions['edit own subject content'] = array(
    'name' => 'edit own subject content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  return $permissions;
}
