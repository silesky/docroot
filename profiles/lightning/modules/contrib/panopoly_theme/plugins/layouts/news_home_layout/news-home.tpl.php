<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:

 *   - $content['column1']: 
 *   - $content['column2']: 
 *   - $content['top']: Content in the top row.
 *   - $content['secondarycolumn1']: Content in the left column.
 *   - $content['secondarycolumn2']: Content in the middle column.
 *   - $content['secondarycolumn3']: Content in the right column.
 *   - $content['middle']: Content in the middle row.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="panel-display panel-3col-33-stacked  clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>


  <div class="top-wrapper">
  <?php if ($content['column1']): ?>
    <div class="panel-panel panel-col-left-above">
      <div class="inside"><?php print $content['column1']; ?></div>
    </div>
  <?php endif ?>

  <?php if ($content['column2']): ?>
    <div class="panel-panel panel-col-right-above">
      <div class="inside"><?php print $content['column2']; ?></div>
    </div>
  <?php endif ?>
</div>



  <?php if ($content['top']): ?>
    <div class="panel-panel panel-col-top">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  <?php endif ?>




  <div class="center-wrapper">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['secondarycolumn1']; ?></div>
    </div>

    <div class="panel-panel panel-col">
      <div class="inside"><?php print $content['secondarycolumn2']; ?></div>
    </div>

    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['secondarycolumn3']; ?></div>
    </div>
  </div>


  <?php if ($content['middle']): ?>
    <div class="panel-panel panel-col-middle">
      <div class="inside"><?php print $content['middle']; ?></div>
    </div>
  <?php endif ?>


  <?php if ($content['bottom']): ?>
    <div class="panel-panel panel-col-bottom">
      <div class="inside"><?php print $content['bottom']; ?></div>
    </div>
  <?php endif ?>
</div>
