<?php
/**
 * @file
 * features_contact.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_contact_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['webform-client-block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'client-block-1',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_as' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootstrap_as',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
