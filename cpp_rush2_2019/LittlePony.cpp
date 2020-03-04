/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** LittlePony
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(const std::string title) : Toy(title)
{
}

LittlePony::~LittlePony()
{
}

bool LittlePony::isTaken() const
{
    std::cout << "yo man" << std::endl;
    return (_taken);
}