/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AEnemy.hpp
*/

#ifndef CPP_D10_2019_AENEMY_HPP
#define CPP_D10_2019_AENEMY_HPP

#include <iostream>

class AEnemy {
public:
    AEnemy(int hp, const std::string &type);
    virtual ~AEnemy();

    virtual void takeDamage(int damage);

    std::string const getType() const;
    int getHP() const;

private:
    int hp;
    const std::string type;
protected:
};


#endif //CPP_D10_2019_AENEMY_HPP
