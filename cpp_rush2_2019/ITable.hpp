/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** ITable
*/

#ifndef ITABLE_HPP_
#define ITABLE_HPP_

#include <string>
#include <iostream>

class ITable {
	public:
        virtual void choose() = 0;
        virtual void add() = 0;
        virtual std::string *getObjects() = 0;

	protected:
	private:
};

#endif /* !ITABLE_HPP_ */
