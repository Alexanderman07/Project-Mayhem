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


void Player::Item_Bag(ItemBag n){

  cout << "Light Heals: " << n.light_heal << endl;
  cout << "Medium Heals: " << n.medium_heal << endl;
  cout << "Max Heals: " << n.max_heal << endl;
  cout << "Adderall Count: " << n.adderall_count << endl;
  cout << "Strength Enhancement Pills: " << n.strength_enhancementPills << endl;
  cout << "Top Ramen Meals: " << n.top_ramen_meals << endl;
  cout << "Liquid Luck Vials: " << n.liquid_luck_vials << endl;
  cout << "Used Textbooks: " << n.used_textbook << endl;
}

void Player::Open_map(){

}


void Player::Open_menu(Player n){
  string input = "";
  
  cout << "Menu:" << endl;
  cout << "Type 's' to save or 'h' to get help. " << endl << endl;
  
  while(input != "s" || input != "h"){
    cin >> input;
  }

  if(input == "s"){
    n.save(n);
  }
  else{
    User_guide();
  }
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

void Player::save(Player n){
  Category savePlayerCategory = n.player_category;
  int saveMoney = n.money(0); 
  cout << "Progress saved." << endl;
}
