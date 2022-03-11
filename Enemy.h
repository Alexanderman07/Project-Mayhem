#include <iostream>
#ifndef ENEMY_H
#define ENEMY_H
class Enemy {
protected:
    int mCriticalHit = 0;
    int mDamage = 0;
    int mHealth = 0;
    int mDodgeCounter = 0;
    std::string mCategoryType = "Empty";
public:

    virtual void modify() = 0;

    int getCriticalHit(); 

    int getDamage();

    int getHealth();

    int getDodgeCounter();

    std::string getCategoryType();

    void setCriticalHit(int const& CriticalHit);

    void setDamage(int const& Damage);

    void setHealth(int const& Health);

    void setDodgeCounter(int const& Dodge);

    void setCategoryType(std::string const& type);

    void resetStats();
};
#endif
