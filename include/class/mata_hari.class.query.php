<?php

class mata_hari_query extends EntityFieldQuery {

    /**
     * Add function queryAll()
     * 
     * @return array
     * 
     * to query all entity.
     */
    public $type;
    
    public function queryAll() {
        $resutls = '';
        $this->entityCondition('entity_type', 'mata_hari_info');
        $this->propertyOrderBy('date', 'DESC');
        $result = $this->execute();
        if (isset($result['mata_hari_info'])) {
            $resutls = entity_load('mata_hari_info', array_keys($result['mata_hari_info']));
        }
        return $resutls;
    }

    public function queryByType($type) {
        if (isset($type) && is_string($type)) {
            $resutls = '';
            $this->entityCondition('entity_type', 'mata_hari_info');
            //$this->entityCondition('category', $type);
            $this->propertyCondition('category', $type);
            $result = $this->execute();
            if (isset($result['mata_hari_info'])) {
                $resutls = entity_load('mata_hari_info', array_keys($result['mata_hari_info']));
            }
            return $resutls;
        }
    }

    /**
     * Add function to verification to delete entity.
     * @return boolean
     */
    public function predelete() {
        $return = FALSE;
        $this->entityCondition('entity_type', 'mata_hari_info');
        $result = $this->execute();
        if (isset($result['mata_hari_info'])) {
            return TRUE;
        }
        return FALSE;   
    }

    /**
     * Add function deleteAll()
     * 
     * To delete all entity.
     */
    public function deleteAll() {
        if ($this->predelete() === TRUE) {
            entity_delete_multiple('mata_hari_info', array_keys($this->queryAll()));
            return TRUE;
        } else {
            return FALSE;
        }
    }

    public function distinctTypeCategory() {
        $query = db_query('SELECT DISTINCT category from {mata_hari_info}')->fetchCol();
        return $query;
    }

}
