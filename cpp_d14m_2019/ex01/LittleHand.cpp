/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** LittleHand.cpp
*/

#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons, FruitBox &bananas, FruitBox &limes) {
    Fruit *fruit;
    FruitBox tmp(unsorted.nbFruits());

    while ((fruit = unsorted.pickFruit()))
        tmp.putFruit(fruit);
    while ((fruit = tmp.pickFruit())) {
        if (dynamic_cast<Banana*>(fruit))
            bananas.putFruit(fruit);
        else if (dynamic_cast<Lime*>(fruit))
            limes.putFruit(fruit);
        else if (dynamic_cast<Lemon*>(fruit))
            lemons.putFruit(fruit);
        else
            unsorted.putFruit(fruit);
    }
}