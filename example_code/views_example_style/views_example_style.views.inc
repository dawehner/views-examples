<?php

/**
 * Implements hook_views_plugins.
 */
function views_example_style_views_plugins() {
  $plugins = array();
  $plugins['style']['fieldset'] = array(
    'title' => t('Fieldset'),
    'help' => t('Renders the full views output in a fieldset'),
    'handler' => 'views_example_style_plugin_style_fieldset',
    'theme' => 'views_example_style_views_fieldset',

    'uses row plugin' => TRUE,
    'uses fields' => FALSE,
    'uses row class' => FALSE,
    'uses grouping' => FALSE,

    'uses options' => TRUE,
    'type' => 'normal',
  );

  return $plugins;
}
