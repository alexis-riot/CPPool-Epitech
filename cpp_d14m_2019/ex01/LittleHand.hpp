/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** LittleHand.hpp
*/

#ifndef CPP_D14M_2019_LITTLEHAND_HPP
#define CPP_D14M_2019_LITTLEHAND_HPP

#include "Fruit.hpp"
#include "FruitBox.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"
#include "Lime.hpp"

class LittleHand {
public:
    static void sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes);
};


#endif //CPP_D14M_2019_LITTLEHAND_HPP
