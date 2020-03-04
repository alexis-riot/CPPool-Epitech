/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Woody.hpp
*/

#ifndef CPP_D13_2019_WOODY_HPP
#define CPP_D13_2019_WOODY_HPP

#include "Toy.hpp"
#include <iostream>

class Woody : public Toy {
public:
    Woody(std::string const &name, std::string const &file = "woody.txt");
    ~Woody();

    void speak(std::string const &text);

private:
protected:
};


#endif //CPP_D13_2019_WOODY_HPP
