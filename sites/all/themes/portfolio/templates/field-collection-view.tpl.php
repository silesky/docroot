<!-- remove field-collection-view clearfix view-mode-full
remove ul from field-collection-view-links
<?php
/*
http://drupal.stackexchange.com/questions/101354/how-to-render-a-field-collection-without-default-divs
<?php
print '<div' . drupal_attributes($element['#attributes']) . '>' . $element['#children'] . '</div>';
?>


*/


print $element['#children'];
