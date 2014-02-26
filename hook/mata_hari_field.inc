<?php

/**
 * Implementes hook_field_create_field
 * 
 * @param object $field
 */
function mata_hari_field_create_field($field) {
    $log = new mata_hari_log(t('Field'), t('Add'));
    $log->set_message(t('Add to field, name: @name, type: @type', array('@name' => $field->field_name, '@type' => $field->type)));
    $log->save();
}

/**
 * Implementes hook_field_update_field
 * 
 * @param array $field
 * @param array $prior_field
 * @param array $has_data
 */
function mata_hari_field_update_field($field, $prior_field, $has_data) {
    $log = new mata_hari_log(t('Field'), t('Update'));
    $log->set_message(t('Update to field, name: @name, type: @type', array('@name' => $field->field_name, '@type' => $field->type)));
    $log->save();
}

/**
 * Implementes hook_field_delete_field
 * 
 * @param array $field
 * @param array $prior_field
 * @param array $has_data
 */
function mata_hari_field_delete_field($field, $prior_field, $has_data) {
    $log = new mata_hari_log(t('Field'), t('Delete'));
    $log->set_message(t('Delete to field, name: @name, type: @type', array('@name' => $field->field_name, '@type' => $field->type)));
    $log->save();
}
