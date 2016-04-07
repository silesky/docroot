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

?>
