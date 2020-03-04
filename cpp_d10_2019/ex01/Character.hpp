/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character.hpp
*/

#ifndef CPP_D10_2019_CHARACTER_HPP
#define CPP_D10_2019_CHARACTER_HPP

#include "AWeapon.hpp"
#include "AEnemy.hpp"
#include <iostream>

class Character {
public:
    Character(const std::string &name);
    ~Character();

    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(AEnemy *enemy);

    const std::string getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;

private:
    const std::string name;
    int ap;
    AWeapon *weapon;
protected:
};

std::ostream& operator<<(std::ostream& os, const Character& character);

#endif //CPP_D10_2019_CHARACTER_HPP
