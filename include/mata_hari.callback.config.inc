<?php

function mata_hari_config() {
    $render = array();

    if (module_exists('mata_hari_user')) {
        $render[] = drupal_get_form('mata_hari_user_config_form');
    }
    if (module_exists('mata_hari_node')) {
        $render[] = drupal_get_form('mata_hari_node_config_form');
    }
    if (module_exists('mata_hari_field')) {
        $render[] = drupal_get_form('mata_hari_field_config_form');
    }
    if (module_exists('mata_hari_menu')) {
        $render[] = drupal_get_form('mata_hari_menu_config_form');
    }
    if (module_exists('mata_hari_taxonomy')) {
        $render[] = drupal_get_form('mata_hari_taxonomy_config_form');
    }
    if (module_exists('mata_hari_permission')) {
        $render[] = drupal_get_form('mata_hari_permission_config_form');
    }
    $render[] = drupal_get_form('mata_hari_config_form');
    return $render;
}

/**
 * Add form.
 */
function mata_hari_config_form() {
    $form = array();
    //labelle engloban le form
    $form['box'] = array(
        '#type' => 'markup',
        '#prefix' => '<div id="box">',
        '#suffix' => '</div>',
        '#markup' => ' ',
    );
    $form ['conf']['clear'] = array(
        '#type' => 'submit',
        '#ajax' => array(
            'callback' => 'mata_hari_config_form_callback_clear',
            'wrapper' => 'box',
        ),
        '#value' => t('Clear All'),
    );

    return $form;
}

/**
 * Add fonction to clear all entity.
 */
function mata_hari_config_form_callback_clear() {
    $query = new mata_hari_query();
    $resutl = $query->deleteAll();
    if($resutl == TRUE) {
        return drupal_set_message(t('Clear information failed'));
    } else {
        return drupal_set_message(t('The all information to mata hari is clear.'));
    }
    
}
