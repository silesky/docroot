<?php
/**
 * @file
 * tulane_microsite_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tulane_microsite_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a|node|microsite|form';
  $field_group->group_name = 'group_a';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'microsite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Splash page',
    'weight' => '5',
    'children' => array(
      0 => 'field_page_1_bg_image',
      1 => 'field_splash_logo',
      2 => 'field_splash_logo_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Splash page',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-a field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_a|node|microsite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b|node|microsite|form';
  $field_group->group_name = 'group_b';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'microsite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page 2',
    'weight' => '6',
    'children' => array(
      0 => 'field_page_2_bg_image',
      1 => 'field_page_2_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Page 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-b field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_b|node|microsite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c|node|microsite|form';
  $field_group->group_name = 'group_c';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'microsite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page 3',
    'weight' => '7',
    'children' => array(
      0 => 'field_page_3_bg_image',
      1 => 'field_page_3_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Page 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-c field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_c|node|microsite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d|node|microsite|form';
  $field_group->group_name = 'group_d';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'microsite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page 4',
    'weight' => '8',
    'children' => array(
      0 => 'field_page_4_bg_image',
      1 => 'field_page_4_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Page 4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-d field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_d|node|microsite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e|node|microsite|form';
  $field_group->group_name = 'group_e';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'microsite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page 5',
    'weight' => '9',
    'children' => array(
      0 => 'field_page_5_bg_image',
      1 => 'field_page_5_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Page 5',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-e field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_e|node|microsite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f|node|microsite|form';
  $field_group->group_name = 'group_f';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'microsite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '10',
    'children' => array(
      0 => 'field_footer_logo',
      1 => 'field_footer_logo_link',
      2 => 'field_footer_menu',
      3 => 'field_footer_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Footer',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-f field-group-fieldset ',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_f|node|microsite|form'] = $field_group;

  return $export;
}
