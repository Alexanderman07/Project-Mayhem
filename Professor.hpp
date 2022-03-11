#ifndef _PROFESSOR_HPP_
#define _PROFESSOR_HPP_

#include "Building.h"
#include <iostream>
#include <string>

class Professor: public Building{
  public:
    Professor() {}

    std::string winningGameMessage(){
      std::string s = "";
      s = "Congratulations, you have completed the game!";
      s += "Thank you for playing and we hope you enjoyed!";
      return s;
    }
};

#endif
