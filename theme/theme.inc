<?php

/**
 * @file
 * Any hooks/functions used by this modules theme's.
 */

/**
 * Implements hook_preprocess_theme().
 */
function islandora_pdfjs_preprocess_islandora_pdfjs(array &$variables) {
  $fedora_object = $variables['fedora_object'];
  $dsid = (isset($variables['dsid']) ? $variables['dsid'] : NULL);

  if ($dsid) {
    $file_url = url("islandora/object/{$fedora_object->id}/datastream/$dsid/view", array('absolute' => TRUE));
    $variables['file_url'] = $file_url;
    $variables['viewer_url'] = url(libraries_get_path('pdfjs') . '/web/viewer.html', array('absolute' => TRUE, 'query' => array('file' => $file_url)));
  }
}
