#ifndef MAP_H__
#define MAP_H__

#include <iostream>
#include "Building.h"
#include <string>
#include <vector>

class Map {
  private:
      std::vector<std::string> locationList;
  public:
      string get_location(Building x);
      void travel_to();
      void move_on(int &buildingID);
      void move_back(int &buildingID);
};
#endif
