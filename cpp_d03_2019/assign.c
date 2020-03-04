/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    if (!this || !this->str || !str)
        return;
    free(this->str);
    this->str = strdup(str->str);
}

void assign_c(string_t *this, const char *s)
{
    if (!this || !this->str || !s)
        return;
    free(this->str);
    this->str = strdup(s);
}