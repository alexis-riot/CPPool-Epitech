/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim.hpp
*/

#ifndef CPP_D10_2019_VICTIM_HPP
#define CPP_D10_2019_VICTIM_HPP

#include <iostream>

class Victim {
public:
    Victim(std::string name);
    ~Victim();

    std::string getName() const;
    virtual void getPolymorphed() const;

private:
protected:
    std::string name;
};

std::ostream &operator<<(std::ostream &os, Victim const &victim);

#endif //CPP_D10_2019_VICTIM_HPP
