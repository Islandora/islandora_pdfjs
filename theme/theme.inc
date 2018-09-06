<?php

/**
 * @file
 * Any hooks/functions used by this modules theme's.
 */

/**
 * Implements template_preprocess_HOOK().
 */
function template_preprocess_islandora_pdfjs(array &$variables) {
  $fedora_object = $variables['fedora_object'];
  $dsid = (isset($variables['dsid']) ? $variables['dsid'] : NULL);
  $params = drupal_get_query_parameters();

  if ($dsid) {
    $file_url = url("islandora/object/{$fedora_object->id}/datastream/$dsid/view");
    $variables['file_url'] = $file_url;
    $lib_path = libraries_get_path('pdfjs');
    $fragments = array();
    if (isset($params['page'])) {
      $fragments[] = "page={$params['page']}";
    }
    if (isset($params['search'])) {
      $fragments[] = "search={$params['search']}";
    }

    $variables['viewer_url'] = url(file_create_url("$lib_path/web/viewer.html"), array(
      'external' => TRUE,
      'query' => array(
        'file' => $file_url,
      ),
      'fragment' => implode('&', $fragments),
    ));
  }
}
