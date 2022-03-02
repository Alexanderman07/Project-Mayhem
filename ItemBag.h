#include <iostream>
#include <string>
#ifndef ITEMBAG_H
#define ITEMBAG_H
using namespace std;


class ItemBag{
	public:
		ItemBag();
		void use_light_potion();
		void use_medium_potion();
		void use_max_potion();
		void use_adderall();
		void use_strength_enhancementPills();
		void top_ramen();
		void use_liquid_luck();

		int light_heal;
		int medium_heal;
		int max_heal;
		int adderall_count;
		int strength_enhancementPills;
		int top_ramen_meals;
		int liquid_luck_vials;
		int used_textbook;

	private:
		const int LIGHT_HEAL_VALUE = 10;
		const int MEDIUM_HEAL_VALUE = 25;
		const int MAX_HEAL_VALUE = 50;
};


#endif
