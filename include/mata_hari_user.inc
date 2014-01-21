<?php

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
