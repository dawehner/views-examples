<?php

/**
 * Implements hook_views_plugins().
 */
function views_plugin_1_views_plugins() {
  $plugins = array();
  $plugins['argument default']['example'] = array(
    'title' => t('Random number'),
    'handler' => 'views_plugin_1_plugin_argument_default_first',
  );

  return $plugins;
}
