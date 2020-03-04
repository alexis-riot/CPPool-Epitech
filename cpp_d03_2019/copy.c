/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t count = 0;
    size_t i = 0;

    if (!this || !this->str)
        return (0);
    if (pos > strlen(this->str))
        return (0);

    for (i = strlen(this->str); this->str[i]; i++) {
        if (count > n)
            break;
        s[count++] = this->str[i];
    }
    return (i - pos);
}
