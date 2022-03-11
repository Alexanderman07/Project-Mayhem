#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player:: Player() {
  Player_name = "";
  player_category.set_category_type(" ");
  int money = 0;
}

void Player::set_name(string n){
  this->Player_name = n;
}

string Player::get_name(){
  return Player_name;
}

void Player::set_money(int n){
  this->money = n;
}

int Player::get_money(){
  return this->money;
}

void Player::Item_Bag(ItemBag n){

  cout << "Light Heals: " << n.get_light_heal_amount() << endl;
  cout << "Medium Heals: " << n.get_meduim_heal_amount() << endl;
  cout << "Max Heals: " << n.get_max_heal_amount() << endl;
  cout << "Adderall Count: " << n.get_adderall_count_amount() << endl;
  cout << "Strength Enhancement Pills: " << n.get_strength_enhancementPills_amount() << endl;
  cout << "Top Ramen Meals: " << n.get_top_ramen_meals_amount() << endl;
  cout << "Liquid Luck Vials: " << n.get_liquid_luck_vials() << endl;
  cout << "Used Textbooks: " << n.get_used_textbook_amount() << endl;
}

void Player::Open_map(){
 Map playerMap;
  cout << "You have opened up the map! You can travel to different locations across campus!" << endl;
  cout << endl;
}


void Player::Open_menu(Player n){
  string input = "";
  
  cout << "Menu:" << endl;
  cout << "Type 's' to save or 'h' to get help. " << endl << endl;
  
  while(input != "s" || input != "h"){
    cin >> input;
  }

  if(input == "s"){
    save(n);
  }
  else{
    User_guide();
  }
}

void Player::User_guide(){
  cout << endl;
  cout <<  "Battle System Controls" << endl;
  cout <<  "1 - light attack" << endl;
  cout <<  "2 - medium attack" << endl;
  cout <<  "3 - powerful attack" << endl;

  cout << endl;
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

void Player::addMoney(int n){
  money += n;
}

void Player::save(Player n){
  Category savePlayerCategory = player_category;
  int saveMoney = get_money(); 
  cout << "Progress saved." << endl;
}
