/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** GiftPaper
*/

#ifndef GIFTPAPER_HPP_
#define GIFTPAPER_HPP_

#include "Wrap.hpp"

class GiftPaper : public Wrap{
	public:
		GiftPaper(const std::string name);
		~GiftPaper();
		bool wrapMeThat(Object *obj) override;

	protected:
	private:
};

#endif /* !GIFTPAPER_HPP_ */
