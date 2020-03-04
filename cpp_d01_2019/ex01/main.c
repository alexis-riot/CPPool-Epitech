/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "menger.h"

int main(int argc, char *argv[])
{
    int size = 0;
    int level = 0;

    if (argc < 3)
        return 84;
    size = atoi(argv[1]);
    level = atoi(argv[2]);
    if (size > 0 && level > 0 && !(size % 3) && (level <= (size / 3)))
        menger(size, level, 0, 0);
    return 0;
}