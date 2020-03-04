/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AWeapon.hpp
*/

#ifndef CPP_D10_2019_AWEAPON_HPP
#define CPP_D10_2019_AWEAPON_HPP

#include <iostream>

class AWeapon {
public:
    AWeapon(const std::string &name, int apcost, int damage);
    virtual ~AWeapon();

    std::string const getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

private:
    std::string name;
    int apcost;
    int damage;
protected:
};


#endif //CPP_D10_2019_AWEAPON_HPP
