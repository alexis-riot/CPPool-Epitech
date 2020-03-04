/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "generic_list.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int list_get_size(list_t list)
{
    int size = 0;
    while (list) {
        size++;
        list = list->next;
    }
    return (size);
}

bool list_is_empty(list_t list)
{
    if (!list)
        return (1);
    return (0);
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    while (list) {
        val_disp(list->value);
        list = list->next;
    }
}
