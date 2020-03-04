/*
** EPITECH PROJECT, 2018
** test_fontions
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>
#include "../new.h"
#include "../player.h"
#include "../point.h"
#include "../vertex.h"
#include "../float.h"

typedef struct
{
    Class   base;
    char    *identifier;
    int     power;
} PlayerClass;

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

Test(ex01, test_name)
{
    PlayerClass *player = new (Player);
    cr_assert_str_eq(player->identifier, "Kreog");
    delete (player);
}

Test(ex01, test_c_name)
{
    PlayerClass *player = new (Player);
    cr_assert_str_eq(player->base.__name__, "Player");
    delete (player);
}

Test(ex01, id_free)
{
    PlayerClass *player = new (Player);
    delete (player);
    cr_assert_str_neq(player->identifier, "Kreog");
}

Test(ex01, va_new)
{
    va_list *list;

    PlayerClass *player = va_new (Player, list);
    cr_assert_str_eq(player->identifier, "Kreog");
    delete (player);
}

Test(ex02, out_print_1)
{
    Object *point = new (Point, 42, -42);

    cr_assert_str_eq(str(point), "<Point (42, -42)>");
    delete(point);
}

Test(ex02, out_print_2)
{
    Object *vertex = new (Vertex, 0, 1, 2);

    cr_assert_str_eq(str(vertex), "<Vertex (0, 1, 2)>");
    delete(vertex);
}

Test(ex03, out_print_1)
{
    Object * p1 = new ( Point , 12, 13) ;
    Object * p2 = new ( Point , 13, 14) ;

    cr_assert_str_eq(str(addition (p1, p2)), "<Point (25, 27)>");
    cr_assert_str_eq(str(subtraction (p1, p2)), "<Point (-1, -1)>");
}

Test(ex03, out_print_2_print_0)
{
    Object * p1 = new ( Point , 0, 0) ;
    Object * p2 = new ( Point , 0, 0) ;

    cr_assert_str_eq(str(addition (p1, p2)), "<Point (0, 0)>");
    cr_assert_str_eq(str(subtraction (p1, p2)), "<Point (0, 0)>");
}

Test(ex03, out_print_3)
{
    Object *v1 = new(Vertex, 1, 2, 3);
    Object *v2 = new(Vertex, 4, 5, 6);

    cr_assert_str_eq(str(addition(v1, v2)), "<Vertex (5, 7, 9)>");
    cr_assert_str_eq(str(subtraction(v1, v2)), "<Vertex (-3, -3, -3)>");
}

Test(ex04, out_print_float_1)
{
    float nl = 0;
    float n = 5.23;
    Object *v1 = new(Float, nl);
    Object *v2 = new(Float, n);

    cr_assert_str_eq(str(addition(v1, v2)), "<Float (5.230000)>");
    cr_assert_str_eq(str(subtraction(v1, v2)), "<Float (-5.230000)>");
    cr_assert_str_eq(str(multiplication(v1, v2)), "<Float (0.000000)>");
}

Test(ex04, out_print_float_2)
{
    float nl = 2;
    float n = 6.5;
    Object *v1 = new(Float, nl);
    Object *v2 = new(Float, n);

    if (gt(v1, v2))
        cr_assert_gt(nl, n);
    else if (lt(v1, v2))
        cr_assert_lt(nl, n);
    else if (eq(v1, v2))
        cr_assert_eq(nl, n);
}

Test(ex04, out_print_float_3)
{
    float nl = 6.6;
    float n = 6.5;
    Object *v1 = new(Float, nl);
    Object *v2 = new(Float, n);

    if (gt(v1, v2))
        cr_assert_gt(nl, n);
    else if (lt(v1, v2))
        cr_assert_lt(nl, n);
    else if (eq(v1, v2))
        cr_assert_eq(nl, n);
}

Test(ex04, out_print_float_4)
{
    float nl = 6.6;
    float n = 6.6;
    Object *v1 = new(Float, nl);
    Object *v2 = new(Float, n);

    if (gt(v1, v2))
        cr_assert_gt(nl, n);
    else if (lt(v1, v2))
        cr_assert_lt(nl, n);
    else if (eq(v1, v2))
        cr_assert_eq(nl, n);
}