<?php
/**
 * @file
 * tulane_news_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tulane_news_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Related Organizations (field_organizations_ref) */
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['id'] = 'field_organizations_ref_tid';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['table'] = 'field_data_field_organizations_ref';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['field'] = 'field_organizations_ref_tid';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate_options']['vocabularies'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'articles';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Related Organizations (field_organizations_ref) */
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['id'] = 'field_organizations_ref_tid';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['table'] = 'field_data_field_organizations_ref';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['field'] = 'field_organizations_ref_tid';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate_options']['vocabularies'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Related Organizations (field_organizations_ref) */
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['id'] = 'field_organizations_ref_tid';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['table'] = 'field_data_field_organizations_ref';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['field'] = 'field_organizations_ref_tid';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate_options']['vocabularies'] = array(
    'organizations' => 'organizations',
  );
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_organizations_ref_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_organizations_ref_tid' => array(
      'type' => 'user',
      'context' => 'entity:collection.cid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Related Organizations (field_organizations_ref)',
    ),
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:collection.cid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['articles'] = $view;

  return $export;
}
