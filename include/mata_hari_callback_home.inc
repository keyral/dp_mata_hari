<?php

function mata_hari_info_callback_home(){
    $render = array();
    $distinct = new mata_hari_query();
    $query = $distinct->distinctType();
    var_dump($query);
    exit('bob va vaincre');
}
