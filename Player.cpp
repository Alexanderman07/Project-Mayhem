#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player:: Player() {
  Player_name = "";
  player_category.set_category_type(" ");
}

void Player::set_name(string n){
  this->Player_name = n;
}

string Player::get_name(){
  return Player_name;
}

void Player::User_guide(){

  cout <<  "Battle System Controls" << endl;
  cout <<  "1 - light attack" << endl;
  cout <<  "2 - medium attack" << endl;
  cout <<  "3 - powerful attack" << endl;


  cout << "Item Bag Controls" << endl;
  cout << "a - access item bag" << endl;
  cout << "1 - use light potion" << endl;
  cout << "2 - use medium potion" << endl;
  cout << "3 - use max potion" << endl;
  cout << "4 - use adderall" << endl;
  cout << "5 - use strength enhancemant pills" << endl;
  cout << "6 - use top ramen" << endl;
  cout << "7 - use liquid luck" << endl;
}

int Player::money(int n){
  int currentMoney = 0;   
  currentMoney += n;
  return currentMoney;
}
