<?php

/**
 *  Implements hook_node_delete
 * 
 * @global object $user
 * @param object $vars
 * 
 * Return info to save mata hari.
 */
function mata_hari_node_delete($node){
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->action = t('Delete');
    $info->description = t('Delete to node, nid: @nid, title: @title',
            array('@nid' => $node->vid, '@title' => $node->title)
            );
            __mat_hari_save($info);
}

function mata_hari_node_insert($node){
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $node->uid;
    $info->date = $node->created;
    $info->action = t('Add');
    $info->description = t('Add to node, title: @title',
            array('@title' => $node->title)
            );
            __mat_hari_save($info);
}

function mata_hari_node_update($node){
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->uid;
    $info->date = time();
    $info->action = t('Update');
    $info->description = t('Delete to node, nid: @nid, title: @title',
            array('@nid' => $node->vid, '@title' => $node->title)
            );
            __mat_hari_save($info);
}
