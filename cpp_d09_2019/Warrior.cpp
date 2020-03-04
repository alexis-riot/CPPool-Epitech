/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior.cpp
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level) : Character(name, level) {
    this->weaponName = "hammer";
    this->strength = 12;
    this->stamina = 12;
    this->intelligence = 6;
    this->spirit = 5;
    this->agility = 7;

    std::cout << "I'm " << this->name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior() {
    // destructor
}

int Warrior::CloseAttack() {
    if (this->power < 30) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    this->power -= 30;
    std::cout << this->name << " strikes with his " << this->weaponName << std::endl;
    return (20 + this->strength);
}

void Warrior::Heal() {
    if (this->pv + 50 > 100)
        this->pv = 100;
    else
        this->pv += 50;
    std::cout << this->name << " takes a potion" << std::endl;
}

int Warrior::RangeAttack() {
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    this->power -= 10;
    this->Range = Character::CLOSE;
    std::cout << this->name << " intercepts" << std::endl;
    return (5 + this->strength);
}

void Warrior::RestorePower() {
    this->power = 100;
    std::cout << this->name << " eats" << std::endl;
}