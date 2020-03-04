/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** PlasmaRifle.hpp
*/

#ifndef CPP_D10_2019_POWFISTFLE_HPP
#define CPP_D10_2019_POWFISTFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {
public:
    PowerFist();
    ~PowerFist();

    void attack() const;

private:
protected:
};


#endif //CPP_D10_2019_POWFISTFLE_HPP
