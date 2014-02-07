<?php

/**
 *  Implements hook_node_delete
 * 
 * @param object $vars
 * 
 * Return info to save mata hari.
 */
function mata_hari_node_delete($node) {
    $log = new mata_hari_log(t('Node'), t('Delete'));
    $log->set_message(t('Delete to node, nid: @nid, title: @title', array('@nid' => $node->nid, '@title' => $node->title)));
    $log->save();
}

/**
 * Implementes hook_node_insert
 * 
 * @param object $node
 */
function mata_hari_node_insert($node) {
    $log = new mata_hari_log(t('Node'), t('Add'));
    $log->set_message(t('Add to node, nid: @nid, title: @title', array('@nid' => $node->nid, '@title' => $node->title)));
    $log->save();
}

/**
 * Implementes hook_node_update
 * 
 * @param object $node
 */
function mata_hari_node_update($node) {
    $log = new mata_hari_log(t('Node'), t('Update'));
    $log->set_message(t('Update to node, nid: @nid, title: @title', array('@nid' => $node->nid, '@title' => $node->title)));
    $log->save();
}
