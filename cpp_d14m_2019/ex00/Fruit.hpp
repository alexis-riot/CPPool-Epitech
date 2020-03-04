/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Fruit.hpp
*/

#ifndef CPP_D14M_2019_FRUIT_HPP
#define CPP_D14M_2019_FRUIT_HPP

#include <iostream>

class Fruit {
public:
    Fruit(std::string name, int vitamins);
    virtual ~Fruit();

    int getVitamins() const;
    const std::string &getName() const;

private:
protected:
    std::string _name;
    int _vitamins;
};


#endif //CPP_D14M_2019_FRUIT_HPP
