<?php

/**
 * Implements hook_user_insert
 * 
 * @global object $user
 * @param object $edit
 * @param object $account
 * @param object $category
 * 
 * Create log in user insert.
 */
function mata_hari_user_insert($edit, $account, $category) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'User';
    $info->action = t('Add');
    $info->description = t('Add to user, name: @name, email: @email', array('@name' => $account->name, '@email' => $account->mail)
    );
    __mat_hari_save($info);
}

/**
 * Implements hook_user_update
 * 
 * @global object $user
 * @param object $edit
 * @param object $account
 * @param object $category
 * 
 * Add function to save user update.
 */
function mata_hari_user_update($edit, $account, $category) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'User';
    $info->action = t('Update');
    $info->description = t('Update to user, name: @name, email: @email', array('@name' => $account->name, '@email' => $account->mail)
    );
    __mat_hari_save($info);
}

/**
 * Implements hook_user_delete
 * 
 * @global object $user
 * @param type $edit
 * @param type $account
 * @param type $category
 * 
 * Add function to save user delete
 */
function mata_hari_user_delete($edit, $account, $category) {
    var_dump($edit, $account, $category);
    exit('probleme setting delete');
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'User';
    $info->action = t('Delete');
    $info->description = t('Delete to user, name: @name, email: @email', array('@name' => $account->name, '@email' => $account->mail)
    );
    __mat_hari_save($info);
}
