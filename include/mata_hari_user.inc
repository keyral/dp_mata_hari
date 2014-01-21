<?php

function mata_hari_user_insert($edit, $account, $category) {
    var_dump($edit, $account, $category);
    exit('die');
    global $user;
    // Construction de l'objet info.
    $info = new stdClass();
    $info->user = $node->uid;
    $info->date = $node->created;
    $info->category = 'User';
    $info->action = t('Add');
    $info->description = t('Add to user, title: @title', array('@title' => $node->title)
    );
    __mat_hari_save($info);
}
