#include <iostream>
#include <string>
#include "ItemBag.h"
using namespace std;


ItemBag::ItemBag(){
  light_heal = 0;
  medium_heal = 0;
  max_heal = 0;
  adderall_count = 0;
  strength_enhancementPills = 0;
  top_ramen_meals = 0;
  liquid_luck_vials = 0;
  used_textbook = 0;
}


void ItemBag::use_light_potion(Category c){
  if(light_heal == 0){
    cout << "No remaining light potions available!" << endl;
  }
  else if(c.get_health() == c.get_max_health()){
    cout << "Player is already at max health!" << endl;
  }
  else{
    light_heal -= 1;
    if(c.get_health() + LIGHT_HEAL_VALUE > c.get_max_health()){
      c.set_health(c.get_max_health());
    }
    else{
      c.set_health(c.get_health() + LIGHT_HEAL_VALUE);
    }
    cout << "Heal successful! Health: " << c.get_health() << "/" << c.get_max_health() << endl << "Light potions remaining: " << light_heal << "." << endl;
  }
}


void ItemBag::use_medium_potion(Category c){
  if(medium_heal == 0){
    cout << "No remaining medium potions available!" << endl;
  }
  else if(c.get_health() == c.get_max_health()){
    cout << "Player is already at max health!" << endl;
  }
  else{
    medium_heal -= 1;
    if(c.get_health() + MEDIUM_HEAL_VALUE > c.get_max_health()){
      c.set_health(c.get_max_health());
    }
    else{
      c.set_health(c.get_health() + MEDIUM_HEAL_VALUE);
    }
    cout << "Heal successful! Health: " << c.get_health() << "/" << c.get_max_health() << endl << "Medium potions remaining: " << medium_heal << "." << endl;
  }
}

void ItemBag::use_max_potion(Category c){
  if(max_heal == 0){
    cout << "No remaining max potions available!" << endl;
  }
  else if(c.get_health() == c.get_max_health()){
    cout << "Player is already at max health!" << endl;
  }
  else{
    max_heal -= 1;
    if(c.get_health() + MAX_HEAL_VALUE > c.get_max_health()){
      c.set_health(c.get_max_health());
    }
    else{
      c.set_health(c.get_health() + MAX_HEAL_VALUE);
    }
    cout << "Heal successful! Health: " << c.get_health() << "/" << c.get_max_health() << endl << "Max potions remaining: " << get_max_heal_amount() << "." << endl;
  }
}

void ItemBag::use_adderall(Category c){
  if(adderall_count == 0){
    cout << "No adderall remaining!" << endl;
  }
  else{
    adderall_count -= 1;
    if(c.get_criticalhit() == c.get_max_critical_hit()){
      c.set_max_critical_hit(c.get_max_critical_hit() + 1);
      c.set_criticalhit(c.get_criticalhit() + 1);
    }
    else{
      c.set_criticalhit(c.get_criticalhit() + 1);
    }
    cout << "IQ temporarily increased!" << endl << "Adderall pills remaining: " << get_adderall_count_amount() << "." << endl;
  }
}

void ItemBag::use_strength_enhancementPills(Category c){
  if(strength_enhancementPills == 0){
    cout << "No strength enhancement pills available!" << endl;
  }
  else{
    strength_enhancementPills -= 1;
    if(c.get_damage() == c.get_max_damage()){
      c.set_max_damage(c.get_max_damage() + 1);
      c.set_damage(c.get_damage() + 1);
    }
    else{
      c.set_damage(c.get_damage() + 1);
    }
    cout << "Strength temporarily increased!" << endl << "Strength enhancement pills remaining: " << get_strength_enhancementPills_amount() << "." << endl;
  }
}

void ItemBag::top_ramen(Category c){
  if(top_ramen_meals == 0){
    cout << "No top ramen meals available!" << endl;
  }
  else{
    top_ramen_meals -= 1;
      if(c.get_health() == c.get_max_health()){
        c.set_max_health(c.get_max_health() + 1);
        c.set_health(c.get_health() + 10);
    }
    else{
      c.set_health(c.get_health() + 10);
    }
    cout << "Max health temporarily increased!" << endl << "Top ramen meals remaining: " << get_top_ramen_meals_amount() << "." << endl;
  }
}

void ItemBag::use_liquid_luck(Category c){
  if(liquid_luck_vials == 0){
    cout << "No liquid luck vials available!" << endl;
  }
  else{
    liquid_luck_vials -= 1;
    if(c.get_dodgeandcounter() == c.get_max_dodgeandcounter()){
      c.set_max_dodgeandcounter(c.get_max_dodgeandcounter() + 1);
      c.set_dodgeandcounter(c.get_dodgeandcounter() + 1);
    }
    else{
      c.set_dodgeandcounter(c.get_dodgeandcounter() + 1);
    }
    cout << "Luck temporarily increased!" << endl << "Liquid luck vials remaining: " << get_liquid_luck_vials() << "." << endl;
  }
}

    void ItemBag::set_light_heal_amount(int amount){
      light_heal += amount;
    }
    void ItemBag::set_medium_heal_amount(int amount){
      medium_heal += amount;
    }
    void ItemBag::set_max_heal_amount(int amount){
      max_heal += amount;
    }
    void ItemBag::set_adderall_amount(int amount){
      adderall_count += amount;
    }
    void ItemBag::set_strength_enhancementPills_amount(int amount){
      strength_enhancementPills += amount;
    }
    void ItemBag::set_top_ramen(int amount){
      top_ramen_meals += amount;
    }
    void ItemBag::set_liquid_luck(int amount){
      liquid_luck_vials += amount;
    }
    void ItemBag::set_used_textbook_amount(int amount){
      used_textbook += amount;
    }
    int ItemBag::get_light_heal_amount() {
      return light_heal;
    }
    int ItemBag::get_meduim_heal_amount(){
      return medium_heal;
    }
    int ItemBag::get_max_heal_amount(){
      return max_heal;
    }
    int ItemBag::get_adderall_count_amount(){
      return adderall_count;
    }
    int ItemBag::get_top_ramen_meals_amount(){
      return top_ramen_meals;
    }
    int ItemBag::get_liquid_luck_vials(){
      return liquid_luck_vials;
    }
    int ItemBag::get_strength_enhancementPills_amount(){
      return strength_enhancementPills;
    }
    int ItemBag::get_used_textbook_amount(){
      return used_textbook;
    }
