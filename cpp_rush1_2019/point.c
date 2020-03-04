/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

int int_le(int nb)
{
    int len = 0;

    if (nb < 0) {
        len++;
        nb = nb * -1;
    }
    if (nb == 0)
        return len + 1;
    while (nb > 0) {
        len++;
        nb = nb / 10;
    }
    return len;
}

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void)this;
}

char *Point_str(PointClass *this)
{
    char *res = NULL;
    int size_x = int_le(this->x);
    int size_y = int_le(this->y);
    int size = size_x + size_y
    + strlen(this->base.__name__);

    res = malloc(sizeof(char) * (size + 9));
    snprintf(res, size + 8, "<%s (%d, %d)>\n",
    this->base.__name__, this->x, this->y);
    return res;
}

Object *Point_add(const Object *this, const Object *other)
{
    Object *nez = NULL;
    PointClass *first = (PointClass *)this;
    PointClass *secon = (PointClass *)other;

    int nezx = ((first->x) + (secon->x));
    int nezy = ((first->y) + (secon->y));
    nez = new(Point, nezx, nezy);
    return nez;
}

Object *Point_sub(const Object *this, const Object *other)
{
    Object *nez = NULL;
    PointClass *first = (PointClass *)this;
    PointClass *secon = (PointClass *)other;

    int nezx = ((first->x) - (secon->x));
    int nezy = ((first->y) - (secon->y));
    nez = new(Point, nezx, nezy);
    return nez;
}

static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_str,
        .__add__ = (binary_operator_t)&Point_add,
        .__sub__ = (binary_operator_t)&Point_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
    };

const Class *Point = (const Class *)&_description;
