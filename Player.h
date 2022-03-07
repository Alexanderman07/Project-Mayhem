#include<iostream>
#ifndef PLAYER_H
#define PLAYER_H

#include "Category.h"
#include "ItemBag.h"
#include "Map.h"
using namespace std;

class Player {
  private:
    string Player_name;
    Category player_category;
  public:
    Player();
    void Item_Bag(ItemBag n);
    void set_name(string n);
    void Open_menu(Player n);
    void User_guide();
    void Open_map();
    string get_name();
    int money(int n);
    void save(Player n);   
};
#endif
