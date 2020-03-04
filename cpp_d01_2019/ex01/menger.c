/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "menger.h"

void menger(int size, int level, int x, int y)
{
    size = size / 3;
    printf("%03d %03d %03d\n", size, x + size, y + size);

    if (level > 1 && (size / 3) > 0) {
        level--;
        menger(size, level, x, y);
        menger(size, level, x, y + size);
        menger(size, level, x, y + 2 * size);
        menger(size, level, x + size, y);
        menger(size, level, x + size, y + 2 * size);
        menger(size, level, x + 2 * size, y);
        menger(size, level, x + 2 * size, y + size);
        menger(size, level, x + 2 * size, y + 2 * size);
    }
}