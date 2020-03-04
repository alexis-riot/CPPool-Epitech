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

int recursive_search(int size, const int **map, int x, int y)
{
    int tmp_x = 0;
    int tmp_y = 0;

    if (size == x)
        return 0;

    tmp_x = map[x][y] + recursive_search(size, map, x + 1, y);
    tmp_y = map[x][y] + recursive_search(size, map, x + 1, y + 1);

    if (tmp_x < tmp_y)
        return tmp_x;
    else
        return tmp_y;
}

int pyramid_path(int size, const int **map)
{
    return recursive_search(size, map, 0, 0);
}
