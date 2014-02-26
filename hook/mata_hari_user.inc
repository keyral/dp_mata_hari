<?php

/**
 * Implements hook_user_insert
 * 
 * @param object $edit
 * @param object $account
 * @param object $category
 * 
 * Create log in user insert.
 */
function mata_hari_user_insert($edit, $account, $category) {

    $log = new mata_hari_log(t('User'), t('Add'));
    $log->set_message(t('Add to user, name: @name, email: @email', array('@name' => $account->name, '@email' => $account->mail)));
    $log->save();
}

/**
 * Implements hook_user_update
 * 
 * @param object $edit
 * @param object $account
 * @param object $category
 * 
 * Add function to save user update.
 */
function mata_hari_user_update($edit, $account, $category) {
    $log = new mata_hari_log(t('User'), t('Update'));
    $log->set_message(t('Update to user, name: @name, email: @email', array('@name' => $account->name, '@email' => $account->mail)));
    $log->save();
}

/**
 * Implements hook_user_delete
 * 
 * @param type $edit
 * @param type $account
 * @param type $category
 * 
 * Add function to save user delete
 */
function mata_hari_user_delete($edit, $account, $category) {
    $log = new mata_hari_log(t('User'), t('Delete'));
    $log->set_message(t('Delete to user, name: @name, email: @email', array('@name' => $account->name, '@email' => $account->mail)));
    $log->save();
}
