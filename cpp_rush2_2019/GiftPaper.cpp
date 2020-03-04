/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** GiftPaper
*/

#include "GiftPaper.hpp"

GiftPaper::GiftPaper(const std::string name) : Wrap(name)
{
}

GiftPaper::~GiftPaper()
{
}

bool GiftPaper::wrapMeThat(Object *obj)
{
    if (_obj != NULL || obj == NULL) {
        std::cerr << "The sent object is NULL or the wrapper is already used" << std::endl;
        return (false);
    }
    _obj=obj;
    std::cout << "tuuuut tuuut tuut" << std::endl;
    return (true);
}