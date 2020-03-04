/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

char at(const string_t *this, size_t pos)
{
    if (!this || !this->str)
        return (-1);
    if (pos > strlen(this->str) -1)
        return (-1);
    return (this->str[pos]);
}
