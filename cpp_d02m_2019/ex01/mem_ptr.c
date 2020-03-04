/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res)
{
    char *result = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));

    if (!result)
        return;

    result = strcat(result, str1);
    result = strcat(result, str2);

    *res = result;
}

void add_str_struct(str_op_t *str_op)
{
    add_str(str_op->str1, str_op->str2, &str_op->res);
}
