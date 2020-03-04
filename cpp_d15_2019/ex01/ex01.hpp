/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex00.hpp
*/

#ifndef CPP_D15_2019_EX01_HPP
#define CPP_D15_2019_EX01_HPP

#include <string>

template<typename Var>
int compare(const Var &a, const Var &b) {
    if (a > b)
        return (1);
    return ((a < b) ? -1 : 0);
}

template<typename Var>
int compare(const char *a, const char *b) {
    std::string a_string = a;
    std::string b_string = b;

    return (compare(a_string, b_string));
}

#endif //CPP_D15_2019_EX01_HPP
