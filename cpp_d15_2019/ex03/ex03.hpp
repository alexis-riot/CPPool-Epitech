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
void foreach(const Var *array, void (func)(const Var &elem), int size) {
    for (size_t i = 0; i < size; i++)
        func(array[i]);
}

template<typename Var>
void print(const Var &a) {
    std::cout << a << std::endl;
}

#endif //CPP_D15_2019_EX01_HPP
