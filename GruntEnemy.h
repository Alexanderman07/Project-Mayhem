#include<iostream>
#include "Enemy.h"
#ifndef GRUNTENEMY_H
#define GRUNTENEMY_H
class Grunt : public Enemy {
private:
    int mult = 1;
public:
    Grunt(int value) : Enemy() { this->mult = value; };
    virtual void modify();

};
#endif
