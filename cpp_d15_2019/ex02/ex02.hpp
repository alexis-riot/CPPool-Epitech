/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex00.hpp
*/

#ifndef CPP_D15_2019_EX01_HPP
#define CPP_D15_2019_EX01_HPP

#include <iostream>

template<typename Var>
Var min(const Var &a, const Var &b) {
    std::cout << "template min" << std::endl;
    return ((b < a) ? b : a);
}

int min(const int &a, const int &b) {
    std::cout << "non-template min" << std::endl;
    return ((b < a) ? b : a);
}

template<typename Var>
Var templateMin(const Var *a, const int size) {
    size_t i = 0;
    Var minimum = a[0];

    while (++i < size)
        minimum = min<Var>(a[i], minimum);
    return (minimum);
}

int nonTemplateMin(const int *a, const int size) {
    size_t i = 0;
    int minimum = a[0];

    while (++i < size)
        minimum = min(a[i], minimum);
    return (minimum);
}

#endif //CPP_D15_2019_EX01_HPP
