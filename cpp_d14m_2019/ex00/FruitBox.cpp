/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitBox.cpp
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size) :
_size(size),
_header(nullptr),
_count(0) {}

FruitBox::~FruitBox() {}

int FruitBox::nbFruits() {
    return this->_count;
}

bool FruitBox::putFruit(Fruit *fruit) {
    FruitNode *tmp = this->_header;
    FruitNode *node;

    if (this->_count >= this->_size)
        return (false);
    if (this->head() == NULL) {
        this->_header = new FruitNode;
        this->_header->content = fruit;
        this->_header->next = nullptr;
    } else {
        while (tmp->next != NULL) {
            if (tmp->content == fruit)
                return (false);
            tmp = tmp->next;
        }
        if (tmp->content == fruit)
            return (false);
        node = new FruitNode;
        node->content = fruit;
        node->next = nullptr;
        tmp->next = node;
    }
    this->_count++;
    return (true);
}

Fruit* FruitBox::pickFruit() {
    FruitNode *tmp = this->_header;

    if (this->_count <= 0) {
        return (NULL);
    }

    Fruit *fruit = tmp->content;

    this->_header = this->_header->next;
    delete tmp;
    this->_count--;
    return (fruit);
}

FruitNode* FruitBox::head() {
    return this->_header;
}

