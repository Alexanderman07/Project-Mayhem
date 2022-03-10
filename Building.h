#ifndef _BUILDING_H
#define _BUILDING_H
#include <iostream>
#include <string>

class Building{
  private:
      int building_id;
  public:
      Building();
      void set_id(int n);
      int get_ID();
      void pre_save();
      std::string welcomeMessage();
};
#endif
