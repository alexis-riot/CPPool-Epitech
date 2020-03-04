/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Buzz.hpp
*/

#ifndef CPP_D13_2019_BUZZ_HPP
#define CPP_D13_2019_BUZZ_HPP

#include "Toy.hpp"
#include <iostream>

class Buzz : public Toy {
public:
    Buzz(std::string const &name, std::string const &file = "buzz.txt");
    ~Buzz();

private:
protected:
};


#endif //CPP_D13_2019_BUZZ_HPP
