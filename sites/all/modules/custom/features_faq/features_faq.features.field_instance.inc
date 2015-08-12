<?php
/**
 * @file
 * features_faq.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_faq_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-faq-field_faq'
  $field_instances['node-faq-field_faq'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'default_values' => array(
      'answer' => '',
      'answer_format' => 'full_htnl',
      'question' => '',
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'faqfield',
        'settings' => array(
          'active' => 0,
          'autoHeight' => TRUE,
          'collapsible' => FALSE,
          'event' => 'click',
        ),
        'type' => 'faqfield_accordion',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_faq',
    'label' => 'FAQ',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'faqfield',
      'settings' => array(
        'answer' => '',
        'question' => '',
      ),
      'type' => 'faqfield_textboxes',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FAQ');

  return $field_instances;
}
