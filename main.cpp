#include <iostream>
#include <string>
#include "BattleSystem.h"
#include "Category.h"
#include "Player.h"
#include "Enemy.h"
#include "GruntEnemy.h"
#include "BossEnemy.h"

using namespace std;

int main() {
  Player user;
  Category type;
  BattleSystem player;
  Enemy* grunt = new Grunt(1);
  
  string name = " ";
  int cat_choice;
  int flag = 0;
  int choice;

  grunt->setHealth(25);
  cout << player.health(type) << endl;
  cout << player.health_enemy(grunt) << endl;

  cout << "*You are in orientation*" << endl;
  do{
    cout << "Hello newcomer! I am Professor N, your guide at UCR. Tell me, what is your name? (First name OR First name and Last Name): ";
    getline(cin, name);
  }while(name == " ");

  user.set_name(name);
  cout << endl;

  cout << name << "! Nice to meet you!" << endl;
  cout << endl;

  do{
    cout << "Tell me, what college do you belong too?:\n1. BCOE \n2. CHASS \n3. CNAS \n4. BUSINESS \n(Type either 1-4)" << endl;
    cin >> cat_choice;
  }while(cat_choice <= 0 || cat_choice > 4);

  cout << endl << "I see, so your a "; 

  if(cat_choice == 1){
    cout << "BCOE ";
    type.set_category_type("BCOE");
  }

  if(cat_choice == 2){
    cout << "CHASS ";
    type.set_category_type("CHASS");
  }

  if(cat_choice == 3){
    cout << "CNAS ";
    type.set_category_type("CNAS");
  }

  if(cat_choice == 4){
    cout << "BUSINESS ";
    type.set_category_type("BUSINESS");
  }
  cout << "major!" << endl << endl;

  cout << "Come with me to my lab and I will brief you on what you need to accom- \n*an enemy BCOE grunt appeared*" << endl << endl;
  cout << name << " help!" << endl;
  cout << "This is your chance to prove yourself, prove to me you have what it takes to be the best " << type.get_category_type() << " student!" << endl << endl;


    grunt->setCriticalHit(1);
    grunt->setHealth(25);
    grunt->setDamage(3);
    grunt->setDodgeCounter(4);

  
do{
  while(flag == 0){
    cout << "Action (enter # between 1-4): \n1. Lightattack \n2. Mediumattack \n3. Powerfulattack \n4. dodge \n \nPlayer action: ";
    cin >> choice;
    
    if(choice > 0 && choice <= 4){
      player.PlayerTurn(choice, type, grunt);
      flag = 1;
    }
    else{
      cout << "You wasted a turn!" << endl;
      flag = 1;
    }
  }
  while(flag == 1){
    cout << endl;
    cout << "Enemy action: ";
    player.EnemyTurn(grunt, type);
    flag = 0;
    }
}while(player.health(type) != 0 || player.health_enemy(grunt) != 0);
  
  
  type.set_category_type("BCOE");
  int healthp = type.get_health();
  cout << healthp << endl;
  cout << endl;

  cout << "battle..Start!" << endl;
  
} 
