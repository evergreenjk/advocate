<?php
/**
 * @file
 * featuers_permission.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function featuers_permission_default_roles_permissions() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 2,
    'permissions' => array(
      'use text format full_htnl' => TRUE,
    ),
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
    'permissions' => array(),
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
    'permissions' => array(),
  );

  // Exported role: webmaster
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 3,
    'permissions' => array(
      'use text format basic_html' => TRUE,
    ),
  );

  return $roles;
}
