/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior.hpp
*/

#ifndef CPP_D09_2019_WARRIOR_HPP
#define CPP_D09_2019_WARRIOR_HPP

#include "Character.hpp"

class Warrior : public Character {
public:
    Warrior(const std::string &name, int level);
    ~Warrior();

    int CloseAttack();
    void Heal();
    int RangeAttack();
    void RestorePower();

private:
protected:
    std::string weaponName;
};


#endif //CPP_D09_2019_WARRIOR_HPP
