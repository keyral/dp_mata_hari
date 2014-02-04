<?php


function mata_hari_field_create_field($field) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Field';
    $info->action = t('Add');
    $info->description = t('Add to field, name: @name, type: @type', array('@name' => $field->field_name, '@type' => $field->type)
    );
    __mat_hari_save($info);
}

function mata_hari_field_update_field($field, $prior_field, $has_data) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Field';
    $info->action = t('Update');
    $info->description = t('Update to field, name: @name, type: @type', array('@name' => $prior_field->field_name, '@type' => $prior_field->type)
    );
    __mat_hari_save($info);
}

function mata_hari_field_delete_field($field, $prior_field, $has_data) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Field';
    $info->action = t('Delete');
    $info->description = t('Delete to field, name: @name, type: @type', array('@name' => $prior_field->field_name, '@type' => $prior_field->type)
    );
    __mat_hari_save($info);
}
