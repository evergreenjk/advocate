<?php
/**
 * @file
 * features_home_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_home_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'How Do We Rate Lawyer';
  $fe_block_boxes->format = 'full_htnl';
  $fe_block_boxes->machine_name = 'home_block1';
  $fe_block_boxes->body = '<p>How Do We Rate Lawyer</p>
';

  $export['home_block1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'How To Use The Website';
  $fe_block_boxes->format = 'full_htnl';
  $fe_block_boxes->machine_name = 'home_block2';
  $fe_block_boxes->body = '<p>How To Use The Website</p>
';

  $export['home_block2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'How Do We Optimize The Website';
  $fe_block_boxes->format = 'full_htnl';
  $fe_block_boxes->machine_name = 'home_block3';
  $fe_block_boxes->body = '<p>How Do We Optimize The Website</p>

<p><a href="about-us">Read More</a></p>
';

  $export['home_block3'] = $fe_block_boxes;

  return $export;
}
