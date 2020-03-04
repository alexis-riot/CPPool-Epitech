/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** ConvoyerBeltRand
*/

#ifndef CONVOYERBELTRAND_HPP_
#define CONVOYERBELTRAND_HPP_

#include "Wrap.hpp"

class ConvoyerBeltRand {
	public:
		ConvoyerBeltRand(int stock, int nbBox, int nbGiftPaper);
		~ConvoyerBeltRand();
        bool isBox(Wrap &wrap);
        Object *createObjects(int nb);
        int checkBoxNb(Object *obj);
        int checkGiftPaperNb(Object *obj);
	protected:
	private:
        int _stock;
        int _nbBox;
        int _nbGiftPaper;
};

#endif /* !CONVOYERBELTRAND_HPP_ */
