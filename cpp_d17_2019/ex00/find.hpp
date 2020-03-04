/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** find.hpp
*/

#ifndef CPP_D17_2019_FIND_HPP
#define CPP_D17_2019_FIND_HPP

#include <algorithm>

template<typename Var>
typename Var::iterator do_find(Var &var, int iteration) {
    return std::find(var.begin(), var.end(), iteration);
}

#endif //CPP_D17_2019_FIND_HPP
