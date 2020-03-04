/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** ConvoyerBeltRand
*/

#include "ConvoyerBeltRand.hpp"

ConvoyerBeltRand::ConvoyerBeltRand(int stock, int nbBox, int nbGiftPaper) : _stock(stock), _nbBox(nbBox), _nbGiftPaper(nbGiftPaper)
{
}

ConvoyerBeltRand::~ConvoyerBeltRand()
{
}

bool ConvoyerBeltRand::isBox(Wrap &wrap)
{
    //returns if it's a box
}
Object *ConvoyerBeltRand::createObjects(int nb)
{
    //fill wrap stock with nb objects until box or gift paper stock = 0
}

int ConvoyerBeltRand::checkBoxNb(Object *obj)
{
    //Check the nb of box generated
}

int ConvoyerBeltRand::checkGiftPaperNb(Object *obj)
{
    //Check the nb of Gift Paper generated
}
