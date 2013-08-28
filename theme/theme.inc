<?php

/**
 * @file
 * Any hooks/functions used by this modules theme's.
 */

/**
 * Implements hook_preprocess_theme().
 */
function islandora_pdfjs_reader_preprocess_islandora_pdfjs_reader(array &$variables) {
  // $library_path = libraries_get_path('pdf.js');
  // $module_path = drupal_get_path('module', 'islandora_pdfjs_reader');
  // can we render the same viewer without using an iframe or
  // duplicating the viewer.html html inside of the template?
  $islandora_object = $variables['object'];
  $file_url = url("islandora/object/{$islandora_object->id}/datastream/OBJ/view", array('absolute' => TRUE));

  $viewer = '<iframe class="pdf" webkitallowfullscreen mozallowfullscreen allowfullscreen frameborder="no" width="99%" height="600px" src="';
  $viewer .= $GLOBALS['base_url'] . '/' . libraries_get_path('pdf.js') . '/web/viewer.html?file=' . $file_url;
  $viewer .= '">' . $file_url . '</iframe>';
  $variables['islandora_pdfjs_reader'] = $viewer;

}
