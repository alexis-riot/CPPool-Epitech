/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#ifndef _header
# define _header

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

typedef enum action_e {
    PRINT_NORMAL,
    PRINT_REVERSE,
    PRINT_UPPER,
    PRINT_42
} action_t;

void do_action(action_t action, const char *str);
void print_normal(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_42(const char *str);

#endif /* _header */
