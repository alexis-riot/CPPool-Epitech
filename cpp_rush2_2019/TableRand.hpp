/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** TableRand
*/

#ifndef TABLERAND_HPP_
#define TABLERAND_HPP_

#include "Object.hpp"

class TableRand {
	public:
		TableRand(int nbToy, int maxCap);
		~TableRand();
        void checkCap(int nb);
        Object *createObjects(int nb);
        void fillTable(Object *obj);
	protected:
	private:
    int _nbToy;
    int _maxCap;
};

#endif /* !TABLERAND_HPP_ */
