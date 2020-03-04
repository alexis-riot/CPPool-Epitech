/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string &name) :
name(name),
ap(40),
weapon(nullptr) {}

Character::~Character() {}

void Character::recoverAP() {
    this->ap = (this->ap + 10 > 40) ? 40 : this->ap + 10;
}

void Character::equip(AWeapon *weapon) {
    this->weapon = weapon;
}

void Character::attack(AEnemy *enemy) {
    if (this->ap <= 0)
        return;
    if (this->weapon == nullptr)
        return;
    std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;

    this->weapon->attack();
    this->ap -= this->weapon->getAPCost();
    enemy->takeDamage(this->weapon->getDamage());

    if (enemy->getHP() <= 0)
        delete enemy;


}

const std::string Character::getName() const {
    return this->name;
}

int Character::getAP() const {
    return this->ap;
}

AWeapon *Character::getWeapon() const {
    return (this->weapon ? this->weapon : nullptr);
}

std::ostream& operator<<(std::ostream& os, Character const &character) {
    if (character.getWeapon()) {
        return os << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
    } else {
        return os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
    }
}