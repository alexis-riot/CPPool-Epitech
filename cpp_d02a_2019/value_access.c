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

double double_list_get_elem_at_front(double_list_t list)
{
    if (!list)
        return (false);
    return (list->value);
}

double double_list_get_elem_at_back(double_list_t list)
{
    while (list->next)
        list = list->next;
    return (list->value);
}

double double_list_get_elem_at_position(double_list_t list,
                                        unsigned int position)
{
    for (unsigned int i = 0; list; i++) {
        if (position == i)
            return (list->value);
        list = list->next;
    }
    return (false);
}