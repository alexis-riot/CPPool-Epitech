/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "new.h"
#include "vertex.h"

int int_len(int nb)
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
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    (void)this;
}

char *Vertex_str(VertexClass *this)
{
    char *res = NULL;
    int size_x = int_len(this->x);
    int size_y = int_len(this->y);
    int size_z = int_len(this->z);
    int size = size_x + size_y + size_z
    + strlen(this->base.__name__);

    res = malloc(sizeof(char) * (size + 11));
    snprintf(res, size + 10, "<%s (%d, %d, %d)>\n",
    this->base.__name__, this->x, this->y, this->z);
    return res;
}

Object *Vertex_add(const Object *this, const Object *other)
{
    int x = 0;
    int y = 0;
    int z = 0;
    VertexClass *new_v;
    VertexClass *one = (VertexClass *)this;
    VertexClass *two = (VertexClass *)other;

    x = two->x + one->x;
    y = two->y + one->y;
    z = two->z + one->z;
    new_v = new(Vertex, x, y, z);
    return new_v;
}

Object *Vertex_sub(const Object *this, const Object *other)
{
    int x = 0;
    int y = 0;
    int z = 0;
    VertexClass *new_v;
    VertexClass *one = (VertexClass *)this;
    VertexClass *two = (VertexClass *)other;

    x = one->x - two->x;
    y = one->y - two->y;
    z = one->z - two->z;
    new_v = new(Vertex, x, y, z);
    return new_v;
}

static const VertexClass _description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_str,
        .__add__ = (binary_operator_t)&Vertex_add,
        .__sub__ = (binary_operator_t)&Vertex_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class   *Vertex = (const Class *)&_description;