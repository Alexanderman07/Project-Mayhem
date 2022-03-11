#include"Enemy.h"
#include"BossEnemy.h"
#include"GruntEnemy.h"
#include"HealthSpecialist.h"
#include"CritSpecialist.h"
#include"DamageSpecialist.h"
#include"DodgeSpecialist.h"
#include "ItemBag.h"
#include "Category.h"
#include "Enemy_test.hpp"

#include "gtest/gtest.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
