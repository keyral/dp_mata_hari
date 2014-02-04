<?php

/**
 * Implements hook_taxonomy_term_insert()
 * 
 * @param object $term
 */
function mata_hari_taxonomy_term_insert($term) {
    $log = new mata_hari_log(t('Taxonomy'), t('Add'));
    $log->set_message(t('Add taxonomy, , tid: @tid, name: @name', array('@tid' => $term->tid, '@name' => $term->name)));
    $log->save();
}

/**
 * Implements hook_taxonomy_term_update
 * 
 * @param object $term
 */
function mata_hari_taxonomy_term_update($term) {
    $log = new mata_hari_log(t('Taxonomy'), t('Update'));
    $log->set_message(t('Update taxonomy, tid: @tid, name: @name', array('@tid' => $term->tid, '@name' => $term->name)));
    $log->save();
}

/**
 * Implements hook_taxonomy_term_delete
 * 
 * @param object $term
 */
function mata_hari_taxonomy_term_delete($term) {
    $log = new mata_hari_log(t('Taxonomy'), t('Delete'));
    $log->set_message(t('Update taxonomy, tid: @tid, name: @name', array('@tid' => $term->tid, '@name' => $term->name)));
    $log->save();
}

/**
 * Implements hook_taxonomy_vocabulary_insert
 * 
 * @param object $vocabulary
 */
function mata_hari_taxonomy_vocabulary_insert($vocabulary) {
    $log = new mata_hari_log(t('Vocabulary Taxonomy'), t('Add'));
    $log->set_message(t('Add to vocabulary taxonomy, name: @name', array('@name' => $vocabulary->name)));
    $log->save();
}

/**
 * Implements hook_taxonomy_vocabulary_update
 * 
 * @param object $vocabulary
 */
function mata_hari_taxonomy_vocabulary_update($vocabulary) {
    $log = new mata_hari_log(t('Vocabulary Taxonomy'), t('Update'));
    $log->set_message(t('Update to vocabulary taxonomy, name: @name', array('@name' => $vocabulary->name)));
    $log->save();
}

/**
 * Implements hook_taxonomy_vocabulary_delete
 * 
 * @param object $vocabulary
 */
function mata_hari_taxonomy_vocabulary_delete($vocabulary) {
    $log = new mata_hari_log(t('Vocabulary Taxonomy'), t('Delete'));
    $log->set_message(t('Delete to vocabulary taxonomy, name: @name', array('@name' => $vocabulary->name)));
    $log->save();
}
