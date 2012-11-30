<?php

/**
 * @file
 * Contains \views_data_og_handler_relationship_og_membership.
 */

class views_data_og_handler_relationship_og_membership extends views_handler_relationship {

  /**
   * @var \views_plugin_query_default
   */
  public $query;

  /**
   * Overrides \views_handler_relationship::option_definition().
   */
  function option_definition() {
    return parent::option_definition();
  }

  /**
   * Overrides \views_handler_relationship::options_form().
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);


  }

  /**
   * Overrides \views_handler_relationship::query().
   */
  function query() {
    parent::query();

    $join = $this->query->table_queue[$this->alias];
  }


}
