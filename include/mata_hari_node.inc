<?php


function mata_hari_node_delete($vars){
    global $user;
    
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $user->name;
    $info->date = time();
    $info->comment = t('Delete to node, nid: @nid, title: @title',
            array('@nid' => $vars->vid, '@title' => $vars->title)
            );
    
    var_dump($info);
    exit();
}
