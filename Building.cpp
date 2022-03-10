#include "Building.h"
#include <iostream>

Building::Building(){
  int building_id = 0;
}

void Building::set_id(int n){
  this->building_id = n;
}

int Building::get_ID(){
    return building_id;
}

void Building::pre_save(){
  
}

string Building::welcomeMessage(){
  
}
