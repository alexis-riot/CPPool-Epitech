/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Santa
*/

#ifndef SANTA_HPP_
#define SANTA_HPP_

#include <string>

class Santa {
	public:
		Santa();
		~Santa();
        std::string *retrieveFiles(std::string *pathname);
        bool checkGift(std::string gift);

	protected:
	private:
};

#endif /* !SANTA_HPP_ */
