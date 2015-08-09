<?php
/**
 * @file
 * features_home_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_home_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-home_block1'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'home_block1',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content',
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
    'title' => 'How Do We Rate Lawyer',
    'visibility' => 1,
  );

  $export['block-home_block2'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'home_block2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'anonymous user' => 1,
    ),
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
        'region' => 'content',
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
    'title' => 'How To Use The Website',
    'visibility' => 1,
  );

  $export['block-home_block3'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'home_block3',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'anonymous user' => 1,
    ),
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
        'region' => 'content',
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
    'title' => 'How Do We Optimize The Website',
    'visibility' => 1,
  );

  return $export;
}
