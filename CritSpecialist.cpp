#include "CritSpecialist.h"

    void CritSpecialist::modify(){
        enemyObject->setCriticalHit(enemyObject->getCriticalHit() * IQMult);

        enemyObject->setCategoryType(type);
    }
