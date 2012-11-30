<?php

/**
 * @file
 * Contains \views_example_style_plugin_style_fieldset.
 */

/**
 * Defines a style plugin that renders the full view as fieldset.
 *
 * @ingroup views_style_plugins
 */
class views_example_style_plugin_style_fieldset extends views_plugin_style_default {

  /**
   * Overrides \views_plugin_style::options_definition().
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['collapsible'] = array('default' => TRUE, 'bool' => TRUE);
    $options['collapsed'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  /**
   * Overrides \views_plugin_style::options_form().
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['collapse_settings'] = array(
      '#title' => t('Fieldset settings'),
      '#type' => 'fieldset',
      '#collapsible' => FALSE,
      '#collapsed' => FALSE,
    );
    $form['collapse_settings']['collapsible'] = array(
      '#title' => t('Collapsible fieldset'),
      '#type' => 'checkbox',
      '#description' => t('Check to allow the user to collaps the fieldset'),
      '#default_value' => $this->options['collapsible'],
    );

    $form['collapse_settings']['collapsed'] = array(
      '#title' => t('Collapsed by default'),
      '#type' => 'checkbox',
      '#default_value' => $this->options['collapsed'],
    );
  }

}
