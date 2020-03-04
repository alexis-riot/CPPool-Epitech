/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** PapaXmasElf
*/

#ifndef ELF_HPP_
#define ELF_HPP_

#include "Object.hpp"

class hand {
    public:
    hand();
    ~hand();
    protected:
        Object _obj;
    private:
};

class PapaXmasElf {
	public:
		PapaXmasElf();
		~PapaXmasElf();
        void take(std::string title);
        void take();
        void put();
        std::string look();

	protected:
        hand _hand;
	private:
};


#endif /* !ELF_HPP_ */
