#include<iostream>
#include "Enemy.h"
#ifndef BOSSENEMY_H
#define BOSSENEMY_H
class Boss : public Enemy {
private:
    int mult = 2 ;
public:
    Boss(int value) : Enemy() { this->mult = value; };
    virtual void modify();
    
};
#endif
