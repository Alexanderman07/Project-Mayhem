#include "Enemy.h" 

    int Enemy::getCriticalHit() {
        return this->mCriticalHit;
    }

    int Enemy::getDamage() {
        return this->mDamage;
    }

    int Enemy::getHealth() {
        return this->mHealth;
    }

    int Enemy::getDodgeCounter() {
        return this->mDodgeCounter;
    }
    std::string Enemy::getCategoryType() {
        return this->mCategoryType;
    }

    void Enemy::setCriticalHit(int const& CriticalHit) {
        this->mCriticalHit = CriticalHit;
    }

    void Enemy::setDamage(int const& Damage) {
        this->mDamage = Damage;
    }

    void Enemy::setHealth(int const& Health) {
        this->mHealth = Health;
    }

    void Enemy::setDodgeCounter(int const& Dodge) {
        this->mDodgeCounter = Dodge; 
    }

    void Enemy::setCategoryType(std::string const& type) {
        this->mCategoryType = type;
    }
    void Enemy::resetStats() {
        this->mCriticalHit = 0;
        this->mDamage = 0;
        this->mDodgeCounter = 0;
        this->mHealth = 0;
    }

