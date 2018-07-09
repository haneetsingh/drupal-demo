<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */
// Plugin definition.
$plugin = array(
  'title' => t('3 column custom 25-50-25'),
  'category' => t('Custom Layout'),
  'icon' => 'my_panel_3_col.png',
  'theme' => 'my_panel_3_col',
  'css' => 'my-panel-3-col.css',
  'regions' => array(
    'left' => t('Left'),
    'center' => t('Center'),
    'right' => t('Right'),
  ),
);
