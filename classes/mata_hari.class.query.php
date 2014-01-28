<?php

class mata_hari_query {

    /**
     * 
     * @return array
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
        echo $resutls;
    }

    public function deleteAll() {
        entity_delete_multiple('mata_hari_info', $this->queryAll());
    }

}
