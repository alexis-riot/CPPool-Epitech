/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

int empty(const string_t *this)
{
    if (!this || !this->str)
        return (-1);
    return (strlen(this->str) > 0 ? 0 : 1);
}
