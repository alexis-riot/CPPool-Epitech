/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim.cpp
*/

#include "Victim.hpp"

Victim::Victim(std::string name) :
name(std::move(name)) {
    std::cout << "Some random victim called " << this->name << " just popped!" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Victim const &victim) {
    return os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
}

std::string Victim::getName() const {
    return this->name;
}

void Victim::getPolymorphed() const {
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}