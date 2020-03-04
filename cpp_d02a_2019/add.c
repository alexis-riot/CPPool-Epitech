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

doublelist_node_t *double_list_create_node(double value)
{
    doublelist_node_t *new_node = malloc(sizeof(doublelist_node_t));

    new_node->value = value;
    new_node->next = 0;

    return (new_node);
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *node = double_list_create_node(elem);

    if (!node)
        return (false);

    node->next = *front_ptr;
    *front_ptr = node;

    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *node = double_list_create_node(elem);
    double_list_t list = *front_ptr;

    if (!node)
        return (false);

    if (!list) {
        *front_ptr = node;
    }
    else {
        list = *front_ptr;
        while (list->next)
            list = list->next;
        list->next = node;
    }
    return (true);
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
                                        unsigned int position)
{
    if (!*front_ptr)
        return (false);
    if (position == 0)
        return double_list_add_elem_at_front(front_ptr, elem);
    double_list_t list = *front_ptr;
    while (position == 0) {
        list = list->next;
        if (!list)
            return (false);
    }
    doublelist_node_t *node = double_list_create_node(elem);
    if (!node)
        return (false);
    node->next = list->next;
    list->next = node;
    return (true);
}
