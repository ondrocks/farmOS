<?php
/**
 * @file
 * farm_livestock.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farm_livestock_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_assignment|log|farm_medical|form';
  $field_group->group_name = 'group_farm_assignment';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_medical';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_general';
  $field_group->data = array(
    'label' => 'Assignment',
    'weight' => '-5',
    'children' => array(
      0 => 'field_farm_log_owner',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Assignment',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-farm-assignment field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_farm_assignment|log|farm_medical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_category|log|farm_medical|form';
  $field_group->group_name = 'group_farm_category';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_medical';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_general';
  $field_group->data = array(
    'label' => 'Category',
    'weight' => '-6',
    'children' => array(
      0 => 'field_farm_log_category',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Category',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-farm-category field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_farm_category|log|farm_medical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|farm_asset|animal|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'animal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '4',
    'children' => array(
      0 => 'field_farm_files',
      1 => 'field_farm_images',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'label' => 'Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_farm_files|farm_asset|animal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|log|farm_medical|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_medical';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '3',
    'children' => array(
      0 => 'field_farm_files',
      1 => 'field_farm_images',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'label' => 'Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_farm_files|log|farm_medical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_general|farm_asset|animal|form';
  $field_group->group_name = 'group_farm_general';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'animal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '1',
    'children' => array(
      0 => 'field_farm_animal_castrated',
      1 => 'field_farm_animal_group',
      2 => 'field_farm_animal_sex',
      3 => 'field_farm_animal_type',
      4 => 'field_farm_date',
      5 => 'field_farm_description',
      6 => 'name',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_farm_general|farm_asset|animal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_general|log|farm_medical|form';
  $field_group->group_name = 'group_farm_general';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_medical';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '1',
    'children' => array(
      0 => 'field_farm_asset',
      1 => 'field_farm_notes',
      2 => 'name',
      3 => 'timestamp',
      4 => 'group_farm_assignment',
      5 => 'group_farm_category',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_farm_general|log|farm_medical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_id|farm_asset|animal|form';
  $field_group->group_name = 'group_farm_id';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'animal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Identification',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_animal_nicknames',
      1 => 'field_farm_animal_tag',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farm_id|farm_asset|animal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_lineage|farm_asset|animal|form';
  $field_group->group_name = 'group_farm_lineage';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'animal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Lineage',
    'weight' => '3',
    'children' => array(
      0 => 'field_farm_parent',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farm_lineage|farm_asset|animal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_movement|log|farm_medical|form';
  $field_group->group_name = 'group_farm_movement';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_medical';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_farm_tabs';
  $field_group->data = array(
    'label' => 'Movement',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_movement',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav_item',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-farm-movement field-group-field_group_easy_responsive_tabs_nav_item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farm_movement|log|farm_medical|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_tabs|farm_asset|animal|form';
  $field_group->group_name = 'group_farm_tabs';
  $field_group->entity_type = 'farm_asset';
  $field_group->bundle = 'animal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_farm_files',
      1 => 'group_farm_general',
      2 => 'group_farm_id',
      3 => 'group_farm_lineage',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'type' => 'vertical',
        'width' => 'auto',
        'fit' => '1',
        'closed' => '0',
        'activetab_bg' => '',
        'inactive_bg' => '',
        'active_border_color' => '',
        'active_content_border_color' => '',
        'tabidentify' => '',
        'required_fields' => 1,
        'classes' => 'group-farm-tabs field-group-field_group_easy_responsive_tabs_nav',
      ),
    ),
  );
  $field_groups['group_farm_tabs|farm_asset|animal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_tabs|log|farm_medical|form';
  $field_group->group_name = 'group_farm_tabs';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_medical';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_farm_files',
      1 => 'group_farm_general',
      2 => 'group_farm_movement',
    ),
    'format_type' => 'field_group_easy_responsive_tabs_nav',
    'format_settings' => array(
      'label' => 'Tabs',
      'instance_settings' => array(
        'type' => 'vertical',
        'width' => 'auto',
        'fit' => '1',
        'closed' => '0',
        'activetab_bg' => '',
        'inactive_bg' => '',
        'active_border_color' => '',
        'active_content_border_color' => '',
        'tabidentify' => '',
        'required_fields' => 1,
        'classes' => 'group-farm-tabs field-group-field_group_easy_responsive_tabs_nav',
      ),
    ),
  );
  $field_groups['group_farm_tabs|log|farm_medical|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Assignment');
  t('Category');
  t('Files');
  t('General');
  t('Identification');
  t('Lineage');
  t('Movement');
  t('Tabs');

  return $field_groups;
}
