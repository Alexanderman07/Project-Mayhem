#ifndef __ENEMY_TEST_HPP__
#define __ENEMY_TEST_HPP__
#include"Enemy.h"
#include"BossEnemy.h"
#include"GruntEnemy.h"
#include"HealthSpecialist.h"
#include"CritSpecialist.h"
#include"DamageSpecialist.h"
#include"DodgeSpecialist.h"
#include "ItemBag.h"
#include "Category.h"
#include <memory>
#include <utility>

#include "gtest/gtest.h"

TEST(EnemyTest, EnemySimple){
    std::shared_ptr<Enemy> test(new Boss(2));
 
        EXPECT_EQ(test->getCriticalHit(), 0 );	
}
TEST(EnemyTest, EnemySetter){
    std::shared_ptr<Enemy> test(new Boss(2));
	test->setHealth(100);

        EXPECT_EQ(test->getHealth(),100 );
}
TEST(EnemyTest, EnemyModify){
    std::shared_ptr<Enemy> test(new Boss(2));
       test->setDamage(150);
       test->setDodgeCounter(5);
       test->setCriticalHit(50);
       test->setHealth(100);

	test->modify();


        EXPECT_EQ(test->getHealth(),200 );
EXPECT_EQ(test->getCriticalHit(),100 );
EXPECT_EQ(test->getDodgeCounter(),10 );
EXPECT_EQ(test->getDamage(),300 );
}
TEST(EnemyTest, EnemyType){
    std::shared_ptr<Enemy> baddy(new Boss(2));
        std::shared_ptr<Enemy> test(new CritSpecialist(baddy));
	test->modify();
	

        EXPECT_EQ(baddy->getCategoryType(),"BCOE" );
}

TEST(ItemTest, getHeals){
int num = 1;
set_light_heal_amount(num);
EXPECT_EQ(get_light_heal_amount(), num);
}

TEST(CategoryTest, getDamage){
int num = 2;
set_damage(num);
EXPECT_EQ(get_damage(), num);
}


#endif
