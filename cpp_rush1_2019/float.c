/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "float.h"

typedef struct
{
    Class   base;
    float     x;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->x = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    (void)this;
}

char *Float_str(FloatClass *this)
{
    char *res = NULL;
    int size = 50 + strlen(this->base.__name__);

    res = malloc(sizeof(char) * (size + 6));
    snprintf(res, size + 5, "<%s (%f)>",
    this->base.__name__, this->x);
    return res;
}

Object *Float_add(const Object *this, const Object *other)
{
    float x = 0;
    FloatClass *new_v;
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    x = two->x + one->x;
    new_v = new(Float, x);
    return new_v;
}

Object *Float_sub(const Object *this, const Object *other)
{
    float x = 0;
    FloatClass *new_v;
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    x = one->x - two->x;
    new_v = new(Float, x);
    return new_v;
}
Object *Float_mul(const Object *this, const Object *other)
{
    float x = 0;
    FloatClass *new_v;
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    x = two->x * one->x;
    new_v = new(Float, x);
    return new_v;
}

Object *Float_div(const Object *this, const Object *other)
{
    float x = 0;
    FloatClass *new_v;
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    if (two->x == 0)
        raise ("Cannot divide by 0");
    x = one->x / two->x;
    new_v = new(Float, x);
    return new_v;
}

bool Float_eq(const Object *this, const Object *other)
{
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    if (one->x == two->x)
        return true;
    else
        return false;
}

bool Float_gt(const Object *this, const Object *other)
{
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    if (one->x > two->x)
        return true;
    else
        return false;
}

bool Float_lt(const Object *this, const Object *other)
{
    FloatClass *one = (FloatClass *)this;
    FloatClass *two = (FloatClass *)other;

    if (one->x < two->x)
        return true;
    else
        return false;
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_str,
        .__add__ = (binary_operator_t)&Float_add,
        .__sub__ = (binary_operator_t)&Float_sub,
        .__mul__ = (binary_operator_t)&Float_mul,
        .__div__ = (binary_operator_t)&Float_div,
        .__eq__ = (binary_comparator_t)&Float_eq,
        .__gt__ = (binary_comparator_t)&Float_gt,
        .__lt__ = (binary_comparator_t)&Float_lt
    },
    .x = 0
};

const Class  *Float = (const Class *)&_description;;
