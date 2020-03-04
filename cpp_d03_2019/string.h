/*
** EPITECH PROJECT, 2019
** 2019
** File description:
** __DESCRIPTION__
*/

#ifndef _header
#define _header

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

typedef struct string_s {
    char *str;

    void (*assign_s)(struct string_s *this, const struct string_s *str);
    void (*assign_c)(struct string_s *this, const char *s);

    void (*append_s)(struct string_s *this, const struct string_s *ap);
    void (*append_c)(struct string_s *this, const char *ap);

    char (*at)(const struct string_s *this, size_t pos);

    void (*clear)(const struct string_s *this);

    int (*size)(const struct string_s *this);

    int (*compare_s)(const struct string_s *this, const struct string_s *str);
    int (*compare_c)(const struct string_s *this, const char *str);

    size_t (*copy)(const struct string_s *this, char *s, size_t n, size_t pos);

    const char *(*c_str)(const struct string_s *this);

    int (*empty)(const struct string_s *this);

    int (*find_s)(const struct string_s *this, const struct string_s *str,
                                                                    size_t pos);
    int (*find_c)(const struct string_s *this, const char *str, size_t pos);

} string_t;

// base.c
void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

// assign.c
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);

// append.c
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);

// at.c
char at(const string_t *this, size_t pos);

// clear.c
void clear(const string_t *this);

// size.c
int size(const string_t *this);

// compare.c
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);

// copy.c
size_t copy(const string_t *this, char *s, size_t n, size_t pos);

// c_str.c
const char *c_str(const string_t *this);

// empty.c
int empty(const string_t *this);

// find.c
int find_s(const string_t *this, const string_t *str, size_t pos);
int find_c(const string_t *this, const char *str, size_t pos);

#endif /* _header */
