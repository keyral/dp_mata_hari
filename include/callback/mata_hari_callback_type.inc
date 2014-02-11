<?php
function mata_hari_info_callback_type($type){
    $query = new mata_hari_query();
    $result = $query->queryByType($type);
    $render = array();
    $render[] = __mata_hari_info_table($result);
    return $render;
    
    
    
}

?>