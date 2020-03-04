/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "double_btree.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

bool double_btree_create_node(double_btree_t *root_ptr, double value)
{
    double_btree_t tree = malloc(sizeof(doublebtree_node_t));

    if (!tree)
        return (false);

    tree->right = NULL;
    tree->left = NULL;

    tree->value = value;

    *root_ptr = tree;

    return (true);
}

bool double_btree_delete(double_btree_t *root_ptr)
{
    double_btree_t tmp = *root_ptr;

    if (!root_ptr)
        return (false);
    if (tmp->right)
        double_btree_delete(&tmp->right);
    if (tmp->left)
        double_btree_delete(&tmp->left);

    free(tmp);
    root_ptr = NULL;

    return (true);
}
