/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(const std::string title): Object(title)
{
}

Toy::~Toy()
{
}

bool Toy::isTaken() const
{
    return(_taken);
}