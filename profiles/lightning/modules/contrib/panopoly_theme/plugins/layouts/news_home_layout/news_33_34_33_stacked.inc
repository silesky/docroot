<?php

// Plugin definition
$plugin = array(
  'title' => t('News stacked'),
  'category' => t('Panopoly'),
  'icon' => 'news_33_34_33_stacked.png',
  'theme' => 'news_home',
  'css' => 'news_33_34_33_stacked.css',

  'regions' => array(

    'column1' => t('First Column'),
    'column2' => t('Second Column'),

    'top' => t('Top'),

    'secondarycolumn1' => t('Row 2: First Column'),
    'secondarycolumn2' => t('Row 2: Second Column'),
    'secondarycolumn3' => t('Row 2: Third Column'),

    'middle' => t('Middle'),
    'bottom' => t('Bottom')
  ),
);
