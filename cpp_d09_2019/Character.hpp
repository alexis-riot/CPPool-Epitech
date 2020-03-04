/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character.hpp
*/

#ifndef CPP_D09_2019_CHARACTER_HPP
#define CPP_D09_2019_CHARACTER_HPP

#include <iostream>

class Character {
public:
    Character(const std::string &name, int level);
    ~Character();

    const std::string &getName() const;
    int getLvl() const;
    int getPv() const;
    int getPower() const;

    int CloseAttack();
    void Heal();
    int RangeAttack();
    void RestorePower();
    void TakeDamage(int damage);

    enum AttackRange {
        CLOSE,
        RANGE,
    };
    AttackRange Range;

private:
protected:
    std::string name;
    int lvl;
    int pv;
    int power;

    int strength;
    int stamina;
    int intelligence;
    int spirit;
    int agility;
};


#endif //CPP_D09_2019_CHARACTER_HPP
