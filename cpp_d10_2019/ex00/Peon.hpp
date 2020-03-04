/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Peon.hpp
*/

#ifndef CPP_D10_2019_PEON_HPP
#define CPP_D10_2019_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
    Peon(std::string name);
    ~Peon();
    void getPolymorphed() const;

private:
protected:
};


#endif //CPP_D10_2019_PEON_HPP
