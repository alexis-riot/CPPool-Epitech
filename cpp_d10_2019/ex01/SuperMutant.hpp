/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** SuperMutant.hpp
*/

#ifndef CPP_D10_2019_SUPERMUTANT_HPP
#define CPP_D10_2019_SUPERMUTANT_HPP

#include "AEnemy.hpp"
#include <iostream>

class SuperMutant : public AEnemy {
public:
    SuperMutant();
    virtual ~SuperMutant();
    virtual void takeDamage(int damage);

private:
protected:
};


#endif //CPP_D10_2019_SUPERMUTANT_HPP
