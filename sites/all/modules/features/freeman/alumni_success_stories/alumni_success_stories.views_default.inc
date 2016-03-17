<?php
/**
 * @file
 * alumni_success_stories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alumni_success_stories_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'alumni_success_stories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alumni Success Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Heading */
  $handler->display->display_options['fields']['field_heading']['id'] = 'field_heading';
  $handler->display->display_options['fields']['field_heading']['table'] = 'field_data_field_heading';
  $handler->display->display_options['fields']['field_heading']['field'] = 'field_heading';
  $handler->display->display_options['fields']['field_heading']['label'] = '';
  $handler->display->display_options['fields']['field_heading']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Read More */
  $handler->display->display_options['fields']['field_read_more']['id'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['table'] = 'field_data_field_read_more';
  $handler->display->display_options['fields']['field_read_more']['field'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['label'] = '';
  $handler->display->display_options['fields']['field_read_more']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more']['click_sort_column'] = 'url';
  /* Field: Content: Story Image */
  $handler->display->display_options['fields']['field_story_image']['id'] = 'field_story_image';
  $handler->display->display_options['fields']['field_story_image']['table'] = 'field_data_field_story_image';
  $handler->display->display_options['fields']['field_story_image']['field'] = 'field_story_image';
  $handler->display->display_options['fields']['field_story_image']['label'] = '';
  $handler->display->display_options['fields']['field_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_story_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'alumni_success_stories' => 'alumni_success_stories',
  );

  /* Display: Alumni Success Stories */
  $handler = $view->new_display('block', 'Alumni Success Stories', 'block_1');
  $handler->display->display_options['display_description'] = 'Display Alumni Success Stories';
  $export['alumni_success_stories'] = $view;

  return $export;
}
