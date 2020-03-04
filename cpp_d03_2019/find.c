/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    if (!this || !this->str || !str)
        return (-1);
    if (strlen(this->str) - pos < strlen(str))
        return (-1);
    for (int i = pos; this->str[i]; i++) {
        if (!strncmp(this->str + i, str, strlen(str)))
            return (i);
    }
    return (-1);
}