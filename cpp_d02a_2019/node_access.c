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


doublelist_node_t  *double_list_get_first_node_with_value(double_list_t list,
                                                        double value)
{
    while (list) {
        if (list->value == value)
            return (list);
        list = list->next;
    }
    return (false);
}