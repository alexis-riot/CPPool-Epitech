/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AWeapon.cpp
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) :
name(std::move(name)),
apcost(apcost),
damage(damage) { }

AWeapon::~AWeapon() {}

int AWeapon::getAPCost() const {
    return this->apcost;
}

int AWeapon::getDamage() const {
    return this->damage;
}

const std::string AWeapon::getName() const {
    return this->name;
}