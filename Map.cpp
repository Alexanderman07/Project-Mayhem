nclude <iostream>
#include "Map.h"
#include "Building.h"
using namespace std;

string Map::get_location(Building x){
  string location;
  if(x.get_id() == 1){
    location = "Office Hours(shop)";
  }
  if(x.get_id() == 2){
    location = "Department Head";
  }
  if(x.get_id() == 3){
    location = "SRC Arena";
  }
  if(x.get_id() == 4){
    location = "Professor's Office";
  }
 return location;
}

void Map::travel_to(){ //still working on it 
 int n;
 int flag;
 Building userTravel;
 cout << "Which part of campus would you like to travel to?" << endl;
 cout << "1 - Office Hours(shop)" << endl;
 cout << "2 - Department Head" << endl;
 cout << "3- SRC Arena" << endl;
 cout << "4- Professor's Office" << endl;
 cin >> n;

while(flag == 0){
  if(n == 1){
    cout << "Traveling to Office Hours!" << endl;
    userTravel.set_id(1);
    flag++;
  }
  else if(n == 2){
    cout << "Traveling to the Department Head" << endl;
    userTravel.set_id(2);
    flag++;
  }
  else if(n == 3){
    cout << "Traveling to the SRC Arena!" << endl;
    userTravel.set_id(3);
    flag++;
  }
  else if(n == 4){
    cout << "Traveling to the Professor's Office" << endl;
    userTravel.set_id(4);
    flag++;
   }
  else{
    cout << "Not a valid location, try again: " << endl;
    cout << "1 - Office Hours(shop)" << endl;
    cout << "2 - Department Head" << endl;
    cout << "3- SRC Arena" << endl;
    cout << "4- Professor's Office" << endl;
    cin >> n;
      }
    }
  }

void Map::move_on(int &buildingID){
  buildingID++;
}

void Map::move_back(int &buildingID){
  buildingID--;
}
