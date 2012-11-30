<?php

/**
 * Implements hooK_views_data_alter().
 */
function views_data_title_views_data_alter(&$data) {

  $data['node']['title_autocomplete'] = array(
    'title' => t('Autocomplete title'),
    'help' => t('@TODO'),
    'filter' => array(
      'handler' => 'views_data_title_handler_filter_title',
    ),
  );
}
