/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitBox.hpp
*/

#ifndef CPP_D14M_2019_FRUITBOX_HPP
#define CPP_D14M_2019_FRUITBOX_HPP

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
public:
    FruitBox(int size);
    ~FruitBox();

    int nbFruits() const;
    bool putFruit(Fruit *fruit);
    Fruit *pickFruit();
    FruitNode *head() const;


private:
protected:
    int _size;
    FruitNode *_header;

    int _count;
};


#endif //CPP_D14M_2019_FRUITBOX_HPP
