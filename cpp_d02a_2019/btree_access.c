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

double double_btree_get_max_value(double_btree_t tree)
{
    double maximum = 0;

    if (!tree)
        return (false);

    maximum = tree->value;
    if (tree->right) {
        int tmp_value = double_btree_get_max_value(tree->right);
        maximum = (maximum > tmp_value) ? maximum : tmp_value;
    }
    if (tree->left) {
        int tmp_value = double_btree_get_max_value(tree->left);
        maximum = (maximum > tmp_value) ? maximum : tmp_value;
    }
    return (maximum);
}

double double_btree_get_min_value(double_btree_t tree)
{
    double minimum = 0;

    if (!tree)
        return (false);

    minimum = tree->value;
    if (tree->right) {
        int tmp_value = double_btree_get_min_value(tree->right);
        minimum = (minimum < tmp_value) ? minimum : tmp_value;
    }
    if (tree->left) {
        int tmp_value = double_btree_get_min_value(tree->left);
        minimum = (minimum < tmp_value) ? minimum : tmp_value;
    }
    return (minimum);
}
