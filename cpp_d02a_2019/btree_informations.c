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

bool double_btree_is_empty(double_btree_t tree)
{
    if (!tree)
        return (true);
    return (false);
}

unsigned int double_btree_get_size(double_btree_t tree)
{
    int count = 1;
    if (!tree)
        return (false);
    if (tree->right)
        count += double_btree_get_size(tree->right);
    if (tree->left)
        count += double_btree_get_size(tree->left);
    return count;
}

unsigned int double_btree_get_depth(double_btree_t tree)
{
    int left = 1;
    int right = 1;

    if (!tree)
        return (false);
    right += double_btree_get_depth(tree->right);
    left += double_btree_get_depth(tree->left);
    return ((right > left) ? right : left);
}
