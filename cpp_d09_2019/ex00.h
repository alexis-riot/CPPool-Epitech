/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#ifndef _header
#define _header

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

    typedef struct cthulhu_s {
        int m_power;
        char *m_name;
    } cthulhu_t;

    typedef struct koala_s {
        cthulhu_t m_parent;
        char m_is_a_legend;
    } koala_t;

    void print_power(cthulhu_t *this);
    void attack(cthulhu_t *this);
    void sleeping(cthulhu_t *this);

    void eat(koala_t *this);

    cthulhu_t *new_cthulhu();
    koala_t *new_koala(char *name, char is_a_legend);

#endif