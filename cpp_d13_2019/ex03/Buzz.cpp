/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Buzz.cpp
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &file) : Toy(BUZZ, name, file) {}

Buzz::~Buzz() {}

void Buzz::speak(const std::string &text) {
    std::cout << "BUZZ: " << this->getName() << " \"" << text << "\"" << std::endl;
}