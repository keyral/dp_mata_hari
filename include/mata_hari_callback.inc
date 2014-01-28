<?php

/**
 * Add function mata_hari_info_callback
 * 
 * Function to render information in the callback.
 */
function mata_hari_info_callback() {
    $render = array();
    $render[] = __mata_hari_info_table();
    $render[] = drupal_get_form('mata_hari_info_callback_form');
    return $render;
}

function __mata_hari_info_table() {
        $header = array(
            array('data' => t('id')),
            array('data' => t('date')),
            array('data' => t('user')),
            array('data' => t('category')),
            array('data' => t('action')),
            array('data' => t('comment')),
        );


        $rows = array();
        $results = new mata_hari_query();
        $results->queryAll;
        var_dump($results);
        exit('cool');
        if (isset($results) && $results != NULL) {
            foreach ($results as $result) {
                $user = user_load($result->user);
                $data['id'] = $result->id;
                $data['date'] = format_date($result->date, 'date_format_short');
                $data['user'] = l($user->name, 'user/' . $user->uid);
                $data['category'] = $result->category;
                $data['action'] = $result->action;
                $data['description'] = $result->description;
                $rows[] = array('data' => $data);
            }
        }


        // build the table for the nice output.
        $build['tablesort_table'] = array(
            '#theme' => 'table',
            '#header' => $header,
            '#rows' => $rows,
        );

        return $build;
    }

function mata_hari_info_callback_form($form, &$form_state) {
    
}

function mata_hari_info_callback_form_validate($form, &$form_state) {
    
}

function mata_hari_info_callback_form_submit($form, &$form_state) {
    
}
