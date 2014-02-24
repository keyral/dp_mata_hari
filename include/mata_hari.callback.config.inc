<?php

function mata_hari_config() {
    $render = array();
    if (module_exists('mata_hari_user')) {
        $render[] = drupal_get_form('mata_hari_user_config_form');
    }
    if(module_exists('mata_hari_node')){
        $render[] = drupal_get_form('mata_hari_node_config_form');
    }

    return $render;
}
