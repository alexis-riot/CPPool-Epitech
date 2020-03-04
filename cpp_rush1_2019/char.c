/*
** EPITECH PROJECT, 2020
** cpp_rush1
** File description:
** Exercice 04
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "char.h"
#include "new.h"

typedef struct
{
    Class   base;
    char    c;
} CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    this->c = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    (void)this;
}

char *Char_str(CharClass *this)
{
    char *res = NULL;
    int size = strlen(this->base.__name__) + 1;

    res = malloc(sizeof(char) * (size + 7));
    snprintf(res, size + 6, "<%s (%c)>\n",
    this->base.__name__, this->c);
    return res;
}

Object *Char_add(const Object *this, const Object *other)
{
    char c;

    CharClass *new_c;
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    c = two->c + one->c;
    new_c = new(Char, c);
    return new_c;
}

Object *Char_sub(const Object *this, const Object *other)
{
    char c;

    CharClass *new_c;
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    c = one->c - two->c;
    new_c = new(Char, c);
    return new_c;
}

Object *Char_mul(const Object *this, const Object *other)
{
    char c;

    CharClass *new_c;
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    c = one->c * two->c;
    new_c = new(Char, c);
    return new_c;
}

Object *Char_div(const Object *this, const Object *other)
{
    char c;

    CharClass *new_c;
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    c = one->c / two->c;
    new_c = new(Char, c);
    return new_c;
}

bool Char_eq(const Object *this, const Object *other)
{
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    if (one->c == two->c)
        return true;
    else
        return false;
}

bool Char_lt(const Object *this, const Object *other)
{
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    if (one->c < two->c)
        return true;
    else
        return false;
}

bool Char_gt(const Object *this, const Object *other)
{
    CharClass *one = (CharClass *)this;
    CharClass *two = (CharClass *)other;

    if (one->c > two->c)
        return true;
    else
        return false;
}

static const CharClass    _description = {
    {   .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = (to_string_t)&Char_str,
        .__add__ = (binary_operator_t)&Char_add,
        .__sub__ = (binary_operator_t)&Char_sub,
        .__mul__ = (binary_operator_t)&Char_mul,
        .__div__ = (binary_operator_t)&Char_div,
        .__eq__ = (binary_comparator_t)&Char_eq,
        .__gt__ = (binary_comparator_t)&Char_gt,
        .__lt__ = (binary_comparator_t)&Char_lt
    },
    .c = 0
};

const Class *Char = (const Class *)&_description;