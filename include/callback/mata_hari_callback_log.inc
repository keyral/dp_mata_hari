<?php

/**
 * Add function mata_hari_info_callback
 * 
 * Function to render information in the callback.
 */
function mata_hari_info_callback() {
    $query = new mata_hari_query();
    $results = $query->queryAll();
    
    $render = array();
    $render[] = __mata_hari_info_table($results);
    $render[] = drupal_get_form('mata_hari_info_callback_form');
    return $render;
}

function mata_hari_info_callback_form($form, &$form_state) {
    $form = array();
    $form ['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Delete all information'),
    );
    return $form;
}


function mata_hari_info_callback_form_submit($form, &$form_state) {
    try {
        $delete = new mata_hari_query();
        if($delete->deleteAll()){
        drupal_set_message(t('All entity delete.'));
        }
        else {
            drupal_set_message(t('Entity not in database, delete impossible.', 'error'));
        }
    } catch (Exception $exc) {
        drupal_set_message('Error to delete all entity', 'error');
        watchdog('error', $exc->getTraceAsString());
    }
}
