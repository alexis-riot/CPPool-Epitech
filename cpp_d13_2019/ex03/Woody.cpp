/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Woody.cpp
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &file) : Toy(WOODY, name, file) {}

Woody::~Woody() {}

void Woody::speak(const std::string &text) {
    std::cout << "WOODY: " << this->getName() << " \"" << text << "\"" << std::endl;
}