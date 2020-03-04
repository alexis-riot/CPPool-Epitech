/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Fruit.cpp
*/

#include "Fruit.hpp"

Fruit::Fruit(std::string name, int vitamins) :
_name(std::move(name)),
_vitamins(vitamins) {}

Fruit::~Fruit() {}

const std::string & Fruit::getName() const {
    return this->_name;
}

int Fruit::getVitamins() const {
    return this->_vitamins;
}