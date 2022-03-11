#include <iostream>
#include "GruntEnemy.h"

    void Grunt:: modify() {
        setDamage(mDamage * mult);
        setCriticalHit(mCriticalHit * mult);
        setDodgeCounter(mDodgeCounter * mult);
        setHealth(mHealth * mult);
        
    }


