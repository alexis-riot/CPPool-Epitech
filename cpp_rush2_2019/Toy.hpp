/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"

class Toy : public Object{
	public:
		Toy(const std::string title);
		~Toy();
        virtual bool isTaken() const;
	protected:
	private:
};

#endif /* !TOY_HPP_ */
