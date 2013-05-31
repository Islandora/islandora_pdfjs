<?php

/**
 * @file
 * Any hooks/functions used by this modules theme's.
 */

/**
 * Implements hook_preprocess_theme().
 */
function islandora_pdfjs_reader_preprocess_islandora_pdfjs_reader(array &$variables) {
  $library_path = libraries_get_path('pdf.js');
  $module_path = drupal_get_path('module', 'islandora_pdfjs_reader');

}