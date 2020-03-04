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

node_t *list_create_node(void *value)
{
    node_t *new_node = malloc(sizeof(node_t));

    new_node->value = value;
    new_node->next = 0;

    return (new_node);
}

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    node_t *node = list_create_node(elem);

    if (!node)
        return (false);

    node->next = *front_ptr;
    *front_ptr = node;

    return (true);
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    node_t *node = list_create_node(elem);
    list_t list = *front_ptr;

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

bool list_add_elem_at_position(list_t *front_ptr, void *elem,
unsigned int position)
{
    if (!*front_ptr)
        return (false);
    if (position == 0)
        return list_add_elem_at_front(front_ptr, elem);
    list_t list = *front_ptr;
    while (position == 0) {
        list = list->next;
        if (!list)
            return (false);
    }
    node_t *node = list_create_node(elem);
    if (!node)
        return (false);
    node->next = list->next;
    list->next = node;
    return (true);
}