/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Teddy
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"

class Teddy : public Toy{
	public:
		Teddy(const std::string title);
		~Teddy();
        bool isTaken() const;

	protected:
	private:
};

#endif /* !TEDDY_HPP_ */
