/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** PapaXmasConvoyerBelt
*/

#ifndef PAPAXMASCONVOYERBELT_HPP_
#define PAPAXMASCONVOYERBELT_HPP_

#include "IConvoyerBelt.hpp"

class PapaXmasConvoyerBelt : public IConvoyerBelt{
	public:
		PapaXmasConvoyerBelt();
		~PapaXmasConvoyerBelt();
        Object in();
        void out();
        void add(Object obj);

	protected:
        int _maxCap;
        Object *_objList;
	private:
};

#endif /* !PAPAXMASCONVOYERBELT_HPP_ */
