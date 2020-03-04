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

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2param(int *first, int *seconds)
{
    int sum = *first + *seconds;
    int mul = *first * *seconds;

    *first = sum;
    *seconds = mul;
}