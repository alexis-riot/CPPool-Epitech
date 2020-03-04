/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "int.h"

int int_ln(int nb)
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
    int     x;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    (void)this;
}

char *Int_str(IntClass *this)
{
    char *res = NULL;
    int size_x = int_ln(this->x);
    int size = size_x + strlen(this->base.__name__);

    res = malloc(sizeof(char) * (size + 10));
    snprintf(res, size + 9, "<%s (%d)>",
    this->base.__name__, this->x);
    return res;
}

Object *Int_add(const Object *this, const Object *other)
{
    int x = 0;
    IntClass *new_v;
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    x = two->x + one->x;
    new_v = new(Int, x);
    return new_v;
}

Object *Int_sub(const Object *this, const Object *other)
{
    int x = 0;
    IntClass *new_v;
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    x = one->x - two->x;
    new_v = new(Int, x);
    return new_v;
}

Object *Int_mul(const Object *this, const Object *other)
{
    int x = 0;
    IntClass *new_v;
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    x = two->x * one->x;
    new_v = new(Int, x);
    return new_v;
}

Object *Int_div(const Object *this, const Object *other)
{
    int x = 0;
    IntClass *new_v;
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    if (two->x == 0)
        raise ("Cannot divide by 0");
    x = one->x / two->x;
    new_v = new(Int, x);
    return new_v;
}

bool Int_eq(const Object *this, const Object *other)
{
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    if (one->x == two->x)
        return true;
    else
        return false;
}

bool Int_gt(const Object *this, const Object *other)
{
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    if (one->x > two->x)
        return true;
    else
        return false;
}

bool Int_lt(const Object *this, const Object *other)
{
    IntClass *one = (IntClass *)this;
    IntClass *two = (IntClass *)other;

    if (one->x < two->x)
        return true;
    else
        return false;
}

static const IntClass _description = {
    {
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&Int_str,
        .__add__ = (binary_operator_t)&Int_add,
        .__sub__ = (binary_operator_t)&Int_sub,
        .__mul__ = (binary_operator_t)&Int_mul,
        .__div__ = (binary_operator_t)&Int_div,
        .__eq__ = (binary_comparator_t)&Int_eq,
        .__gt__ = (binary_comparator_t)&Int_gt,
        .__lt__ = (binary_comparator_t)&Int_lt
    },
    .x = 0
};

const Class  *Int = (const Class *)&_description;;
