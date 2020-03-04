/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    this->str = strdup(s);
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_s = &find_s;
    this->find_c = &find_c;
}

void string_destroy(string_t *this)
{
    if (!this || !this->str)
        return;
    free(this->str);
}