/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** PapaXmasTable
*/

#ifndef PAPAXMASTABLE_HPP_
#define PAPAXMASTABLE_HPP_

#include "ITable.hpp"
#include "Object.hpp"

class PapaXmasTable : public ITable{
	public:
		PapaXmasTable();
		~PapaXmasTable();
        Object choose(std::string title);
        void put(Object obj);
        std::string *getObjects();

	protected:
        int _maxCap;
        Object *_objList;
	private:
};

#endif /* !PAPAXMASTABLE_HPP_ */
