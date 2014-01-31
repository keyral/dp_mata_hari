<?php

class mata_hari_query extends EntityFieldQuery {

    /**
     * Add function queryAll()
     * 
     * @return array
     * 
     * to query all entity.
     */
    public function queryAll() {
        $resutls = '';
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'mata_hari_info');
        $query->propertyOrderBy('date', 'DESC');
        $result = $query->execute();
        if (isset($result['mata_hari_info'])) {
            $resutls = entity_load('mata_hari_info', array_keys($result['mata_hari_info']));
        }
        return $resutls;
    }

    /**
     * Add function deleteAll()
     * 
     * To delete all entity.
     */
    public function deleteAll() {
        entity_delete_multiple('mata_hari_info', array_keys($this->queryAll()));
    }

}
