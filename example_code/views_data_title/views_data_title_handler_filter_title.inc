<?php

/**
 * @file
 * Contains \views_data_title_handler_filter_title
 */

class views_data_title_handler_filter_title extends views_handler_filter {

  /**
   * Overrides \views_handler_filter_numeric::value_form().
   */
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    $form['value'] = array(
      '#type' => 'textfield',
      '#autocomplete_path' => 'node/title/autocomplete',
      '#default_value' => $this->value,
    );
  }

  /**
   * Overrides \views_handler_filter_numeric::query().
   */
  function query() {
    $this->ensure_my_table();
//    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", $this->value, $this->operator);
    $this->query->add_where($this->options['group'], "$this->table_alias.title", $this->value, $this->operator);
  }

}
