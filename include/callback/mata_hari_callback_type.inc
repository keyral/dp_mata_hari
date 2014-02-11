<?php
function mata_hari_info_callback_type($type){
        $render = array();
    //$distinct = new mata_hari_query();
    //$query = $distinct->distinctTypeCategory();
    //var_dump($query);
    $distinct1 = new mata_hari_query();
    $query1 = $distinct1->queryByType('user');
    var_dump($query1);
    if(!isset($query1)){
        var_dump('good');
    }
    else {
        var_dump('no good');
    }
    exit('hor no exit');
}

?>