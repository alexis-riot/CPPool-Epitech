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

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int **result = malloc(sizeof(int *) * length);
    int i = 0;

    for (int x = 0; x < length; x++) {
        result[x] = malloc(sizeof(int) * width);
        for (int y = 0; y < width; y++) {
            result[x][y] = tab[i++];
        }
    }
    *res = result;
}