<?php

function mata_hari_info_view_type($type) {
    if (isset($type)) {
        $query = new mata_hari_query();
        $result = $query->queryByType($type);
        if (isset($result)) {
            $tabs = mata_hari_tabs($result);
            
            
        } else {
            return drupal_set_message(t('This type is not entitys.'));
        }
    } else {
        return drupal_set_message(t('This type not exist !'), 'error');
    }
}
