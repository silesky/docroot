<?php

function portfolio_preprocess_page(&$variables) {
    $variables['test_me'] = "HELLO WORLD (page.tpl)";

    if (!empty($variables['node']) && !empty($variables['node']->type)) {
      $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }

}
function portfolio_preprocess_html(&$variables) {
      $variables['test'] = "HELLO WORLD (html.tpl)";
}

function portfolio_preprocess_node(&$variables) {

   $node = menu_get_object('node');

     //print_r($node);
   if (!empty($node)) {
          $background_image_uri = $node->field_background_image['und'][0]['uri']; // public://bg_0.jpg
          $variables['background_image_uri'] = $background_image_uri;
          $background_image_url = file_create_url($background_image_uri);  // http://portfolio.dd:8083/sites/portfolio.dd/files/bg_0.jpg
          $variables['background_image_url'] = $background_image_url;

   }
}

function getRelativePathByUri($uri) {
    $wrapper = file_stream_wrapper_get_instance_by_uri($uri);
    if ($wrapper) {
      $image_url_relative = $wrapper->getDirectoryPath() . "/" . file_uri_target($uri);
      return $image_url_relative;
    }
  }
?>
