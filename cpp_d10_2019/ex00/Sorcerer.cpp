/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Sorcerer.cpp
*/

#include "Sorcerer.hpp"

#include <utility>

Sorcerer::Sorcerer(std::string name, std::string title) :
name(std::move(name)),
title(std::move(title)) {
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer) {
    return os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
}

std::string Sorcerer::getName() const {
    return this->name;
}

std::string Sorcerer::getTitle() const {
    return this->title;
}

void Sorcerer::polymorph(const Victim &victim) const {
    victim.getPolymorphed();
}