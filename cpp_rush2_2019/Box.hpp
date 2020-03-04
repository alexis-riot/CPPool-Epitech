/*
** EPITECH PROJECT, 2020
** Piscine
** File description:
** Box
*/

#ifndef BOX_HPP_
#define BOX_HPP_

#include "Wrap.hpp"

class Box : public Wrap {
	public:
		Box(const std::string name);
		~Box();
		bool wrapMeThat(Object *obj) override;
		Object *openMe();
		void closeMe();
		void set_isOpen(bool value);

	protected:
		bool _isOpen;
	private:
};

#endif /* !BOX_HPP_ */
