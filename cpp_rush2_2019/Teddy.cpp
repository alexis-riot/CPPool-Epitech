/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Teddy
*/

#include "Teddy.hpp"

Teddy::Teddy(const std::string title) : Toy(title)
{
}

Teddy::~Teddy()
{
}

bool Teddy::isTaken() const
{
    std::cout << "gra hu" << std::endl;
    return(_taken);
}