#include "Enemy.h"
#ifndef CRITSPECIALIST_H
#define CRITSPECIALIST_H
class CritSpecialist : public Enemy {
private:
    Enemy* enemyObject;
    int IQMult = 2;
    std::string type = "BCOE";
public:
      CritSpecialist(Enemy* enemyType) : Enemy() {
        enemyObject = enemyType;
        }
        
    virtual void modify();
    
};
#endif
