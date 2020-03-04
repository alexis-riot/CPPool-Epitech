/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "double_list.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int double_list_get_size(double_list_t list)
{
    int size = 0;
    while (list) {
        size++;
        list = list->next;
    }
    return (size);
}

bool double_list_is_empty(double_list_t list)
{
    if (!list)
        return (1);
    return (0);
}

void double_list_dump(double_list_t list)
{
    while (list) {
        printf("%f\n", list->value);
        list = list->next;
    }
}
