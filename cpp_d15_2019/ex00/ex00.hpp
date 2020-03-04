/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex00.hpp
*/

#ifndef CPP_D15_2019_EX00_HPP
#define CPP_D15_2019_EX00_HPP

template<typename Var>
void swap(Var &a, Var &b) {
    Var tmp = a;
    a = b;
    b = tmp;
}

template<typename Var>
const Var &min(Var &a, Var &b) {
    if (a < b)
        return (a);
    return (b);
}

template<typename Var>
const Var &max(Var &a, Var &b) {
    if (a > b)
        return (a);
    return (b);
}

template<typename Var>
const Var add(Var &a, Var &b) {
    return (a + b);
}

#endif //CPP_D15_2019_EX00_HPP
