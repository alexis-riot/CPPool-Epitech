/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** IConvoyerBelt
*/

#ifndef ICONVOYERBELT_HPP_
#define ICONVOYERBELT_HPP_

#include "Object.hpp"

class IConvoyerBelt {
	public:
        virtual Object in() = 0;
        virtual void out() = 0;
        virtual void add() = 0;
	protected:
	private:
};

#endif /* !ICONVOYERBELT_HPP_ */
