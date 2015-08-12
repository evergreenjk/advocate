<?php
/**
 * @file
 * features_question.features.inc
 */

/**
 * Implements hook_node_info().
 */
function features_question_node_info() {
  $items = array(
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => t('Ask anything ?'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
