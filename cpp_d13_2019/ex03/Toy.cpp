/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Toy.cpp
*/

#include "Toy.hpp"

Toy::Toy(ToyType type, std::string name, std::string file) :
type(type),
name(std::move(name)),
picture(Picture(file)) {}

Toy::Toy() :
type(Toy::ToyType::BASIC_TOY),
name("toy"),
picture(Picture()) {}

Toy::~Toy() {}

Toy& Toy::operator=(Toy const &toy) {
    this->name = toy.name;
    this->type = toy.type;
    this->picture = toy.picture;
    return (*this);
}

const std::string & Toy::getName() const {
    return this->name;
}

void Toy::setName(std::string const &name) {
    this->name = std::move(name);
}

const Toy::ToyType Toy::getType() const {
    return this->type;
}

bool Toy::setAscii(const std::string &file) {
    return this->picture.getPictureFromFile(file);
}

const std::string & Toy::getAscii() const {
    return this->picture.data;
}

void Toy::speak(const std::string &text) {
    std::cout << this->getName() << " \"" << text << "\"" << std::endl;
}