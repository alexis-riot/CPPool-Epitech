/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "func_ptr.h"

void do_action(action_t action, const char *str)
{
    void (*tmp_ptr[])(const char *) = {
        print_normal,
        print_reverse,
        print_upper,
        print_42
    };
    (tmp_ptr)[action](str);
}

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str) - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    for (int i = 0; str[i]; i++)
        printf("%c", (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 32 : str[i]);
    printf("\n");
}

void print_42(const char *str)
{
    if (str)
        printf("42\n");
}