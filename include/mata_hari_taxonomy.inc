<?php

/**
 * Implements hook_taxonomy_term_insert()
 * 
 * @global object $user
 * @param object $term
 */
function mata_hari_taxonomy_term_insert($term) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Taxonomy';
    $info->action = t('Add');
    $info->description = t('Add to taxonomy, tid: @tid, name: @name', array('@tid' => $term->tid, '@name' => $term->name)
    );
    __mat_hari_save($info);
}

/**
 * Implements hook_taxonomy_term_update
 * 
 * @global object $user
 * @param object $term
 */
function mata_hari_taxonomy_term_update($term) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Taxonomy';
    $info->action = t('Update');
    $info->description = t('Update to taxonomy, tid: @tid, name: @name', array('@tid' => $term->tid, '@name' => $term->name)
    );
    __mat_hari_save($info);
}

/**
 * Implements hook_taxonomy_term_delete
 * 
 * @global object $user
 * @param object $term
 */
function mata_hari_taxonomy_term_delete($term) {
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Taxonomy';
    $info->action = t('Delete');
    $info->description = t('Delete to taxonomy, tid: @tid, name: @name', array('@tid' => $term->tid, '@name' => $term->name)
    );
    __mat_hari_save($info);
}

/**
 * Implements hook_taxonomy_vocabulary_insert
 * 
 * @global object $user
 * @param object $vocabulary
 */
function mata_hari_taxonomy_vocabulary_insert($vocabulary){
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Vocabulary Taxo';
    $info->action = t('Add');
    $info->description = t('Add to vocabulary taxonomy, name: @name', array('@name' => $vocabulary->name)
    );
    __mat_hari_save($info);    
}

/**
 * Implements hook_taxonomy_vocabulary_update
 * 
 * @global object $user
 * @param object $vocabulary
 */
function mata_hari_taxonomy_vocabulary_update($vocabulary){
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Vocabulary Taxo';
    $info->action = t('Update');
    $info->description = t('Update to vocabulary taxonomy, name: @name', array('@name' => $vocabulary->name)
    );
    __mat_hari_save($info);    
}

/**
 * Implements hook_taxonomy_vocabulary_delete
 * 
 * @global object $user
 * @param object $vocabulary
 */
function mata_hari_taxonomy_vocabulary_delete($vocabulary){
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->category = 'Vocabulary Taxo';
    $info->action = t('Delete');
    $info->description = t('Delete to vocabulary taxonomy, name: @name', array('@name' => $vocabulary->name)
    );
    __mat_hari_save($info);    
}