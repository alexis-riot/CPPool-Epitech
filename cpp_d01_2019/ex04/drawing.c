/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin, size_t size, uint32_t color)
{
    uint32_t index = 0;

    for (uint32_t i = 0; i < size; i++) {
        index--;
        while (++index < size)
            img[origin->x + i][origin->y + index] = color;
    }
}