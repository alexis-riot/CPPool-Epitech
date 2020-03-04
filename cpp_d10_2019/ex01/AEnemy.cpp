/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AEnemy.cpp
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type) :
hp(hp),
type(std::move(type)) {}

AEnemy::~AEnemy() {}

void AEnemy::takeDamage(int damage) {
    if (damage >= 0)
        this->hp -= damage;
}

const std::string AEnemy::getType() const {
    return this->type;
}

int AEnemy::getHP() const {
    return this->hp;
}