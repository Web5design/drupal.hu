<?php

/**
 * @file
 * Implementation of OpenLayers behavior.
 */

/**
 * Pan Zoom Bar Behavior
 */
class openlayers_behavior_panzoombar extends openlayers_behavior {
  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'panzoombar' => '',
    );
  }

  function js_dependency() {
    return array('OpenLayers.Control.PanZoomBar');
  }

  function options_form($defaults) {
    return array();
  }

  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_js(drupal_get_path('module', 'openlayers') . 
      '/includes/behaviors/js/openlayers_behavior_panzoombar.js');
    return $this->options;
  }
}