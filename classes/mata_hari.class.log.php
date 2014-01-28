<?php

/**
 * 
 */
class mata_hari_log {

    function __construct($category, $action) {
        global $user;
        global $language;

        $this->user = $user->uid;
        $this->language = $language->name;
        $this->time = time();
        $this->category = $category;
        $this->action = $action;
        $this->message = '';
    }

    public function set_message($message) {
        $this->message = $message;
    }

    public function save() {
        try {
            $log = new stdClass();
            $log->user = $this->user;
            $log->date = $this->time;
            $log->category = $this->category;
            $log->action = $this->action;
            $log->description = $this->message;
            entity_save('mata_hari_info', $log);
        } catch (Exception $e) {
            watchdog('error', $e->getTraceAsString());
        }
    }

}
