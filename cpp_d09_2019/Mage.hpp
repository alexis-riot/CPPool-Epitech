/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Mage.hpp
*/

#ifndef CPP_D09_2019_MAGE_HPP
#define CPP_D09_2019_MAGE_HPP

#include "Character.hpp"

class Mage {
public:
    explicit Mage(const std::string &name, int level);
    ~Mage();

    void RestorePower();
    int RangeAttack();
    int CloseAttack();

private:
protected:
};


#endif //CPP_D09_2019_MAGE_HPP
