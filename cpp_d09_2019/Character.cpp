/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level) {
    this->name = name;
    this->lvl = level;
    this->pv = 100;
    this->power = 100;

    this->strength = 5;
    this->stamina = 5;
    this->intelligence = 5;
    this->spirit = 5;
    this->agility = 5;

    this->Range = Character::CLOSE;

    std::cout << this->name << " Created" << std::endl;
}

Character::~Character() {
    // destructor
}

const std::string & Character::getName() const {
    return this->name;
}

int Character::getLvl() const {
    return this->lvl;
}

int Character::getPower() const {
    return this->power;
}

int Character::getPv() const {
    return this->pv;
}

int Character::CloseAttack() {
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    this->power -= 10;
    std::cout << this->name << " strikes with a wooden stick" << std::endl;
    return (10 + this->strength);
}

void Character::Heal() {
    if (this->pv + 50 > 100)
        this->pv = 100;
    else
        this->pv += 50;
    std::cout << this->name << " takes a potion" << std::endl;
}

int Character::RangeAttack() {
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    this->power -= 10;
    std::cout << this->name << " tosses a stone" << std::endl;
    return (5 + this->strength);
}

void Character::RestorePower() {
    this->power = 100;
    std::cout << this->name << " eats" << std::endl;
}

void Character::TakeDamage(int damage) {
    this->pv -= damage;
    if (this->pv <= 0) {
        std::cout << this->name << " out of combat" << std::endl;
    } else {
        std::cout << this->name << " takes " << damage << " damage" << std::endl;
    }
}