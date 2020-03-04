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
#include <time.h>
#include <stdint.h>
#include <sys/types.h>

typedef struct point_s {
    unsigned int x;
    unsigned int y;
} point_t;

void draw_square(uint32_t **img, const point_t *origin, size_t size, uint32_t color);


#endif /* _header */
