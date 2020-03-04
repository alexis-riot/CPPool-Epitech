/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

int compare_s(const string_t *this, const string_t *str)
{
    return compare_c(this, str->str);
}

int compare_c(const string_t *this, const char *str)
{
    if (!this || !this->str)
        return (-1);
    return strcmp(this->str, str);
}
