<?php
/*
if (file_exists($favicon = dirname($theme_object->filename) . '/favicon.ico')) {
    $cache[$theme]['favicon'] = file_create_url($favicon);
} else {
    $cache[$theme]['favicon'] = file_create_url('misc/favicon.ico');
} elseif ($cache[$theme]['favicon_path']) {
    $cache[$theme]['favicon'] = file_create_url($cache[$theme]['favicon_path']);
}
*/
function portfolio_preprocess_page(&$variables) {
    $variables['test_me'] = "HELLO WORLD (page.tpl)";



    if (!empty($variables['node']) && !empty($variables['node']->type)) {
      $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
  }


}
function portfolio_preprocess_html(&$variables) {
      $variables['test'] = "HELLO WORLD (html.tpl)";
}

?>
