<?php
/**
 * @file
 * featuers_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function featuers_permission_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
  );

  return $roles;
}
