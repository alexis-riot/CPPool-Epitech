/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** IElf
*/

#ifndef IELF_HPP_
#define IELF_HPP_

#include <string>

class IElf {
	public:
		IElf();
		~IElf();
        virtual void take() = 0;
        virtual void put() = 0;
        virtual std::string *look() = 0;
	protected:
	private:
};

#endif /* !IELF_HPP_ */
