#include <iostream>
#include "BossEnemy.h"
  
    void Boss::modify() { 
        setDamage(mDamage * mult);
        setCriticalHit(mCriticalHit * mult);
        setDodgeCounter(mDodgeCounter * mult);
        setHealth(mHealth * mult);
    }

