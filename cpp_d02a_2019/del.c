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

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    if (!front_ptr)
        return (false);

    *front_ptr = (*front_ptr)->next;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t tmp = *front_ptr;

    if (!tmp)
        return (false);
    if (!(*front_ptr)->next) {
        free(*front_ptr);
        return (false);
    }

    tmp = *front_ptr;
    while (tmp->next->next)
        tmp = tmp->next;
    free(tmp->next);
    tmp->next = NULL;
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
                                        unsigned int position)
{
    double_list_t tmp = *front_ptr;
    double_list_t result = *front_ptr;

    if (position == 0)
        return (double_list_del_elem_at_front(front_ptr));
    if (!*front_ptr)
        return (false);
    while (position) {
        position--;
        if (!result)
            return (false);
        tmp = result;
        result = result->next;
    }
    if (result)
        tmp->next = result->next;
    free(result);
    return (true);
}