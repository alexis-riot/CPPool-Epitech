/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    if (!this || !this->str)
        return (NULL);
    return (this->str);
}
