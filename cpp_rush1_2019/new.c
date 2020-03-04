/*
** EPITECH PROJECT, 2020
** new
** File description:
** construction / destruction
*/

#include "player.h"
#include "object.h"
#include "new.h"

Object *new(const Class *class, ...)
{
    Object *new_class = NULL;
    va_list list;

    new_class = malloc((class->__size__));
    if (!new_class)
        raise("Malloc failed");
    memcpy(new_class, class, class->__size__);
    va_start(list, class);
    if (class->__ctor__)
        class->__ctor__(new_class, &list);
    va_end(list);
    return new_class;
}

Object *va_new(const Class *class, va_list *ap)
{
    Object *new_class = NULL;

    new_class = malloc((class->__size__));
    if (!new_class)
        raise("Malloc failed");
    memcpy(new_class, class, class->__size__);
    if (class->__ctor__)
        class->__ctor__(new_class, ap);
    return new_class;
}

void delete(Object *ptr)
{
    Class *my_ptr = (Class *)ptr;

    if (!ptr)
        raise("Ptr is Null");
    if (my_ptr->__dtor__)
        my_ptr->__dtor__(ptr);
    free(ptr);
}