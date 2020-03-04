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

void *list_get_elem_at_front(list_t list)
{
    if (!list)
        return (false);
    return (list->value);
}

void *list_get_elem_at_back(list_t list)
{
    while (list->next)
        list = list->next;
    return (list->value);
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    for (unsigned int i = 0; list; i++) {
        if (position == i)
            return (list->value);
        list = list->next;
    }
    return (false);
}

node_t *list_get_first_node_with_value(list_t list, void *value,
                                    value_comparator_t val_comp)
{
    if (!list)
        return (NULL);
    while (list) {
        if (!val_comp(value, list->value))
            return (list);
        list = list->next;
    }
    return (NULL);
}
