#include <iostream>
#include <string>
#include "ItemBag.h"
#include "Player.h"
#include "Category.h"
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


void ItemBag::use_light_potion(){
	if(light_heal == 0){
		cout << "No remaining light potions available!" << endl;
	}
	else if(get_health() == max_health){
		cout << "Player is already at max health!" << endl;
	}
	else{
		light_heal -= 1;
		if(get_health() + LIGHT_HEAL_VALUE > max_health){
			category_health = max_health;
		}
		else{
			category_health += LIGHT_HEAL_VALUE;
		}
		cout << "Heal successful! Health: " << get_health() << "/" << max_health << endl << "Light potions remaining: " << light_heal << "." << endl;
	}
}


void ItemBag::use_medium_potion(){
  if(medium_heal == 0){
    cout << "No remaining medium potions available!" << endl;
  }
  else if(get_health() == max_health){
    cout << "Player is already at max health!" << endl;
  }
  else{
    medium_heal -= 1;
             if(get_health() + MEDIUM_HEAL_VALUE > max_health){
                  category_health = max_health;
             }
             else{
                   catagory_health += MEDIUM_HEAL_VALUE;
             }
             cout << "Heal successful! Health: " << get_health() << "/" << max_health << endl << "Medium potions remaining: " << medium_heal << "." << endl;
  }
}


void ItemBag::use_max_potion(){
  if(max_heal == 0){
    cout << "No remaining max potions available!" << endl;
  }
  else if(get_health() == max_health){
    cout << "Player is already at max health!" << endl;
  }
  else{
    max_heal -= 1;
    if(get_health() + MAX_HEAL_VALUE > max_health){
      category_health = max_health;
    }
    else{
      category_health += MAX_HEAL_VALUE;
    }
    cout << "Heal successful! Health: " << get_health() << "/" << max_health << endl << "Max potions remaining: " << max_heal << "." << endl;
  }
}


void ItemBag::use_adderall(){
  if(adderall_count == 0){
    cout << "No adderall remaining!" << endl;
  }
  else{
    adderall_count -= 1;
    if(category_criticalhit == max_criticalhit){
      max_criticalhit += 1;
      category_criticalhit += 1;
    }
    else{
      category_criticalhit += 1;
    }
    cout << "IQ temporarily increased!" << endl << "Adderall pills remaining: " << adderall_count << "." << endl;
  }
}


void ItemBag::use_strength_enhancementPills(){
  if(strength_enhancementPills == 0){
    cout << "No strength enhancement pills available!" << endl;
  }
  else{
    strength_enhancementPills -= 1;
    if(category_damage == max_damage){
      max_damage += 1;
      category_damage += 1;
    }
    else{
      category_damage += 1;
    }
    cout << "Strength temporarily increased!" << endl << "Strength enhancement pills remaining: " << strength_enhancementPills << "." << endl;
  }
}


void ItemBag::top_ramen(){
  if(top_ramen_meals == 0){
    cout << "No top ramen meals available!" << endl;
  }
  else{
    top_ramen_meals -= 1
      if(category_health == max_health){
        max_health += 1;
        category_health += 10;
    }
    else{
      category_health += 10;
    }
    cout << "Max health temporarily increased!" << endl << "Top ramen meals remaining: " << top_ramen_meals << "." << endl;
  }
}

void ItemBag::use_liquid_luck(){
  if(liquid_luck_vials == 0){
    cout << "No liquid luck vials available!" << endl;
  }
  else{
    liquid_luck_vials -= 1;
    if(category_dodgeandcounter == max_dodgeandcounter){
      max_dodgeandcounter += 1;
      category_dodgeandcounter += 1;
    }
    else{
      category_dodgeandcounter += 1;
    }
    cout << "Luck temporarily increased!" << endl << "Liquid luck vials remaining: " << liquid_luck_vials << "." << endl;
  }
}

