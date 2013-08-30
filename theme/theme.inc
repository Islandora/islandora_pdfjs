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
  $fedora_object = $variables['fedora_object'];

  if (isset($fedora_object['OBJ']) && $fedora_object['OBJ']->mimetype == 'application/pdf') {
    $dsid = 'OBJ';
  }
  else {
    $dsid = 'PDF';
  }
  $file_url = url("islandora/object/{$fedora_object->id}/datastream/$dsid/view", array('absolute' => TRUE));
  $viewer_url = url(libraries_get_path('pdfjs').'/web/viewer.html', array('absolute' => TRUE, 'query' => array('file' => $file_url)));
  $viewer = <<<HTML
  <iframe class="pdf" webkitallowfullscreen mozallowfullscreen allowfullscreen frameborder="no" width="99%" height="800px"
    src="$viewer_url">$file_url</iframe>
HTML;
  $variables['islandora_pdfjs_reader'] = $viewer;

}
