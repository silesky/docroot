<?php function portfolio_process_page(&$variables) {
  // Add theme suggestion for all content types
    if (!empty($variables['node']) && !empty($variables['node']->type)) {
      $variables['theme_hook_suggestions'][] = 'page__node__' . $variables['node']->type;
    }
  }
?>
