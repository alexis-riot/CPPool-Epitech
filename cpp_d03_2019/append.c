/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    char *tmp = NULL;

    if (!this || !ap)
        return;
    if (!this->str && ap) {
        this->str = strdup(ap);
        strcpy(this->str, ap);
    }
    else {
        tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(ap) + 1));
        if (!tmp)
            return;
        strcpy(tmp, this->str);
        strcat(tmp, ap);
        free(this->str);
        this->str = tmp;
    }
}