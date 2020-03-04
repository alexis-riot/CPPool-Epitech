/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Box
*/

#include "Box.hpp"

Box::Box(const std::string name) : Wrap(name), _isOpen(true)
{
}

Box::~Box()
{
}

void Box::set_isOpen(bool value)
{
    _isOpen = value;
}

Object *Box::openMe()
{
    set_isOpen(true);
    return (_obj);
}

void Box::closeMe()
{
    set_isOpen(false);
}

bool Box::wrapMeThat(Object *obj)
{
    if (_obj != NULL || obj == NULL || _isOpen == false) {
        std::cerr << "The sent object is NULL or the wrapper is already used or the box is closed" << std::endl;
        return (false);
    }
    _obj=obj;
    std::cout << "tuuuut tuuut tuut" << std::endl;
    return (true);
}
