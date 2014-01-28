<?php

/*
 */

class mata_hari_log {



function __construct() {
    global $user; 
    global $language;   
    
    $this->user = $user->uid;
    $this->language = $language->name;
    $this->time = time();
}

public function log() {
var_dump($this);
exit('die');
}





}