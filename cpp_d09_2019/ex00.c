/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#include "ex00.h"

static void koala_initializer(koala_t *this , char *_name, char _is_A_Legend)
{
    printf("----\n");
    printf("Building Cthulhu\n");
    printf("Building %s\n", _name);
    this->m_is_a_legend = _is_A_Legend;
    this->m_parent.m_name = strdup(_name);
    this->m_parent.m_power = (_is_A_Legend ? 42 : 0);
}

static void cthulhu_initializer(cthulhu_t *this)
{
    printf("----\n");
    printf("Building Cthulhu\n");
    this->m_name = "Cthulhu";
    this->m_power = 42;
}

cthulhu_t *new_cthulhu()
{
    cthulhu_t *cthulhu;

    if (!(cthulhu = malloc(sizeof(cthulhu_t))))
        return (NULL);
    cthulhu_initializer(cthulhu);
    return (cthulhu);
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *koala;

    if (!(koala = malloc(sizeof(koala_t))))
        return (NULL);
    koala_initializer(koala, name, is_a_legend);
    return (koala);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power < 42) {
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
    } else {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    }
}

void sleeping(cthulhu_t *this)
{
    this->m_power += 42000;
    printf("%s sleeps\n", this->m_name);
}

void eat(koala_t *this)
{
    this->m_parent.m_power += 42;
    printf("%s eats\n", this->m_parent.m_name);
}