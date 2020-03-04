/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** LittlePony
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"

class LittlePony : public Toy{
	public:
		LittlePony(const std::string title);
		~LittlePony();
        bool isTaken() const;

	protected:
	private:
};

#endif /* !LITTLEPONY_HPP_ */
