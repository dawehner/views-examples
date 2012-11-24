<?php

/**
 * @file
 * Contains \views_plugin_1_plugin_argument_default_first.
 */

/**
 * Describes the argument default plugin...
 *
 * @ingroup views_argument_default_plugins.
 */
class views_plugin_1_plugin_argument_default_first extends views_plugin_argument_default {

  /**
   * Overrides views_plugin_argument_default::get_argument().
   */
  function get_argument() {
    return rand(0, 100);
  }

}
